extern void *D_800EBB34_ovl_01;
extern u8 D_80131720_ovl_01[];
extern u8 D_800E8FC8_ovl_01[];
extern u8 D_800E8CA8_ovl_01[];
extern u8 D_800E8CC8_ovl_01[];
extern u8 D_800C7650_ovl_01[];
s32 func_80039AD0_ovl_01(void *, s32, void **);
s32 func_80038A50_ovl_01(s32, s32, void *, void *);
s32 func_80077B0C_ovl_01(s32, s32 *);
s32 func_80083788_ovl_01(void *, u8);
void func_80039B8C_ovl_01(s8 a,s8 b,s8 c) {
 u8 *p=D_80131720_ovl_01; u8 *q=D_800EBB34_ovl_01;
 *(s32*)(p+0x30)=*(s16*)(q+0x34);
 *(s32*)(p+0x34)=*(s16*)(q+0x36);
 p[3]=a;p[4]=b;p[5]=c;p[2]=0;p[1]=0x11;
 *(s32*)(p+0x38)=*(s16*)(q+0x38);
}
void func_80039BD8_ovl_01(void) {
 u8 *p=D_800EBB34_ovl_01;
 *(u16*)(p+0x18)=*(u16*)(p+0x12); p[0x21]=p[2];
 *(u16*)(p+0x2a)|=*(u16*)(p+0x14);
 p[0x20]=*(u8*)(*(u32*)(p+0x70)+p[0x21]*8+2);
 p[0x1f]+=p[0xb];
 func_80039AD0_ovl_01(p,*(u32*)(p+0x78)+p[0x1f]*24,(void**)&D_800EBB34_ovl_01);
}
void func_8003D174_ovl_01(void) {
 u8 *p; u8 *q; s32 vals[3];
 p=D_800EBB34_ovl_01;
 p[2]=0x40;p[8]=0;p[3]=0;*(u16*)(p+0xc)=0;*(u16*)(p+0x12)&=0xfffd;
 q=D_800EBB34_ovl_01;
 vals[0]=*(s16*)(q+0x34); vals[1]=*(s16*)(q+0x36); vals[2]=*(s16*)(q+0x38);
 func_80077B0C_ovl_01(0x03060001,vals);
 func_80038A50_ovl_01(0x030f1400,0,D_800E8FC8_ovl_01,q+0x34);
 q=D_800EBB34_ovl_01; q[9]=0;q[8]=0;*(u16*)(q+0xe)=0;*(u16*)(q+0xc)=0;*(u32*)q=0;
}
void func_80035AAC_ovl_01_108(void *p) {
 s32 n=*(s16*)(D_800C7650_ovl_01+0x215f8);
 u8 *str;
 if(n>=3 || (*(u32*)(D_800C7650_ovl_01+0x19a5c)&0x02000000)) str=D_800E8CC8_ovl_01;
 else str=D_800E8CA8_ovl_01;
 func_80083788_ovl_01(str,*(u8*)((u8*)p+0x26a));
}
