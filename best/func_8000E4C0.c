extern s32 D_800129E0;
extern void *D_800129E4;
extern void *D_800129E8;
extern void *D_800129EC;
extern s32 D_800129F0;
extern s32 D_800129F4;
extern s32 D_800129F8;
extern u8 D_80017868;
extern u8 D_80018A20;
extern u8 D_80018A38;
extern s16 D_80018A50;
extern s8 D_80018A52;
extern s32 D_80018A54;
extern s16 D_80018A68;
extern s8 D_80018A6A;
extern s32 D_80018A6C;
void func_80006D30(void *, void *, s32);
void func_80006D60(void *, s32, void *, void *, void *, s32);
s32 func_80007010(s32);
s32 func_800072E0(void);
void func_80007300(s32);
void func_8000CC90(s32, void *, void *);
void func_8000CDF0(s32, s32);
void func_8000DB90(void *);
void func_8000DF10(void);
void func_8000E3B0(void);
void func_8000E658(void);
void func_8000E4C0(s32 arg0)
{
  s32 *p;
  s32 now;
  s32 token;
  s32 saved;
  s16 *p50;
  s16 *p68;
  p = &D_800129E0;
  if ((*p) != 0)
  {
    return;
  }
  saved = -1;
  func_8000DF10();
  func_80006D30(&D_80018A20, &D_80018A38, 5);
  p50 = &D_80018A50;
  p68 = &D_80018A68;
  *p50 = 0xD;
  D_80018A52 = 0;
  D_80018A54 = 0;
  *p68 = 0xE;
  D_80018A6A = 0;
  D_80018A6C = 0;
  func_8000CC90(7, &D_80018A20, p50);
  saved = 3;
  func_8000CC90(saved, &D_80018A20, p68);
  now = func_80007010(0);
  if (now < arg0)
  {
    saved = now;
    func_8000CDF0(0, arg0);
  }
  token = func_800072E0();
  *p = 1;
  D_800129E4 = &D_80017868;
  D_800129E8 = &D_80018A20;
  D_800129EC = &D_80018A20;
  D_800129F0 = 0;
  D_800129F4 = 0;
  D_800129F8 = 0;
  func_80006D60(&D_80017868, 0, (void *) func_8000E658, p, &D_80018A20, arg0);
  func_8000E3B0();
  func_8000DB90(&D_80017868);
  func_80007300(token);
  if (saved != (-1))
  {
    func_8000CDF0(0, saved);
  }
}

