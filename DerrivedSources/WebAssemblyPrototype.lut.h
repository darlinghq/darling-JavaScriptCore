// Automatically generated from JavaScriptCore/wasm/js/WebAssemblyPrototype.cpp using JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex prototypeTableWebAssemblyIndex[8] = {
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, -1 },
    { 2, -1 },
    { 1, -1 },
};

static const struct HashTableValue prototypeTableWebAssemblyValues[3] = {
   { "compile", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(webAssemblyCompileFunc), (intptr_t)(1) } },
   { "instantiate", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(webAssemblyInstantiateFunc), (intptr_t)(1) } },
   { "validate", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(webAssemblyValidateFunc), (intptr_t)(1) } },
};

static const struct HashTable prototypeTableWebAssembly =
    { 3, 7, false, prototypeTableWebAssemblyValues, prototypeTableWebAssemblyIndex };

} // namespace JSC
