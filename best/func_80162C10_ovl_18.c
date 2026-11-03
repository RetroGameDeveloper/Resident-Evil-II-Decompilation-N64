s32 func_80074D94_ovl_01(s32, s32);

s32 func_80162C10_ovl_18(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_80074D94_ovl_01(*(s32 *)(arg0 + 0x28), *(s32 *)(arg0 + 0x30));
    if (*(s32 *)(arg0 + 0x2C) < *(s16 *)(arg0 + 0x25E)) {
        if ((*(s32 *)(arg0 + 0x2C) - 0xA) < temp_v0) {
            return 0;
        }
        return temp_v0;
    }
    return 1;
}
