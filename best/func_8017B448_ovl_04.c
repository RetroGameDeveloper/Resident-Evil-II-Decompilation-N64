extern u8 D_8018065C_ovl_04[];
extern u8 D_80180370_ovl_04[];
extern u8 D_80180900_ovl_04[];
extern s8 D_800F9E60[];

u32 func_8017B448_ovl_04(s32 n)
{
    u32 sum = 0;
    s8 *stbl = D_800F9E60;
    u8 *p = D_80180370_ovl_04 + *(volatile u16 *)(D_8018065C_ovl_04 + n * 2);
    u8 *a = D_80180900_ovl_04;
    u32 i;
    s32 off;
    u32 c;

    for (;;) {
        c = *p;
        if (c >= 0xEE) {
            i = 0;
            for (;;) {
                if (*(volatile u8 *)p == a[i & 7]) {
                    if (i == 0)
                        goto done;
                    p++;
                    goto skip;
                }
                i++;
                if (i >= 6)
                    goto skip;
            }
        skip:
            p++;
        } else {
            if (c < 0x57) {
                off = *(volatile u8 *)p * 2 + 1;
                sum += stbl[off];
            } else {
                sum += 14;
            }
            p++;
        }
    }
done:
    return (0x140 - sum) >> 1;
}
