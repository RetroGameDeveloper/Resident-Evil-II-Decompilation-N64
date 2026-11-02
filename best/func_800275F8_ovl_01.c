extern s8 D_800E9118_ovl_01;
extern s8 D_800E9128_ovl_01;
extern s8 D_800C7650_ovl_01;
void func_8002751C_ovl_01(s8 a, s16 b) { *(s16 *)((u8 *)&D_800E9118_ovl_01+0xD6)=b; *(s8 *)((u8 *)&D_800E9118_ovl_01+0xC8)=a; }
void func_800275F8_ovl_01(s32 a, s16 b, s32 c, u16 *d) {
 u8 *p=(u8 *)&D_800E9128_ovl_01+a*0x2C;
 u8 *q=(u8 *)&D_800C7650_ovl_01+0x18000;
 *(s16 *)p=b;
 *(s32 *)(p+(((u8)q[0x538])*0x10)+0x10)=c|((u32)p[0x13]<<24);
 if(d){ *(u16 *)(p+0x14)=d[0]; *(u16 *)(p+0x16)=d[1]; *(u16 *)(p+0x18)=d[2]; *(u16 *)(p+0x1A)=d[3]; }
 else { *(u32 *)(p+0x14)=0; *(u32 *)(p+0x18)=0x014000F0; }
}
void func_80027688_ovl_01(s32 a) { *(s16 *)((u8 *)&D_800E9118_ovl_01+a*0x2C+0x10)=-1; }
u32 func_800276B4_ovl_01(s32 a) { return (u32)*(s16 *)((u8 *)&D_800E9118_ovl_01+a*0x2C+0x10)>>31; }
