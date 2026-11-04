extern u8 D_80166C08_ovl_12[];
extern s32 func_80065400_ovl_01(void *,s32,u8,s32);
extern s16 func_80032EA4_ovl_01(void *,s16,s16,s16);
extern void func_80032B8C_ovl_01(void *,s32);
extern s32 func_80033634_ovl_01(void);
extern s32 func_80089D34_ovl_01(void *,s32,s32,s32);
extern void func_80166B54_ovl_12(void *);
extern void func_80166510_ovl_12(void *,s16);
extern void func_80166458_ovl_12(void *);
extern void func_80166AE0_ovl_12(void *);
void func_80163CE0_ovl_12(void *p,s32 a,s32 b) {
 u8 *q=(u8*)p+0x2b4; s16 t; u16 n;
 if(*(u8*)((u8*)p+6)==0) {
  func_80065400_ovl_01(p,0,0,0);
  *(u8*)((u8*)p+6)=1;
  *(u8*)((u8*)p+0x2b4)=func_80033634_ovl_01();
  *(s16*)((u8*)p+0x1f4)=D_80166C08_ovl_12[func_80033634_ovl_01()&7]+30;
  *(u16*)(q+2)+=300;
 }
 func_80166B54_ovl_12(p);
 func_80065400_ovl_01(p,0,*(u8*)((u8*)p+0x2b4),1);
 t=func_80032EA4_ovl_01(p,*(s16*)((u8*)p+0x260),*(s16*)((u8*)p+0x262),*(s16*)(q+0xc));
 *(u16*)((u8*)p+0x66)+=t;
 func_80032B8C_ovl_01(p,0);
 n=*(u16*)((u8*)p+0x1f4)-1; *(u16*)((u8*)p+0x1f4)=n;
 if((n<<16)==0) {*(s8*)((u8*)p+5)=2; *(u16*)((u8*)p+6)=0; *(s8*)(q+5)=0;}
 func_80166510_ovl_12(p,t);
 func_80089D34_ovl_01(p,a,b,0x100);
 func_80166458_ovl_12(p); func_80166AE0_ovl_12(p);
}
