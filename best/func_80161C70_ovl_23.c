s8 func_80033634_ovl_01(void);
void func_800838F0_ovl_01(void *, void *, void *, s16 *);
extern u8 D_800C7650_ovl_01[];
extern u8 D_80166260_ovl_23[];
void func_80161C70_ovl_23(void *arg0) {
    s16 sp10, sp12, sp14;
    u32 count;
    u8 *entry;
    u8 *item;
    s8 r;
    u16 angle;
    count = 0;
    entry = D_80166260_ovl_23;
    *(s32 *)(D_800C7650_ovl_01 + 0x18270) = 0x2DE4;
    do {
        item = *(u8 **)((u8 *)arg0 + 0x234) + (*(u16 *)entry * 0x178);
        *(s32 *)item |= 0x40;
        *(s16 *)(entry + 2) = (func_80033634_ovl_01() & 0xFF) * 16;
        r = func_80033634_ovl_01();
        *(u16 *)(entry + 4) = *(u16 *)(entry + 4) + (r + ((u32)(r << 24) >> 31)) / 2;
        *(u16 *)(entry + 8) = *(u16 *)(entry + 8) + func_80033634_ovl_01();
        *(s16 *)(entry + 0xC) = (s32)(func_80033634_ovl_01() << 24) >> 23;
        *(s16 *)(entry + 0xE) = 0;
        sp14 = 0; sp12 = 0; sp10 = 0;
        func_800838F0_ovl_01(item + 0x1C, item + 0x58, item + 0x38, &sp10);
        angle = *(u16 *)(item + 0x5C) & 0xFFF;
        *(u16 *)(item + 0x5C) = angle;
        *(s16 *)(entry + 0x10) = (u16)(angle - 0x400) < 0x800;
        *(s16 *)(entry + 0xA) = 0;
        count++;
        entry += 0x14;
    } while (count < 15);
}
