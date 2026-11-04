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
M2C_UNK func_800A5618_ovl_01();
M2C_UNK func_800A5660_ovl_01();
M2C_UNK func_800AF0D0_ovl_01(s32);
extern u8 D_801362B0_ovl_01;
extern M2C_UNK D_80148180;
inline M2C_UNK *inline_fn()
{
  return &D_80148180;
}

void func_800A93CC_ovl_01(s32 arg0)
{
  u8 *temp_a0;
  M2C_UNK *new_var;
  if (D_801362B0_ovl_01 != 0)
  {
    func_800A5618_ovl_01();
    temp_a0 = (new_var = inline_fn());
    temp_a0 = (arg0 * 0x18) + temp_a0;
    if ((*temp_a0) == 1)
    {
      *temp_a0 = 0;
      func_800AF0D0_ovl_01(arg0);
    }
    func_800A5660_ovl_01();
  }
}

