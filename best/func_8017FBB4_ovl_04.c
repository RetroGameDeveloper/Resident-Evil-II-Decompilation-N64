s32 func_80082230_ovl_01(void *,void *,s32);
extern u8 D_80180A70_ovl_04[];
#define F(p,t,o) (*(t *)((u8 *)(p)+(o)))
void func_8017FBB4_ovl_04(void *arg1,s32 arg2,s32 arg3,s32 arg4) {
 u8 *s0=(u8*)arg1; s32 s6=arg3; s32 s7=arg4; s32 s2=0; u8 *s5=D_80180A70_ovl_04; u8 *s4=s5+0x52; u8 *s1=s5; u8 *s3=s5;
 s0[0x14A]=0; F(s0,s32,0x14C)=0;
 do {
  if(F(s3,s32,8)!=0) { s4+=0x20; goto end; }
  if(F(s1,u16,0x50)!=(s6&0xFFFF)) { s4+=0x20; goto skip; }
  if(F(s1,s32,0x4C)!=s7) { s4+=0x20; goto end; }
  func_80082230_ovl_01((u8*)s0+F(s0,u8,0x14A)*0x32,s5+0x56+s2*0x20,0x10);
  func_80082230_ovl_01((u8*)s0+F(s0,u8,0x14A)*0x32+0x10,s4,4);
  F(s0,s8,F(s0,u8,0x14A)*0x32+0x14)=0;
  F(s0,s8,F(s0,u8,0x14A)*0x32+0x15)=0;
  F(s0,s32,0x150+F(s0,u8,0x14A)*4)=F(s1,s32,0x48);
  F(s0,s32,0x14C)+=F(s1,s32,0x48);
  s0[0x14A]++;
skip: s4+=0x20;
end: s1+=0x20; s2++; s3+=4;
 } while(s2<0x10);
}
