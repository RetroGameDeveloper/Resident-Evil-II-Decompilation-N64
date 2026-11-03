extern u8 D_800C7650_ovl_01[];
s32 func_80163818_ovl_27(void *, s32, s16);

s32 func_801639B0_ovl_27(void *a, s16 b) {
    u64 base;
    u8 *p;
    s32 v;

    v = func_80163818_ovl_27(a, 0, b);
    if (v != 0) {
        return v;
    }
    base = (u64)(u32)D_800C7650_ovl_01;
    p = (u8 *)((u32)(base & 0xFFFFFFFF) + 0x18000);
    if (*(u32 *)(p + 0x1A5C) & 0x10000000) {
        v = func_80163818_ovl_27(a, 1, b);
        if (v != 0) {
            return v;
        }
    }
    return 0;
}
