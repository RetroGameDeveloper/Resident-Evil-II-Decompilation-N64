
s32 func_800072E0(void);void func_80007300(s32);void func_80024D60_ovl_01(void);void func_80026AE0_ovl_01(void);void func_8006B40C_ovl_01(s32,s32,s32);void func_8006B6E4_ovl_01(void);extern u8 D_80112720_ovl_01,D_80112908_ovl_01;
void func_800270E0_ovl_01(void){u8 *base=&D_80112908_ovl_01;u8*flag=&D_80112720_ovl_01;s32 t;func_80026AE0_ovl_01();func_80024D60_ovl_01();t=func_800072E0();base[0]=4;func_8006B40C_ovl_01(0,0,2);*flag=1;func_8006B40C_ovl_01(1,0,1);base[*flag]=1;func_80007300(t);func_8006B6E4_ovl_01();}
f32 func_80083E90_ovl_01(f32 a,f32 b,f32 c,f32 d){f32 x=c-a;f32 y=d-b;x=x*x;y=y*y;return x+y;}
extern u8 D_800C7650_ovl_01[];extern u8 D_800E9127_ovl_01;extern s32 D_8011C350_ovl_01[];s32 func_80026948_ovl_01(u16,void*);s32 func_80026AC0_ovl_01(void);
void func_80084450_ovl_01(void){u8*base=D_800C7650_ovl_01;if(D_800E9127_ovl_01!=2){u8*p=base+0x18000;s32 v=*(s32*)(p+0x1a3c);if(v&0x20000000)*(s32*)(p+0x1a3c)=v&0xdfffffff;else{s32 a=*(s16*)(p+0x215f8),b=*(s16*)(p+0x215fa),c=*(s16*)(p+0x215fc);u16 n=*(u16*)(D_8011C350_ovl_01[a]+b*4+c*2);func_80026948_ovl_01(n,base);func_80026AC0_ovl_01();}}}
s32 func_800845AC_ovl_01(void*);extern u8 D_800C7650_ovl_01[];void func_80084540_ovl_01(void){u8*p=D_800C7650_ovl_01+0x18000;s32 v=*(s32*)(p+0x1a80);if(!(v&0x80000)||((*(s32*)(p+0x1a3c)&0x04000100)!=0x04000000))func_800845AC_ovl_01(p);}
