extern u8 D_80180900_ovl_04[], D_800F9E60_ovl_01[], D_8018065C_ovl_04[], D_80180370_ovl_04[];
s32 func_8017B500_ovl_04(s32 idx){
    s32 sum = 0;
    u8 *dict = D_80180900_ovl_04;
    u8 *tbl = D_800F9E60_ovl_01;
    u32 off = idx * 2;
    volatile u8 *itab = D_8018065C_ovl_04;
    u8 *p = D_80180370_ovl_04 + *(volatile u16 *)(itab + off);
    s32 i;
    for (;;) {
        if (*p >= 0xEE) {
            i = 0;
            do {
                if (*p == dict[i]) {
                    if (i == 0) return sum;
                    p++;
                    break;
                }
                i++;
            } while (i < 6);
        } else if (*p < 0x57) {
            sum += *(s8 *)(tbl + (*p) * 2 + 1);
        } else {
            sum += 14;
        }
        p++;
    }
}
