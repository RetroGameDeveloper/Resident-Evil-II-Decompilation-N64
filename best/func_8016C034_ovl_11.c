typedef void (*Fn)(void *);
typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

extern Fn D_8016E7CC_ovl_11[];
extern void func_8016D6F8_ovl_11(void *);

void func_8016C034_ovl_11(u8 *p) {
    U64 b;
    Fn *tbl;
    s16 v;

    b.w.lo = (u32)D_8016E7CC_ovl_11;
    tbl = (Fn *)(b.w.lo);
    tbl[p[5]](p);
    v = *(s16 *)(p + 0x1A8);
    if (v &&
        (*(s32 *)(*(u8 **)(p + 0x234) + 0x50) - 0x1F4) < v &&
        (p[0x1E9] & 0xF) == 1) {
        func_8016D6F8_ovl_11(p);
    }
}
