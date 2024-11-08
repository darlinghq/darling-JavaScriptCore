// Automatically generated from JavaScriptCore/runtime/DatePrototype.cpp using JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex datePrototypeTableIndex[133] = {
    { 41, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 4, -1 },
    { 29, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 6, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 3, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, 129 },
    { 24, -1 },
    { 10, 132 },
    { -1, -1 },
    { 19, 130 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { 25, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 26, -1 },
    { -1, -1 },
    { 33, -1 },
    { -1, -1 },
    { 35, -1 },
    { 9, 128 },
    { 22, -1 },
    { -1, -1 },
    { 16, -1 },
    { -1, -1 },
    { 11, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 23, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
    { -1, -1 },
    { 17, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 14, -1 },
    { -1, -1 },
    { -1, -1 },
    { 15, -1 },
    { 38, -1 },
    { -1, -1 },
    { -1, -1 },
    { 18, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 5, -1 },
    { -1, -1 },
    { -1, -1 },
    { 28, -1 },
    { -1, -1 },
    { 32, -1 },
    { -1, -1 },
    { -1, -1 },
    { 8, -1 },
    { 42, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 36, -1 },
    { 27, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 20, -1 },
    { 13, 131 },
    { 7, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 43, -1 },
    { -1, -1 },
    { -1, -1 },
    { 39, -1 },
    { -1, -1 },
    { 40, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 21, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 12, -1 },
    { 30, -1 },
    { 31, -1 },
    { 34, -1 },
    { 37, -1 },
};

static const struct HashTableValue datePrototypeTableValues[44] = {
   { "toString", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncToString), (intptr_t)(0) } },
   { "toISOString", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncToISOString), (intptr_t)(0) } },
   { "toDateString", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncToDateString), (intptr_t)(0) } },
   { "toTimeString", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncToTimeString), (intptr_t)(0) } },
   { "toLocaleString", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(datePrototypeToLocaleStringCodeGenerator), (intptr_t)0 } },
   { "toLocaleDateString", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(datePrototypeToLocaleDateStringCodeGenerator), (intptr_t)0 } },
   { "toLocaleTimeString", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(datePrototypeToLocaleTimeStringCodeGenerator), (intptr_t)0 } },
   { "valueOf", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetTimeIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetTime), (intptr_t)(0) } },
   { "getTime", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetTimeIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetTime), (intptr_t)(0) } },
   { "getFullYear", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetFullYearIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetFullYear), (intptr_t)(0) } },
   { "getUTCFullYear", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetUTCFullYearIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetUTCFullYear), (intptr_t)(0) } },
   { "getMonth", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetMonthIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetMonth), (intptr_t)(0) } },
   { "getUTCMonth", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetUTCMonthIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetUTCMonth), (intptr_t)(0) } },
   { "getDate", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetDateIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetDate), (intptr_t)(0) } },
   { "getUTCDate", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetUTCDateIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetUTCDate), (intptr_t)(0) } },
   { "getDay", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetDayIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetDay), (intptr_t)(0) } },
   { "getUTCDay", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetUTCDayIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetUTCDay), (intptr_t)(0) } },
   { "getHours", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetHoursIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetHours), (intptr_t)(0) } },
   { "getUTCHours", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetUTCHoursIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetUTCHours), (intptr_t)(0) } },
   { "getMinutes", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetMinutesIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetMinutes), (intptr_t)(0) } },
   { "getUTCMinutes", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetUTCMinutesIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetUTCMinutes), (intptr_t)(0) } },
   { "getSeconds", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetSecondsIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetSeconds), (intptr_t)(0) } },
   { "getUTCSeconds", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetUTCSecondsIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetUTCSeconds), (intptr_t)(0) } },
   { "getMilliseconds", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetMillisecondsIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetMilliSeconds), (intptr_t)(0) } },
   { "getUTCMilliseconds", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetUTCMillisecondsIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetUTCMilliseconds), (intptr_t)(0) } },
   { "getTimezoneOffset", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetTimezoneOffsetIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetTimezoneOffset), (intptr_t)(0) } },
   { "getYear", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), DatePrototypeGetYearIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncGetYear), (intptr_t)(0) } },
   { "setTime", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetTime), (intptr_t)(1) } },
   { "setMilliseconds", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetMilliSeconds), (intptr_t)(1) } },
   { "setUTCMilliseconds", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetUTCMilliseconds), (intptr_t)(1) } },
   { "setSeconds", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetSeconds), (intptr_t)(2) } },
   { "setUTCSeconds", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetUTCSeconds), (intptr_t)(2) } },
   { "setMinutes", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetMinutes), (intptr_t)(3) } },
   { "setUTCMinutes", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetUTCMinutes), (intptr_t)(3) } },
   { "setHours", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetHours), (intptr_t)(4) } },
   { "setUTCHours", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetUTCHours), (intptr_t)(4) } },
   { "setDate", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetDate), (intptr_t)(1) } },
   { "setUTCDate", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetUTCDate), (intptr_t)(1) } },
   { "setMonth", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetMonth), (intptr_t)(2) } },
   { "setUTCMonth", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetUTCMonth), (intptr_t)(2) } },
   { "setFullYear", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetFullYear), (intptr_t)(3) } },
   { "setUTCFullYear", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetUTCFullYear), (intptr_t)(3) } },
   { "setYear", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncSetYear), (intptr_t)(1) } },
   { "toJSON", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateProtoFuncToJSON), (intptr_t)(1) } },
};

static const struct HashTable datePrototypeTable =
    { 44, 127, false, nullptr, datePrototypeTableValues, datePrototypeTableIndex };

} // namespace JSC
