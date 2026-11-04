extern s32 D_800128F0;
extern void *D_800128F4;
extern void *D_800128F8;
extern void *D_800128FC;
extern void *D_80012900;
extern void *D_80012904;
extern void *D_80012908;
extern s32 D_80012920;
extern u8 D_800164B0;
extern u8 D_80017660;
extern int D_80017678;
extern u8 D_80017710;
void func_80006D30(void *, void *, s32);
void osCreateThread(void *, s32, void *, void *, void *, s32);
s32 func_80007010(s32);
s32 func_800072E0(void);
void func_80007300(s32);
void func_8000C780(void);
void func_8000CC90(s32, void *, u32);
void func_8000CDF0(s32, s32);
void func_8000DB90(void *);
void __osDevMgrMain(void);
void func_8000C870(void);
void func_80007C20(void);
void func_8000BE60(s32 arg0, void *arg1, void *arg2, s32 arg3)
{
  u8 *new_var;
  s32 *p;
  s32 now;
  s32 token;
  s32 saved;
  p = &D_800128F0;
  if ((*p) != 0)
  {
    return;
  }
  func_80006D30(arg1, arg2, arg3);
  new_var = &D_80017660;
  func_80006D30(new_var, &D_80017678, 1);
  if (D_80012920 == 0)
  {
    func_8000C780();
  }
  func_8000CC90(8, &D_80017660, 0x22222222);
  saved = -1;
  now = func_80007010(0);
  if (now < arg0)
  {
    if (p)
    {
      saved = now;
      func_8000CDF0(0, arg0);
    }
    else
    {
      saved = now;
      func_8000CDF0(0, arg0);
    }
  }
  token = func_800072E0();
  *p = 1;
  D_80012900 = &D_80017710;
  D_80012904 = (void *) func_8000C870;
  D_80012908 = (void *) func_80007C20;
  D_800128F4 = &D_800164B0;
  D_800128F8 = arg1;
  D_800128FC = new_var;
  osCreateThread(&D_800164B0, 0, (void *) __osDevMgrMain, p, &D_80017660, arg0);
  func_8000DB90(&D_800164B0);
  func_80007300(token);
  if (saved != (-1))
  {
    func_8000CDF0(0, saved);
  }
}

