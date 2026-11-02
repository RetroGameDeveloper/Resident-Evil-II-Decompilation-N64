extern u8 D_80167E98_ovl_17[];
void func_801650F8_ovl_17(void *arg0,s32 arg1,s32 arg2) {
    s32 r;
    if (*((u8*)arg0+6)==0) {
        func_80166FBC_ovl_17(arg0,D_80167E98_ovl_17[func_80033634_ovl_01()&3],3);
        r=func_80033634_ovl_01()&7;
        if (!(((*((u8*)arg0+0x2BC))>>r)&1))
            func_80166FBC_ovl_17(arg0,r*2+3,3);
        if (*((s8*)arg0+0x1ED)<0 || *((s8*)arg0+0x1EE)<0 || *((s8*)arg0+0x1EF)<0) {
            func_801674BC_ovl_17(arg0);
            *((s8*)arg0+0x1ED)=6; *((s8*)arg0+0x1EE)=6; *((s8*)arg0+0x1EF)=6;
        }
    }
    func_80164748_ovl_17(arg0,arg1,arg2);
}
