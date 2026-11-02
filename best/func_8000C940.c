extern s32 D_80012920;
extern u8 D_80017700;
extern u8 D_80017710;
extern u8 D_80011BB0;
extern u8 D_80011BB4;
extern u8 D_80017730;
extern s32 func_80006D30(void *, void *, s32);
extern s32 func_8000CB60(void *, s32, s32);
extern s32 func_8000C9E0(void *, void *, s32);
extern s32 func_8000C620(void *, void *, s32);
extern s32 D_80000308;
extern s32 D_A0000000;
extern s32 func_800072E0(void);
extern s32 func_80007300(s32);
void func_8000C7D4(void);
s32 func_8000C940(s32 a0, s32 *a1)
{
  if (!a1)
  {
    func_8000C620(&D_80011BB0, &D_80011BB4, 0x3d);
  }
  while ((*((volatile u32 *) 0xa4600010)) & 3)
  {
  }

  *a1 = *((volatile s32 *) ((D_80000308 | a0) | ((s32) (&D_A0000000))));
 do { } while (0);
  return 0;
}

void func_8000CC90(s32 a0, s32 a1, s32 a2);
void func_8000CCF0(void);
