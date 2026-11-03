extern u8 D_800C7650_ovl_01[];
extern u8 D_8012F4D0_ovl_01[];
void func_80047CF8_ovl_01(void *arg0, s16 *arg1, s32 arg2, s32 arg3);

void func_8008CB28_ovl_01(u32 arg0, u32 arg1) {
    s16 rect[4];

    if (*(s32 *)(D_800C7650_ovl_01 + 0x19A5C) & 0x8000) {
        rect[0] = (arg0 % 3) * 0x28;
        rect[1] = (arg0 / 3) * 0x1E;
        rect[2] = 0x28;
        rect[3] = 0x1E;
        func_80047CF8_ovl_01(D_8012F4D0_ovl_01, rect,
                             ((arg1 % 3) * 0x28) & 0xFFF8,
                             ((arg1 / 3) * 0x1E) & 0xFFFE);
    }
}
