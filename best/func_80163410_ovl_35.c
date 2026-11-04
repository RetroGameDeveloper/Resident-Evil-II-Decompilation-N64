#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
void func_80163410_ovl_35(void *arg0, s32 arg1, s32 arg2) {
 u8 *p=arg0;
 s32 one=1;
 if(!p[7]) {
  p[7]=one; *(u32 *)(p+0x1E8)=0x05000F00;
  func_80166520_ovl_35(arg0, (void *)one);
  p[0x2C5]=one; *(s16 *)(p+0x64)=0;
 }
 if(func_80089D34_ovl_01(arg0,arg1,arg2,0x100)) {
  *(s16 *)(p+6)=0x100;
  *(u32 *)p |= 4;
  func_80166520_ovl_35(arg0);
  *(s16 *)(p+0x1E0)=0x30F;
  func_80032B8C_ovl_01(arg0,0);
  *(u32 *)(p+0x1E8)=0x08000000;
  *(u16 *)(p+0x68)-=0x400;
  func_80089D34_ovl_01(arg0,arg1,arg2,0x100);
 }
}
