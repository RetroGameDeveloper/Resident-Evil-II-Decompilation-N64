void func_8016579C_ovl_13(void *arg0)
{
  u8 *new_var;
  u8 *p = arg0;
  if (p[6])
  {
    return;
  }
  new_var = (*((u8 **) (p + 0x208))) + 0xe;
  p[0x26f] = 0x80;
  *((u32 *) p) |= 2;
  *((u8 *) new_var) = 0;
  p[6] = 1;
}

void func_80165B44_ovl_13(void *arg0);
s8 func_80033634_ovl_01(void);
s32 func_800377B0_ovl_01(s32, s32, void *, s16 *);
extern s32 D_800E8FC8_ovl_01;
void func_80166080_ovl_13(void *arg0);
void func_8016610C_ovl_13(void *arg0);
