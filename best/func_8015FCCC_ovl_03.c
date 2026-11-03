extern u8 D_80160808_ovl_03[];
extern u8 D_80160B9C_ovl_03[];
extern u8 D_800C7650_ovl_01[];
extern s32 func_80046FC8_ovl_01(s32, void *);
typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

void func_8015FCCC_ovl_03(void) {
    U64 b1, b2, b3;
    u8 *s, *t;
    u8 v;
    b1.q = (u64)(u32)D_80160808_ovl_03;
    s = (u8 *)(u32)(b1.q & 0xFFFFFFFF);
    b2.q = (u64)(u32)D_80160B9C_ovl_03;
    t = (u8 *)(u32)(b2.q & 0xFFFFFFFF);
    v = t[0x15];
    s[0x24] = v;
    s[0x25] = v;
    s[0x26] = v;
    s[4] = v;
    s[5] = v;
    s[6] = v;
    if (*(s16 *)(t + 0x14) > 0) {
        u8 *p;
        s32 a;
        b3.w.lo = (u32)D_800C7650_ovl_01;
        p = (u8 *)(b3.w.lo + 0x18000);
        a = func_80046FC8_ovl_01(*(s32 *)(p + 0x204), s);
        *(s32 *)(p + 0x204) = a;
        *(s32 *)(p + 0x204) = func_80046FC8_ovl_01(a, s + 0x20);
    }
}
