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
extern s32 D_80139A04;
inline s32 inline_fn(s32 *arg0)
{
  return *arg0;
}

void func_80042DDC_ovl_01(s32 arg0)
{
  s32 *var_a0;
  s32 *var_a1;
  s32 temp_v0;
  s32 var_v1;
  var_a1 = &D_80139A04;
  var_v1 = 2;
  var_a0 = arg0 + 0x14;
  do
  {
    *var_a1 = (temp_v0 = inline_fn(var_a0));
    var_a0 = (var_a1 = 4);
    var_v1 -= 1;
  }
  while (var_v1 != (-1));
}

