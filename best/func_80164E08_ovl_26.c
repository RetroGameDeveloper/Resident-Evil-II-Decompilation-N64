s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_80033634_ovl_01(void);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80166B18_ovl_26(void *, s32, s32);
void func_80164E08_ovl_26(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a1; u8 temp_v0;
    if (*(u8*)((u8*)arg0+0x2D9)==0) { *(s8*)((u8*)arg0+0x2C1)=6; *(s8*)((u8*)arg0+0x2C3)=3; }
    if (*(u8*)((u8*)arg0+5)!=1) {
        if (((*(u8*)((u8*)arg0+0x26E)%3)&0xFF)!=0) var_a1=0xA;
        else if (*(u8*)((u8*)arg0+0x2D9)==0) var_a1=((func_80033634_ovl_01()&1)*4)|3;
        else var_a1=0xA;
        func_80166B18_ovl_26(arg0,var_a1,1);
    }
    if (*(u8*)((u8*)arg0+5)!=0x10) func_80077D48_ovl_01(2,arg0);
    func_800334F8_ovl_01(arg0,arg1,arg2,0);
    temp_v0=*(u8*)((u8*)arg0+0x2CA);
    if(temp_v0!=0) {
        *(s32*)((u8*)arg0+4)=(s32)((temp_v0<<0x10)+(*(u8*)((u8*)arg0+0x2CB)<<8)+*(u8*)((u8*)arg0+0x2CC)+0x01000000);
        return;
    }
    *(s32*)((u8*)arg0+4)=0x01010000;
    *(s8*)((u8*)arg0+0x2C1)=3; *(s8*)((u8*)arg0+0x2C3)=3;
    *(u8*)((u8*)arg0+0x25C)&=0xFD;
}
