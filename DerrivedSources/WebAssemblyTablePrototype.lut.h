// Automatically generated from JavaScriptCore/wasm/js/WebAssemblyTablePrototype.cpp using JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex prototypeTableWebAssemblyTableIndex[8] = {
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { 2, -1 },
    { -1, -1 },
    { 3, -1 },
};

static const struct HashTableValue prototypeTableWebAssemblyTableValues[4] = {
   { "length", DontEnum|Accessor, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(webAssemblyTableProtoFuncLength), (intptr_t)static_cast<NativeFunction>(nullptr) } },
   { "grow", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(webAssemblyTableProtoFuncGrow), (intptr_t)(1) } },
   { "get", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(webAssemblyTableProtoFuncGet), (intptr_t)(1) } },
   { "set", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(webAssemblyTableProtoFuncSet), (intptr_t)(2) } },
};

static const struct HashTable prototypeTableWebAssemblyTable =
    { 4, 7, true, prototypeTableWebAssemblyTableValues, prototypeTableWebAssemblyTableIndex };

} // namespace JSC
