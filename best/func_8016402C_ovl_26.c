s32 func_80033634_ovl_01(void);
s32 func_80166B18_ovl_26(void *, s32, s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern u8 D_800C7650_ovl_01[];
void func_8016402C_ovl_26(void *arg0, s32 arg1, s32 arg2) {
    volatile u8 *s1=(volatile u8*)arg0+0x2B4;
    volatile u8 *flag=(volatile u8*)arg0+0x25C;
    if (*(u8*)((u8*)arg0+6)==0) {
        *(u8*)((u8*)arg0+6)=1;
        *(s32*)((u8*)arg0+0x1E8)=(*(u8*)((u8*)arg0+0x2CD)*0x0D000000)+0x3F00;
        *flag|=2;
        s1[0x12]=1; s1[0x13]=0; s1[0x14]=8;
        *(u16*)(D_800C7650_ovl_01+0x18000+0x1A78)&=0xFFBF;
        s1[2]=0;
    } else {
        if ((func_80033634_ovl_01()&7)==0) {
            u32 t=func_80033634_ovl_01()&0xFF;
            func_80166B18_ovl_26(arg0,((t%3)+0xB)&0xFF,4);
        }
        if (s1[0x13]!=0) { *(s32*)((u8*)arg0+4)=0x01010000; *(u8*)((u8*)arg0+0x26F)&=0x7F; }
    }
    func_80089D34_ovl_01(arg0,arg1,arg2,0x40);
}
