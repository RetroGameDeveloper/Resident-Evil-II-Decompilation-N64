extern u8 D_800C7650_ovl_01[];
void func_80032EA4_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

void func_80162028_ovl_34(void *arg0) {
    u8 tmp[0x38];
    U64 b;
    u8 *q;
    tmp[0];
    b.q = (u64)(u32)D_800C7650_ovl_01;
    q = (u8 *)(b.w.lo + 0x18000);
    func_80032EA4_ovl_01(arg0, *(s32 *)(q + 0x1AA8), *(s32 *)(q + 0x1AB0), 0x5F4);
    func_80032EA4_ovl_01(arg0, *(s32 *)(q + 0x1AA8), *(s32 *)(q + 0x1AB0), 0x338);
    func_80032EA4_ovl_01(arg0, *(s32 *)(q + 0x1AA8), *(s32 *)(q + 0x1AB0), 0x400);
}
