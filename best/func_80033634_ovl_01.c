extern u8 D_800C7650_ovl_01[];
s32 func_80033634_ovl_01(void) {
    u64 ext = (u64)D_800C7650_ovl_01;
    u64 sum = ext + 0x18000;
    u32 base = (u32)sum;
    u16 val;
    u32 hi, res;
    val = *(u16 *)(base + 0x272);
    hi = (val >> 7) & 0xFF;
    res = ((val + hi) & 0xFF) | (hi << 8);
    *(u32 *)(base + 0x270) = res;
    return res & 0xFF;
}
