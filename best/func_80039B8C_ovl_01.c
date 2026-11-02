extern void *D_800EBB34_ovl_01;
extern u8 D_80131720_ovl_01[];
void func_80039B8C_ovl_01(s8 a,s8 b,s8 c) {
 u8 *q=D_800EBB34_ovl_01;
 u8 *p=D_80131720_ovl_01;
 *(s32*)(p+0x30)=*(s16*)(q+0x34);
 *(s32*)(p+0x34)=*(s16*)(q+0x36);
 *(s32*)(p+0x38)=*(s16*)(q+0x38);
 p[3]=a;p[4]=b;p[5]=c;p[2]=0;p[1]=0x11;
}
