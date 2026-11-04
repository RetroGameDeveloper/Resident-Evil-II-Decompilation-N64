typedef union { u64 q; struct { u32 hi; u32 lo; } w; } U64;
extern u8 D_800C7650_ovl_01[];
extern s32 func_80165BE8_ovl_13(void *, s32);
extern s32 func_80165BF4_ovl_35(void *);
extern s32 func_80165D28_ovl_13(void *);
extern s32 func_80165F00_ovl_13(void *);
extern s32 func_80165F70_ovl_13(void *);

void func_80162E04_ovl_13(S_func_80162BC0_ovl_13_arg0 *p)
{
    U64 b;
    u8 *base;
    u32 x, y;
    s16 t;

    b.w.hi = 0x18000;
    b.w.lo = (u32)D_800C7650_ovl_01;
    x = b.w.lo;
    y = b.w.hi;
    base = (u8 *)(x + y);

    if (p->unk_2C < *(s16 *)(base + 0x1CDE) - 0x12C0)
        func_80165BE8_ovl_13(p, 4);

    p->unk_1F4 = p->unk_1F4 - 1;
    if ((s16)p->unk_1F4 == -1)
        func_80165BE8_ovl_13(p, 4);

    func_80165BF4_ovl_35(p);

    t = *(s16 *)(base + 0x1C72);
    if (t < 0 && p->unk_2BD <= 0) {
        func_80165F70_ovl_13(p);
    } else {
        func_80165D28_ovl_13(p);
        func_80165F00_ovl_13(p);
    }
}
