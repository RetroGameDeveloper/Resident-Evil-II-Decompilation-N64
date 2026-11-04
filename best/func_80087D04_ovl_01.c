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
M2C_UNK func_80007F50(void *);
s32 func_800082D0(M2C_UNK *, void *, s32);
extern char D_80129E34_ovl_01;
extern M2C_UNK D_8013A290;
void func_80087D04_ovl_01(s32 arg0)
{
  void *temp_s0;
  temp_s0 = (arg0 * 0x68) + (&D_80129E34_ovl_01);
  if (func_800082D0(&D_8013A290, temp_s0, arg0) == 0)
  {
    func_80007F50(temp_s0);
    func_80007F50(temp_s0);
    func_80007F50(temp_s0);
  }
}

