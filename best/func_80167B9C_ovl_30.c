extern u8 D_800C7650_ovl_01[];

void func_80167B9C_ovl_30(s32 arg0) {
    u8 *a1 = (u8 *)arg0 + 0x2B4;
    u64 b;
    u8 *p;
    u32 v;
    u8 x;

    if (a1[0x1A] != 0) {
        b = (u64)(u32)D_800C7650_ovl_01;
        p = (u8 *)(u32)(b & 0xFFFFFFFF);
        p += 0x18000;
        *(u32 *)(p + 0x1A5C) |= 0x80000000U >> a1[0x1B];
        x = a1[0x1A] - 1;
        a1[0x1A] = x;
        if (x == 0) {
            v = *(u32 *)(p + 0x1A5C);
            v &= 0xFFFFFFF7;
            v &= 0xFFFFFFFB;
            *(u32 *)(p + 0x1A5C) = v;
        }
    }
}
