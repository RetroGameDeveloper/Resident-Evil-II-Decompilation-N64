s32 func_800AB36C_ovl_01(void);
extern u8 D_801362B1_ovl_01;
extern u8 *D_80143BF8;

void func_800A0298_ovl_01(void) {
    s32 idx = 0;
    u8 t = D_801362B1_ovl_01;

    if (t != 0 && t != 0x2A) {
        if ((func_800AB36C_ovl_01() & 3) == 0) {
            u32 r = func_800AB36C_ovl_01() & 0xFFFF;
            idx = (u16)(r % 63);
        }
    }
    if (idx < 0x40) {
        u8 *b = D_80143BF8;
        u8 *end = b + 0xA00;
        s32 i = idx;
        do {
            u8 *p = b + i * 0x28;
            if (*(u32 *)(p + 0x574) || *(u32 *)(p + 0x578) ||
                *(u32 *)(p + 0x57C)) {
                s32 v = *(s32 *)(p + 0x568) + *(s32 *)(b + 0x118);
                *(s32 *)(p + 0x568) = v & 0xFFFF;
                *(s32 *)(p + 0x56C) += (v >> 16) + *(s32 *)(b + 0x11C);
            }
            i++;
        } while ((s32)(b + i * 0x28) < (s32)end);
    }
}
