// Automatically generated from JavaScriptCore/wasm/js/WebAssemblyModuleConstructor.cpp using JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex constructorTableWebAssemblyModuleIndex[8] = {
    { 2, -1 },
    { 0, -1 },
    { 1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
};

static const struct HashTableValue constructorTableWebAssemblyModuleValues[3] = {
   { "customSections", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(webAssemblyModuleCustomSections), (intptr_t)(2) } },
   { "imports", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(webAssemblyModuleImports), (intptr_t)(1) } },
   { "exports", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(webAssemblyModuleExports), (intptr_t)(1) } },
};

static const struct HashTable constructorTableWebAssemblyModule =
    { 3, 7, false, constructorTableWebAssemblyModuleValues, constructorTableWebAssemblyModuleIndex };

} // namespace JSC
