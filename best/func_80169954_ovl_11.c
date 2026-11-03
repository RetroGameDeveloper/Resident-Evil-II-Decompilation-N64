extern u8 D_800C7650_ovl_01[];
extern s32 D_800E10D4_ovl_01;
extern s32 D_8016E770_ovl_11[];
extern s32 D_8016E4E8_ovl_11[];
s32 func_80033634_ovl_01(void);
s32 func_800377B0_ovl_01(s32,s32,void *,s32);
s32 func_80077D48_ovl_01(s32,void *);
s32 func_80167890_ovl_11(void *);
s32 func_80167A3C_ovl_11(void *);
s32 func_80167B24_ovl_11(void *);
s32 func_80167C08_ovl_11(void *);
s32 func_8016B174_ovl_11(void *,s32 *,s32,s32 *);
void func_80169954_ovl_11(void *arg0, s32 *arg1, s32 arg2) {
    s32 *a3 = arg1;
    void *base;
    u16 flags;
    s32 (*fn)(void *, s32 *, s32, s32 *);
    if (!(*(u16 *)((u8 *)arg0 + 0x2B6) & 0x4000)) {
        (*(u16 *)((u8 *)D_800C7650_ovl_01 + 0x2149C))++;
        *(u16 *)((u8 *)arg0 + 0x2B6) |= 0x4000;
    }
    *(u16 *)((u8 *)arg0 + 0x2B6) &= 0xFDFF;
    base = (u8 *)D_800C7650_ovl_01 + 0x18000;
    if (*(u8 *)((u8 *)base + 0x1A84) == 5 && *(void **)((u8 *)base + 0x1CD0) == arg0) {
        *(u8 *)((u8 *)base + 0x1CEF) &= 0x7F;
        *(u8 *)((u8 *)base + 0x1CDC) &= 0xED;
        *(s32 *)arg0 &= -0x1005;
        D_800E10D4_ovl_01 = 0x01000000;
        *(s32 *)((u8 *)base + 0x1A80) &= -0x1005;
    }
    if (*(u8 *)((u8 *)arg0 + 6) == 0) {
        void *p;
        p = *(void **)((u8 *)arg0 + 0x234); *(s32 *)((u8 *)p + 0x468) |= 0x8000;
        p = *(void **)((u8 *)arg0 + 0x234); *(s32 *)((u8 *)p + 0x5E0) |= 0x8000;
        p = *(void **)((u8 *)arg0 + 0x234); *(s32 *)((u8 *)p + 0x8D0) |= 0x8000;
        p = *(void **)((u8 *)arg0 + 0x234); *(s32 *)((u8 *)p + 0xA48) |= 0x8000;
        p = *(void **)((u8 *)arg0 + 0x234); *(s32 *)((u8 *)p + 0xBC0) |= 0x8000;
    }
    if (*(u16 *)((u8 *)arg0 + 0x1AA) & 1) {
        fn = *(s32 (**)(void *, s32 *, s32, s32 *))((u8 *)D_8016E770_ovl_11 + (*(u8 *)((u8 *)arg0 + 5)-1)*4);
        fn(arg0, arg1, arg2, 0);
        return;
    }
    flags = *(u16 *)((u8 *)arg0 + 0x2B6);
    if (flags & 0x10) { func_8016B174_ovl_11(arg0,arg1,arg2,0); return; }
    if (flags & 2) {
        func_800377B0_ovl_01(0x1F40,0,(u8 *)*(void **)((u8 *)arg0+0x234)+0x38,0);
        flags=(func_80033634_ovl_01()&1)?0xD:0xB; func_80077D48_ovl_01(flags,arg0);
        if (*(u8 *)((u8 *)arg0+5)==0xA && !(*(u16 *)((u8 *)arg0+0x1AA)&0x80)) func_80167890_ovl_11(arg0);
        if (*(u8 *)((u8 *)arg0+5)==0xB) func_80167A3C_ovl_11(arg0);
        if ((*(u8 *)((u8 *)arg0+5)==9 || *(u8 *)((u8 *)arg0+5)==0x11) && !(*(u16 *)((u8 *)arg0+0x1AA)&0x80)) func_80167B24_ovl_11(arg0);
        if (*(u8 *)((u8 *)arg0+5)==0xE) func_80167C08_ovl_11(arg0);
        *(s32 *)((u8 *)arg0+4)=0x07090000; return;
    }
    fn = *(s32 (**)(void *,s32 *,s32,s32 *))((u8 *)D_8016E4E8_ovl_11+(((*(u8 *)((u8 *)arg0+5)-1)*9+*(u8 *)((u8 *)arg0+0x26E))*4));
    fn(arg0,arg1,arg2,(s32 *)D_8016E4E8_ovl_11);
}
