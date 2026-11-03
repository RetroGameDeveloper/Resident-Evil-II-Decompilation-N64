extern volatile u8 D_800C7650_ovl_01[];
void func_80165B7C_ovl_15(void *a, void *b) {
    u64 base = (u64)(u32)D_800C7650_ovl_01;
    u8 *p = (u8 *)b;
    u32 x = *(u32 *)p;
    u32 off = 0x21962;
    u8 f = *(u8 *)((u64)base + off);
    if (f & 8) {
        x |= 0x4a;
    }
    *(u32 *)p = x;
    *(u32 *)(p + 0x60) = 0x202038;
    *(s16 *)(p + 0x138) = 0x8000;
    *(s16 *)(p + 0x134) = 0;
    *(s16 *)(p + 0x132) = -10;
    *(s16 *)(p + 0x136) = 0;
    *(s16 *)(p + 0x13c) = 0;
    *(s16 *)(p + 0x130) = *(u16 *)((u8 *)a + 0x66) + 0x800;
}
