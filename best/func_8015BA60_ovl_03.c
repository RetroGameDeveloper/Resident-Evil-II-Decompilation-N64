extern s32 D_800C5278_ovl_01;
extern u8 D_800C7650_ovl_01[];
extern u8 D_801603C0_ovl_03[];
extern s32 func_80004CFC(s32,s32,s32,void *);
typedef struct { u8 b[0x6ec]; } Blob6EC;
void func_8015BA60_ovl_03(void) {
s32 a; s32 b; s32 i; s32 n; u8 *src; u8 *dst; s32 x;
a=D_800C5278_ovl_01; b=(a+7)&-8;
*(s32*)(D_800C7650_ovl_01+0x18284)=a;
func_80004CFC(0x1f94,b,0,D_801603C0_ovl_03);
dst=D_800C7650_ovl_01+0x20000;
src=b + (*(u8*)(D_800C7650_ovl_01+0x19a4a)*0x6ec);
n=(s32)(dst+0x21280); x=*(u8*)(D_800C7650_ovl_01+0x21962);
for(i=0;i<0x6e0;i+=16){*(u32*)(dst+i)=*(u32*)(src+i);*(u32*)(dst+i+4)=*(u32*)(src+i+4);*(u32*)(dst+i+8)=*(u32*)(src+i+8);*(u32*)(dst+i+12)=*(u32*)(src+i+12);}
*(u8*)(D_800C7650_ovl_01+0x21962)=x;
}
