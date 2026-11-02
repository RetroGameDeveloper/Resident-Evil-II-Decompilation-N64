typedef struct {u8 b[0x2b4];} Obj; typedef struct {u8 b[0x6];u8 state;u8 b7[8];u8 f;} Small;
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];
extern s32 func_80032F94_ovl_01_8C0(void*,void*);
extern u8 func_80059E30_ovl_01(s32,s32);
extern u8 func_80080D94_ovl_01_9C(void*,s32,s32);
extern s32 func_80033174_ovl_01(void*,void*);
extern void func_80166A48_ovl_12(s32,s32);
extern void func_80166A9C_ovl_12(s32);
u8 func_80166678_ovl_12(Obj *arg0,s32 arg1){
 Small *s3=(Small*)((u8*)arg0+0x2b4); u8 *s0; s32 v0; u8 s1;
 u8 *a1=*(u8**)((u8*)arg0+0x234);
 if(arg1) s0=*(u8**)(D_800C7650_ovl_01+0x19d3c); else s0=D_800E10D0_ovl_01;
 if(*(s16*)(s0+0x1f2)>=0x15) v0=0x3e8; else v0=0x2bc;
 if(s3->state) return s3->state;
 if(*(u8*)(s0+0x26f)&0x80) goto done;
 if(!func_80032F94_ovl_01_8C0(s0+0x28,a1+0x5e0+0x4c)) goto done;
 if(*(s16*)((u8*)arg0+0x25e)-0x708 >= *(s32*)((u8*)arg0+0x2c)) goto done;
 if(*(u8*)(s0+0x1a2)!=*((u8*)arg0+0x1a2)) goto done;
 *(u16*)((u8*)s3+2)=0;
 if(!arg1) s1=func_80059E30_ovl_01(0x14,0); else s1=func_80080D94_ovl_01_9C(arg0,0x14,0);
 if(s1==2 && !(func_80033174_ovl_01(arg0,s0)&0xff) && !s3->f){
  if(*(u8*)(s0+8)!=0xf){
   s3->state=s1;*(u16*)((u8*)arg0+0x1e0)=0;*(u8*)(s0+0x26f)=0xff;
   *(u32*)s0|=0xa;*(u16*)(s0+0x66)=*(u16*)((u8*)arg0+0x66)+0x800;
   *(u32*)(D_800C7650_ovl_01+0x19a3c)&=0xfbffffff;
   *((u8*)arg0+0x26f)|=0x80;goto done;
  }
 }
 *(u16*)((u8*)arg0+6)=0x300;s3->state=1;
 if(*(s16*)(s0+0x1f2)>=0){func_80166A48_ovl_12(arg1,func_80033174_ovl_01(arg0,s0)&0xff);}
 else {func_80166A9C_ovl_12(arg1);*(u32*)arg0|=2;}
 done: return s3->state;
}
