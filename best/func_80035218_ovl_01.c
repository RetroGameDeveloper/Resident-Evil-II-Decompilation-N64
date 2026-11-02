extern s32 func_800352F4_ovl_01(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32);
extern s32 func_80040E88_ovl_01(void *,void *);
extern s32 func_8004251C_ovl_01(void *,void *,void *);
void func_80035218_ovl_01(void *arg0) {
 volatile u8 frame[0x80];
 void *s1;
 void *s2;
 void *s0;
 s32 flag;
 s32 sum;
 u16 x,y;
 s1=*(void **)((u8 *)arg0+0x234);
 s2=s1;
 flag=*(s32 *)arg0 & 0x40000;
 s1=(u8 *)s1+0x1608;
 if(!flag) func_80040E88_ovl_01((u8 *)arg0+0x64,(u8 *)arg0+0x14);
 s0=(u8 *)s2+0x38;
 func_8004251C_ovl_01((u8 *)arg0+0x14,(u8 *)s2+8,s0);
 *(u16 *)((u8 *)s2+0x5C)&=0xFFF;
 x=*(u16 *)((u8 *)arg0+0x66);
 y=*(u16 *)((u8 *)s2+0x5A);
 sum=(s16)(x+y);
 func_800352F4_ovl_01((s32)s1,(s32)s0,0x190,0x64,0x30,4,0,0x32,0,0x30,6,0,sum);
}
