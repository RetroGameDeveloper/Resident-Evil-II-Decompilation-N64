#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
s32 func_80030F0C_ovl_01(s32 arg0, s32 arg1)
{
  s32 temp_a0;
  int new_var;
  new_var = 1;
  temp_a0 = (arg0 - new_var) + arg1;
  return temp_a0 - (temp_a0 % arg1);
}

