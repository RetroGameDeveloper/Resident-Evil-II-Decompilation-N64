extern s32 func_800334F8_ovl_01(void *, s32, s32, s32);
extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern s32 func_80032B8C_ovl_01(void *, s32);

typedef union {
    u64 q;
    struct {
        u32 lo;
        u32 hi;
    } w;
} U64;

void func_801652F4_ovl_30(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = arg0;
    U64 b;
    u32 off;
    u8 *q;

    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    off = 0x2B4;
    b.w.lo = (u32)p;
    q = (u8 *)(off + b.w.lo);
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
        *(s32 *)(p + 4) = 0x01020000;
        p[0x26F] &= 0x7F;
        q[6] = p[5];
        q[7] = p[6];
        q[8] = p[7];
    }
    func_80032B8C_ovl_01(arg0, 0);
}
