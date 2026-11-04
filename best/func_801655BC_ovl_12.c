s32 func_80032B8C_ovl_01(void *, s32);
s32 func_80033634_ovl_01(void);
void func_80164FB0_ovl_12(void *, s32, s32);
void func_801655BC_ovl_12(void *p, s32 a1, s32 a2)
{
  u32 add;
  if ((*((s8 *) (((u8 *) p) + 0x206))) == 0)
  {
    add = 40;
    ((u8 *) p)[0x206] = 1;
    if (((u8 *) p)[5] != 12)
    {
      *((s16 *) (((u8 *) p) + 0x1E0)) = add;
      func_80032B8C_ovl_01(p, *((s16 *) (((u8 *) p) + 0x1F4)));
      add = 0xFF80;
      *((u16 *) (((u8 *) p) + 0x66)) = (*((u16 *) (((u8 *) p) + 0x66))) + ((func_80033634_ovl_01() & 0xFF) + add);
    }
  }
  func_80164FB0_ovl_12(p, a1, a2);
  if (((u8 *) p)[7] >= 2)
  {
    ((u8 *) p)[0x2BF] &= 0xBF;
  }
}

