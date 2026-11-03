typedef union {
    u64 q;
    struct {
        u32 lo;
        u32 hi;
    } w;
} U64;

extern u8 D_800C7650_ovl_01[];

void func_80163148_ovl_23(void *arg0) {
    u8 *p = arg0;
    U64 b;
    u32 off;
    u32 base;
    u8 *gp;
    s16 id;
    u8 *dst;
    s32 v;

    off = 0x18000;
    b.w.lo = (u32)D_800C7650_ovl_01;
    gp = (u8 *)(u32)(b.w.lo + 0x20000);
    id = *(s16 *)(gp + 0x15FC);
    base = off + b.w.lo;
    dst = *(u8 **)(base + 0x27C);
    dst = *(u8 **)(dst + 0x2C);
    dst += id * 40;
    if (*(u8 *)(base + 0x538)) {
        dst[10] = 0xC8;
        dst[11] = 0x5F;
        v = 0x2710;
    } else {
        dst[10] = 0xAA;
        dst[11] = 0x46;
        v = 0x1B58;
    }
    dst[12] = 0;
    *(s16 *)(dst + 0x26) = v;
    dst[3] = 0;
    *(u16 *)(dst + 0x1C) = *(u16 *)(p + 0x2A);
    *(u16 *)(dst + 0x1E) = *(u16 *)(p + 0x2E) - 0x1194;
    *(u16 *)(dst + 0x20) = *(u16 *)(p + 0x32);
}
