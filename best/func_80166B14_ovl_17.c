extern s32 D_800E1008[];
s32 func_80069F4C_ovl_01(void *, s32);
s32 func_80166B14_ovl_17(void *arg0) {
    s32 *table = D_800E1008;
    s32 result, limit, value;
    s32 *obj = (s32 *)arg0;
    s32 *node = (s32 *)((u8 *)arg0 + 0x2B4);
    if (*table == 0) return 0;
    do {
        result = func_80069F4C_ovl_01((u8 *)arg0 + 0x28, *table);
        *(s16 *)((u8 *)node + 0xE) = result << 10;
        node[4] = *table;
        if (((result << 26) >> 16) == ((*(u16 *)((u8 *)arg0 + 0x66) + 0x200) & 0xC00)) {
            limit = -obj[0x2C / 4];
            value = *(s32 *)((u8 *)node[4] + 0xC);
            if ((u32)value >= (u32)(limit / 1800)) {
                table++;
                continue;
            }
            return (result & 0xFFFF) + 1;
        }
        table++;
    } while (*table != 0);
    return 0;
}
