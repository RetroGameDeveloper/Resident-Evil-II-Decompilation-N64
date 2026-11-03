extern void func_80032B8C_ovl_01(void *,s32);
extern void func_80032DEC_ovl_01(void *,s16,s16,s32);
extern s32 func_80033634_ovl_01(s32);
extern void func_80065400_ovl_01(void *,void *,s32,s32);
extern s32 func_80032F94_ovl_01_48(void *,void *,s16,s32);
extern void func_80089D34_ovl_01(void *,s32,s32,s32);
extern void func_80166458_ovl_12(void *);
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];
void func_80163F10_ovl_12(u8 *arg0,s32 arg1,s32 arg2) {
 u8 *p; u8 state; s32 rv;
 p=D_800C7650_ovl_01+0x18000;
 p=*(u8 **)(p+0x1d3c);
 if (!(*(u32 *)(D_800C7650_ovl_01+0x19a5c)&0x10000000) || *(s16 *)(p+0x1f2)!=0) p=D_800E10D0_ovl_01;
 state=arg0[6];
 if(state==1) goto state1;
 if(state!=0) goto done;
 arg0[6]=1;*(s16 *)(arg0+0x1e0)=0x1e;*(s16 *)(arg0+0x1e4)=0;arg0[0x2b5]=0;arg0[0x2c9]=0;
 arg0[0x25c]&=0xfd;
 rv=func_80033634_ovl_01(1);
 *(s32 *)(arg0+0x1e8)=((rv&0x3f)<<16)+0x1000f00;
state1:
 p+=0x28;
 func_80065400_ovl_01(arg0,p,0,0);
 func_80032DEC_ovl_01(arg0,*(s16 *)(arg0+0x260),*(s16 *)(arg0+0x262),0x10);
 func_80032B8C_ovl_01(arg0,0);
 rv=func_80032F94_ovl_01_48(arg0+0x28,p,*(s16 *)(arg0+0x66),0x100);
 if(!rv && *(u32 *)(arg0+0x28c)<0x9c4) goto set2;
 if(arg0[0xd]!=0xff) {
set2: arg0[6]=2;*(s32 *)(arg0+0x1e8)=0xf00;
 }
done:
 func_80089D34_ovl_01(arg0,arg1,arg2,0x100);
 func_80166458_ovl_12(arg0);
}
