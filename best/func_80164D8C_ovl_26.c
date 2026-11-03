typedef void (*Fn)(void *);
typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

extern Fn D_80167270_ovl_26[];
extern void func_801669C4_ovl_26(void *);
extern void func_80166504_ovl_26(void *);
extern void func_800347E0_ovl_01(void *, s16);
extern void func_801668F8_ovl_26(void *);

void func_80164D8C_ovl_26(u8 *p) {
    U64 b;
    Fn *tbl;
    s32 i = p[5] - 1;

    b.w.lo = (u32)D_80167270_ovl_26;
    tbl = (Fn *)(b.w.lo);
    tbl[i](p);
    func_801669C4_ovl_26(p);
    func_80166504_ovl_26(p);
    func_800347E0_ovl_01(p, (s16)(*(u16 *)(p + 0x66) + (p[0x2CD] << 11)));
    func_801668F8_ovl_26(p);
}
