extern void func_80036C14_ovl_01(void *, s32, s32, s32);
extern void func_80036D44_ovl_01(void *, s32, s32, s32);
void func_80166790_ovl_14(void *a)
{
  s32 zero = 0;
  int new_var;
  s32 st = *((u8 *) (((char *) a) + 6));
  u8 ns;
  if (st != 1)
  {
    if (st < 2)
    {
      if (!(st == 0))
      {
        return;
      }
      else
      {
        *((u8 *) (((char *) a) + 0x1e9)) = 0;
        *((u16 *) (((char *) a) + 0x2c8)) |= 4;
        func_80036C14_ovl_01(a, zero, zero, zero);
        new_var = 0xFF;
        if ((*((s16 *) (((char *) a) + 0x270))) == 0)
        {
          return;
        }
        *((s16 *) (((char *) a) + 0x270)) = 0;
        *((u8 *) (((char *) a) + 0x1e8)) = new_var;
        ns = *((u8 *) (((char *) a) + 6));
      }
    }
    else
    {
      return;
    }
  }
  else
  {
    func_80036D44_ovl_01(a, zero, zero, zero);
    if ((*((s16 *) (((char *) a) + 0x270))) == 0)
    {
      return;
    }
    ns = *((u8 *) (((char *) a) + 6));
  }
  *((u8 *) (((char *) a) + 6)) = ns + 1;
}

