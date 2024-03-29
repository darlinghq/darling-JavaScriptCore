// Generated by opcode_generator.rb from JavaScriptCore/b3/air/AirOpcode.opcodes -- do not edit!
#ifndef AirOpcode_h
#define AirOpcode_h
namespace JSC { namespace B3 { namespace Air {
enum Opcode : int16_t {
    Nop,
    Add32,
    Add8,
    Add16,
    Add64,
    AddDouble,
    AddFloat,
    Sub32,
    Sub64,
    SubDouble,
    SubFloat,
    Neg32,
    Neg64,
    NegateDouble,
    NegateFloat,
    Mul32,
    Mul64,
    MultiplyAdd32,
    MultiplyAdd64,
    MultiplySub32,
    MultiplySub64,
    MultiplyNeg32,
    MultiplyNeg64,
    MultiplySignExtend32,
    Div32,
    UDiv32,
    Div64,
    UDiv64,
    MulDouble,
    MulFloat,
    DivDouble,
    DivFloat,
    X86ConvertToDoubleWord32,
    X86ConvertToQuadWord64,
    X86Div32,
    X86UDiv32,
    X86Div64,
    X86UDiv64,
    Lea32,
    Lea64,
    And32,
    And64,
    AndDouble,
    AndFloat,
    OrDouble,
    OrFloat,
    XorDouble,
    XorFloat,
    Lshift32,
    Lshift64,
    Rshift32,
    Rshift64,
    Urshift32,
    Urshift64,
    RotateRight32,
    RotateRight64,
    RotateLeft32,
    RotateLeft64,
    Or32,
    Or64,
    Xor32,
    Xor64,
    Not32,
    Not64,
    AbsDouble,
    AbsFloat,
    CeilDouble,
    CeilFloat,
    FloorDouble,
    FloorFloat,
    SqrtDouble,
    SqrtFloat,
    ConvertInt32ToDouble,
    ConvertInt64ToDouble,
    ConvertInt32ToFloat,
    ConvertInt64ToFloat,
    CountLeadingZeros32,
    CountLeadingZeros64,
    ConvertDoubleToFloat,
    ConvertFloatToDouble,
    Move,
    Swap32,
    Swap64,
    Move32,
    StoreZero32,
    StoreZero64,
    SignExtend32ToPtr,
    ZeroExtend8To32,
    SignExtend8To32,
    ZeroExtend16To32,
    SignExtend16To32,
    MoveFloat,
    MoveDouble,
    MoveZeroToDouble,
    Move64ToDouble,
    Move32ToFloat,
    MoveDoubleTo64,
    MoveFloatTo32,
    Load8,
    LoadAcq8,
    Store8,
    StoreRel8,
    Load8SignedExtendTo32,
    LoadAcq8SignedExtendTo32,
    Load16,
    LoadAcq16,
    Load16SignedExtendTo32,
    LoadAcq16SignedExtendTo32,
    Store16,
    StoreRel16,
    LoadAcq32,
    StoreRel32,
    LoadAcq64,
    StoreRel64,
    Xchg8,
    Xchg16,
    Xchg32,
    Xchg64,
    AtomicStrongCAS8,
    AtomicStrongCAS16,
    AtomicStrongCAS32,
    AtomicStrongCAS64,
    BranchAtomicStrongCAS8,
    BranchAtomicStrongCAS16,
    BranchAtomicStrongCAS32,
    BranchAtomicStrongCAS64,
    AtomicAdd8,
    AtomicAdd16,
    AtomicAdd32,
    AtomicAdd64,
    AtomicSub8,
    AtomicSub16,
    AtomicSub32,
    AtomicSub64,
    AtomicAnd8,
    AtomicAnd16,
    AtomicAnd32,
    AtomicAnd64,
    AtomicOr8,
    AtomicOr16,
    AtomicOr32,
    AtomicOr64,
    AtomicXor8,
    AtomicXor16,
    AtomicXor32,
    AtomicXor64,
    AtomicNeg8,
    AtomicNeg16,
    AtomicNeg32,
    AtomicNeg64,
    AtomicNot8,
    AtomicNot16,
    AtomicNot32,
    AtomicNot64,
    AtomicXchgAdd8,
    AtomicXchgAdd16,
    AtomicXchgAdd32,
    AtomicXchgAdd64,
    AtomicXchg8,
    AtomicXchg16,
    AtomicXchg32,
    AtomicXchg64,
    LoadLink8,
    LoadLinkAcq8,
    StoreCond8,
    StoreCondRel8,
    LoadLink16,
    LoadLinkAcq16,
    StoreCond16,
    StoreCondRel16,
    LoadLink32,
    LoadLinkAcq32,
    StoreCond32,
    StoreCondRel32,
    LoadLink64,
    LoadLinkAcq64,
    StoreCond64,
    StoreCondRel64,
    Depend32,
    Depend64,
    AtomicXchgOr8,
    AtomicXchgOr16,
    AtomicXchgOr32,
    AtomicXchgOr64,
    AtomicXchgClear8,
    AtomicXchgClear16,
    AtomicXchgClear32,
    AtomicXchgClear64,
    AtomicXchgXor8,
    AtomicXchgXor16,
    AtomicXchgXor32,
    AtomicXchgXor64,
    Compare32,
    Compare64,
    Test32,
    Test64,
    CompareDouble,
    CompareFloat,
    Branch8,
    Branch32,
    Branch64,
    BranchTest8,
    BranchTest32,
    BranchTest64,
    BranchTestBit64,
    BranchTestBit32,
    BranchDouble,
    BranchFloat,
    BranchAdd32,
    BranchAdd64,
    BranchMul32,
    BranchMul64,
    BranchSub32,
    BranchSub64,
    BranchNeg32,
    BranchNeg64,
    MoveConditionally32,
    MoveConditionally64,
    MoveConditionallyTest32,
    MoveConditionallyTest64,
    MoveConditionallyDouble,
    MoveConditionallyFloat,
    MoveDoubleConditionally32,
    MoveDoubleConditionally64,
    MoveDoubleConditionallyTest32,
    MoveDoubleConditionallyTest64,
    MoveDoubleConditionallyDouble,
    MoveDoubleConditionallyFloat,
    MemoryFence,
    StoreFence,
    LoadFence,
    Jump,
    RetVoid,
    Ret32,
    Ret64,
    RetFloat,
    RetDouble,
    Oops,
    EntrySwitch,
    Shuffle,
    Patch,
    CCall,
    ColdCCall,
    WasmBoundsCheck,
};
static const unsigned numOpcodes = 244;
} } } // namespace JSC::B3::Air
namespace WTF {
class PrintStream;
JS_EXPORT_PRIVATE void printInternal(PrintStream&, JSC::B3::Air::Opcode);
} // namespace WTF
#endif // AirOpcode_h
