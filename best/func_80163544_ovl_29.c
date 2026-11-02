/* func_80163544_ovl_29 - ovl_29 */
s32 func_80032B8C_ovl_01(u8 *, s32);
s32 func_80032DEC_ovl_01(u8 *, s32, s32, s32);
s32 func_800334F8_ovl_01(u8 *, s32, s32, s32);
s32 func_80033634_ovl_01(u8 *);
s32 func_80089D34_ovl_01(u8 *, s32, s32, s32);
extern u8 D_800C7650_ovl_01[];

void func_80163544_ovl_29(u8 *p, s32 arg1, s32 arg2) {
    u8 buf[0x10];
    u32 base;

    switch (*(u8 *)(p + 6)) {
    case 0:
        *(s32 *)(p + 0x1E8) = 0x17000F00;
        *(u8 *)(p + 6) = 1;
        *(s16 *)(p + 0x1F4) = 0x3C;
        /* fall through */
    case 1:
        if (*(u8 *)(p + 0x1EA) != 0) {
            base = (u32)D_800C7650_ovl_01 + 0x18000;
            func_80032DEC_ovl_01(p, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 0x20);
        }
        func_800334F8_ovl_01(p, arg1, arg2, 0);
        if (func_80089D34_ovl_01(p, arg1, arg2, 0x100) != 0) {
            if (*(u32 *)(p + 0x28C) < 0xD48) {
                if ((func_80033634_ovl_01(p) & 3) == 0) {
                    *(s32 *)(p + 0x1E8) = 0x06000F00;
                    *(u8 *)(p + 6) = 3;
                    return;
                }
                *(s32 *)(p + 4) = 0x01020000;
                return;
            }
            *(s32 *)(p + 4) = 0x01010000;
            *(u8 *)(p + 0x2B6) = 0xF;
        }
        func_80032B8C_ovl_01(p, 0);
        break;
    case 3:
        func_800334F8_ovl_01(p, arg1, arg2, 0);
        func_80089D34_ovl_01(p, arg1, arg2, 0x100);
        func_80032B8C_ovl_01(p, 0);
        if (*(u8 *)(p + 0x1E9) == 0x12) {
            *(s32 *)(p + 4) = 0x01010000;
            *(u8 *)(p + 0x2B6) = 0xF;
        }
        break;
    }
}
