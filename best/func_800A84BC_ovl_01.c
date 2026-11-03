void func_800AC6D4_ovl_01(s32 arg0, s32 arg1, s32 arg2);

void func_800A84BC_ovl_01(u8 *arg0) {
    s32 flags;
    u8 v;

    flags = *(s32 *)(arg0 + 0x24);
    if (!(flags & 0x80000)) {
        if (*(u8 *)(arg0 + 0x98) == 1 && !(flags & 0x2000)) {
            *(s32 *)(arg0 + 0x8C) = 0;
        } else {
            *(s32 *)(arg0 + 0x8C) = *(s32 *)(arg0 + 0x90);
        }
        *(s32 *)(arg0 + 0x94) = *(u8 *)(arg0 + 0xC1) << 16;
    }
    v = *(u8 *)(arg0 + 0x4A);
    if (v != 0xFF) {
        func_800AC6D4_ovl_01(v, *(u8 *)(arg0 + 0x4B), 1);
    }
}
