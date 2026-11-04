extern u8 D_80160B9C_ovl_03[];
void func_8002751C_ovl_01(s32, s32);
void func_8015FCCC_ovl_03(void);
typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

void func_8015B568_ovl_03(void) {
    U64 b;
    U64 c;
    u8 *p;
    u8 *q;
    s32 one = 1;

    b.q = (u64)(u32)D_80160B9C_ovl_03;
    p = (u8 *)(u32)b.q;

    switch (p[2]) {
    case 0:
        func_8002751C_ovl_01(0, 0);
        *(s16 *)(p + 0x14) = 0x36;
        *(s32 *)(p + 0x18) = 0x16;
        *(s16 *)(p + 0x16) = 0;
        p[2] = one;
    case 1:
        c.q = (u64)(u32)D_80160B9C_ovl_03;
        q = (u8 *)(u32)c.q;
        q[1] = 1;
        q[2] = 0;
        break;
    case 2:
        p[1] = one;
        p[2] = 0;
        break;
    }
    func_8015FCCC_ovl_03();
}
