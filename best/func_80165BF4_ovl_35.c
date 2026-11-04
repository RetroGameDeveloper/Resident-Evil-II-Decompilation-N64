s32 func_80166324_ovl_35(s32, s32, s32);
typedef void (*Fn)(s32, u8 *);
extern volatile Fn func_801667CC_ovl_28[];
typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

void func_80165BF4_ovl_35(s32 arg0) {
    s32 ff;
    U64 b;
    u8 *p;
    void **tab;
    u32 t, n;

    b.w.lo = (u32)arg0;
    p = (u8 *)(b.w.lo + 0x2B4);
    t = p[0x18];
    if (t != 0) {
        n = t - 1;
        if (p[9] & 1) {
            p[0x18] = n;
            if (n & 1)
                func_80166324_ovl_35(arg0, 3, func_80033634_ovl_01() & 7);
        }
    }
    if (p[9] & 0x80) {
        b.q = (u64)(u32)func_801667CC_ovl_28;
        tab = (void **)(u32)b.q;
        ff = p[6];
        ((Fn)tab[ff])(arg0, p);
    }
}
