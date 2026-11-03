extern u8 D_80167E48_ovl_20[];
extern void *memcpy(void *, const void *, u32);
extern void func_80032B8C_ovl_01(u8 *, s32);
extern void func_80035AAC_ovl_01_108(u8 *);
extern void func_800334F8_ovl_01(u8 *, s32, s32, s32);
extern void func_80164E80_ovl_20(u8 *);
extern void func_80164FB8_ovl_20(u8 *);
extern void func_80164CC0_ovl_20(u8 *);
extern void func_80164DA0_ovl_20(u8 *);
extern void func_801651CC_ovl_20(u8 *, s32);

void func_80166E1C_ovl_20(u8 *arg0, s32 arg1, s32 arg2) {
    s16 vec[4];
    s16 tbl[8];
    u8 *s0;
    u32 state;

    memcpy(tbl, D_80167E48_ovl_20, 16);
    state = arg0[6];
    s0 = *(u8 **)(arg0 + 0x208);

    switch (state) {
    case 0:
        func_80035AAC_ovl_01_108(arg0);
        *(u32 *)(arg0 + 0x1E8) = 0x7003F00;
        if (*(u16 *)(arg0 + 0x2BA) & 0x200) {
            arg0[0x1E9] = 0x32;
            func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        }
        arg0[6] = 1;
        arg0[0x207] = 0;
        arg0[0x26F] |= 0x80;
        if (*(u16 *)(arg0 + 0x2BA) & 2) {
            *(u16 *)(arg0 + 0x2BA) &= 0xFFFD;
            arg0[0x207] = 1;
        }
        if (arg0[5] == 9) {
            func_80164E80_ovl_20(arg0);
        }
        if (arg0[5] == 0x11) {
            func_80164FB8_ovl_20(arg0);
        }
        if (arg0[5] == 0xA) {
            func_80164CC0_ovl_20(arg0);
        }
        if (arg0[5] == 0xB) {
            func_80164DA0_ovl_20(arg0);
        }
        if (arg0[5] == 0xE) {
            func_801651CC_ovl_20(arg0, 1);
        }
        if ((u32)(arg0[5] - 5) < 2) {
            if (arg0[0x2BF] == 0) {
                arg0[0x2BF] = 1;
            }
        }
        if (arg0[5] == 0x10) {
            func_80164CC0_ovl_20(arg0);
        }
        *(u16 *)(arg0 + 0x2BA) |= 0x4000;
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    }
    func_80032B8C_ovl_01(arg0, 0);
}
