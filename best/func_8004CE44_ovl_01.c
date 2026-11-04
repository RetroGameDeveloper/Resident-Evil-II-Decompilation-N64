typedef struct 
{
  u32 a;
  void *(*fn)(void *, s32, s32);
} Obj284;
void func_80028420_ovl_01(Obj284 *p);
extern u8 D_8010B2C8_ovl_01[];
void func_8004CE44_ovl_01(s32 i)
{
  u8 *p;
  p += (s32) (i * 0x1C8);
  *((u16 *) p) = 0;
  p = (char *) D_8010B2C8_ovl_01;
}

extern s32 func_80007450(void *, s32, s32);
extern s32 func_8000DCB0(s32);
extern u8 D_80139AD0[];
typedef struct 
{
  u8 pad[0x390];
  s32 *sub;
} ObjCE;
typedef struct 
{
  u8 pad[0x1B8];
  s32 value;
} Sub;
void func_8004CE70_ovl_01(s32 x);
void func_8004CEC0_ovl_01(s32 i);
