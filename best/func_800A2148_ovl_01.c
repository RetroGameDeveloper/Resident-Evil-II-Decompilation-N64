extern u8 D_801362B0_ovl_01;
extern u8 D_8013BC30[];

s32 func_800A2148_ovl_01(u32 arg0) {
    u8 *v1;
    u32 i;
    u32 mask;
    s32 v0;

    i = 0;
    if (D_801362B0_ovl_01 != 0) {
        mask = arg0 & 0x7FFFFFFF;
        v1 = D_8013BC30;
        do {
            if (v1[0xFC1] != 0) {
                i++;
            } else if (((u32 *)v1)[0] == mask) {
                v0 = i | (arg0 & 0x80000000);
                goto done;
            } else {
                i++;
            }
            if (i < 8) {
                v1 += 0xFF8;
            } else {
                v0 = -1;
                goto done;
            }
        } while (1);
    done:
        return ~v0 != 0;
    }
    return 0;
}
