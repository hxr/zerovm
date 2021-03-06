/* src/validator/x86/decoder/gen/ncopcode_operand_flag_impl.h
 * THIS FILE IS AUTO_GENERATED DO NOT EDIT.
 *
 * This file was auto-generated by enum_gen.py
 * from file ncopcode_operand_flag.enum
 */

/* Define the corresponding names of NaClOpFlag. */
static const char* const g_NaClOpFlagName[NaClOpFlagEnumSize + 1] = {
  "OpUse",
  "OpSet",
  "OpDest",
  "OpAddress",
  "OpImplicit",
  "OperandNear",
  "OperandFar",
  "OperandRelative",
  "OperandZeroExtends_v",
  "OperandSignExtends_v",
  "AllowGOperandWithOpcodeInModRm",
  "NaClOpFlagEnumSize"
};

const char* NaClOpFlagName(NaClOpFlag name) {
  return name <= NaClOpFlagEnumSize
    ? g_NaClOpFlagName[name]
    : "NaClOpFlag???";
}
