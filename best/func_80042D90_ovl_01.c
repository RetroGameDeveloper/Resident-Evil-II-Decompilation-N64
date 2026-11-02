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
extern u16 D_801399F0;
void func_80042D90_ovl_01(u16 *arg0)
{
  s32 var_a1;
  s32 var_a3;
  u16 *var_a0;
  u16 *var_a2;
  u16 *var_t0;
  u16 *var_v1;
  u16 temp_v0;
  var_a0 = arg0;
  var_t0 = &D_801399F0;
  var_a3 = 2;
  do
  {
    var_a2 = var_t0;
    var_a1 = 2;
    var_v1 = var_a0;
 do { loop_2: temp_v0 = *var_v1; var_v1 += 2; var_a1 -= 1; *var_a2 = temp_v0; var_a2 += 2; if (var_a1 != (-1)) { goto loop_2; } var_t0 += 6; var_a3 -= 1; var_a0 += 6; } while (0);
  }
  while (var_a3 != (-1));
}
