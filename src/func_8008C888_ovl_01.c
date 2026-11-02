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
M2C_UNK func_8008C2F4_ovl_01(u32, s32, M2C_UNK, M2C_UNK);
u32 func_8008C498_ovl_01(M2C_UNK);
M2C_UNK func_8008C6A8_ovl_01(M2C_UNK);
M2C_UNK func_8008C950_ovl_01(s32, s32);
void func_8008C888_ovl_01(s32 arg0, M2C_UNK arg1, s32 arg2)
{
  s32 var_a0;
  s32 var_a1;
  u32 temp_a0;
  u32 temp_s0;
  temp_s0 = func_8008C498_ovl_01(0);
  temp_a0 = temp_s0;
  if (((u32) (arg0 - 0xE)) < 6U)
  {
    func_8008C6A8_ovl_01(1);
    func_8008C2F4_ovl_01(0U, arg0, arg1, 1);
    func_8008C950_ovl_01(0, arg2);
    func_8008C2F4_ovl_01(1U, arg0, arg1, 2);
    var_a0 = 1;
    var_a1 = arg2 + 0x4B0;
  }
  else
  {
    func_8008C2F4_ovl_01(temp_a0, arg0, arg1, 0);
    var_a0 = temp_s0 >> 1;
    var_a0 = var_a0 + temp_s0;
    var_a1 = arg2;
  }
  if (1)
  {
    func_8008C950_ovl_01(var_a0, var_a1);
  }
}

