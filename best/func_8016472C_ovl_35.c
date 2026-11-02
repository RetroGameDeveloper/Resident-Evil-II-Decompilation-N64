typedef struct { unsigned char pad[0x1d3c]; s32 field28; unsigned char gap[4]; s32 field30; } DataSub;
typedef struct { unsigned char pad[0x18000]; unsigned char before[0x19d3c]; DataSub sub; } DataBig;
extern DataBig D_800C7650_ovl_01;
extern s32 D_800E10D0_ovl_01;
extern s32 func_80032DEC_ovl_01(void*,s32,s32,s32);
extern s32 func_80089D34_ovl_01(void*,s32,s32,s32);
extern s32 func_801644C4_ovl_35(void*);
void func_8016472C_ovl_35(void *arg0,s32 arg1,s32 arg2) {
 u8 *p=arg0; s32 *v; u8 *s1=p+0x2b4;
 if(p[0x2b4]) v=&D_800C7650_ovl_01.sub.field28;
 else v=&D_800E10D0_ovl_01;
 *(s16*)(p+0x1e0)=0;
 *(u16*)(p+0x1e2)=*(u16*)(s1+0x1e);
 *(u16*)(p+0x1e4)=*(u16*)(s1+0x20);
 if(*(s16*)(p+0x1e2)<0) *(s16*)(p+0x1e2)=0x28;
 *(s16*)(p+0x1f4)=0x28;
 func_80032DEC_ovl_01(arg0,*(s32*)((s8*)v+0x28),*(s32*)((s8*)v+0x30),-0x100);
 s1[0x13]=0;s1[0x12]=0;s1[0x10]=0;
 func_801644C4_ovl_35(arg0);
 p[0x2d6]=p[5];
 if(p[0x1e8]!=4) *(u32*)(p+0x1e8)=0x04000f00;
 func_80089D34_ovl_01(arg0,arg1,arg2,0x100);
 p[0x2d7]=0;
}
