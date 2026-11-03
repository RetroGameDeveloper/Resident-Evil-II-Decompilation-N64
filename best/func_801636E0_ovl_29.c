extern void func_80032B8C_ovl_01(u8 *, s32);
extern void func_800334F8_ovl_01(u8 *, s32, s32, s32);

void func_801636E0_ovl_29(u8 *arg0, s32 arg1, s32 arg2) {
    s16 vec[8];
    u8 buf[0x20];
    u32 state;

    *(u16 *)(arg0 + 0x2B8) |= 0x80;
    state = arg0[6];

    switch (state) {
    case 0:
        *(u32 *)(arg0 + 0x1E8) = 0x5000F00;
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        arg0[6] = 1;
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
    case 6:
        break;
    }
    func_80032B8C_ovl_01(arg0, 0);
}
