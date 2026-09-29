# JavaScriptCore smoke test

`interpreter-execution.c` is a small C program that uses only the public
JavaScriptCore C API (`<JavaScriptCore/JavaScript.h>`). It checks that scripts
run with the JIT turned off, so that the interpreter has to execute them.

What it does, in order:

1. Sets `JSC_useJIT=false` in the environment, then creates a global context.
   The variable has to be set before JavaScriptCore initializes, which is why
   the test is a separate process.
2. Evaluates a loop that sums 0 to 99 and expects 4950.
3. Evaluates `throw new Error('expected')` and expects no value and an
   exception.
4. Evaluates `21*2` with a fresh exception slot and expects 42, which shows the
   context still works after the exception.
5. Releases the context and prints
   `PASS: interpreter evaluation, exception and recovery`.

Exit codes: 0 on success, 1 if `setenv` fails, 2 if the context cannot be
created, 3, 4 and 5 if step 2, 3 or 4 fails. The checks use return codes, not
`assert`, so they stay active when `NDEBUG` is defined.

To run it, compile it against the public headers in `darling/include` as a
Mach-O executable linked with JavaScriptCore, then run it inside Darling. A pass
is exit status 0 and the PASS line on standard output.

The test does not inspect which execution tier ran the scripts. It relies on
`JSC_useJIT=false` to keep them out of the JIT.
