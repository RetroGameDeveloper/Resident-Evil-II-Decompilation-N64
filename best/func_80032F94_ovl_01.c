s16 func_80032F94_ovl_01(void *arg0,s32 arg1,s16 arg2) { s32 x; x=(arg1-*(u16*)((u8*)arg0+0x66))+arg2; x &= 0xFFF; if (x < (arg2<<1)) return 0; if ((u32)x < 0x801) return arg2; return -arg2; }
