s32 func_800AB36C_ovl_01(void);
s32 func_800A5830_ovl_01(u8 a);

s32 func_800AF2EC_ovl_01(u8 *obj, u8 *cfg) {
    u16 t;
    u32 u;

    t = *(u16 *)(obj + 0x68);
    if (t == 0) {
        if (*(u16 *)(cfg + 0) & 1)
            *(u16 *)(obj + 0x68) = (u16)((u32)(func_800AB36C_ovl_01() & 0xFFFF) % (u32)*(u16 *)(cfg + 4));
        else
            *(u16 *)(obj + 0x68) = *(u16 *)(cfg + 4);
        u = *(u16 *)(obj + 0x68);
        if (u == 0xFFFF)
            goto block8;
        *(u16 *)(obj + 0x68) = u + 1;
    } else if (t == 0xFFFF) {
        goto block8;
    }

    t = *(u16 *)(obj + 0x68) - 1;
    *(u16 *)(obj + 0x68) = t;
    if (t == 0)
        return 0;

block8:
    if ((*(u32 *)(cfg + 0) >> 8) & 1) {
        if ((*(u32 *)(obj + 0x24) & 0x40000008) == 8) {
            *(u16 *)(obj + 0x68) = 0;
            goto done;
        }
    }
    if (*(u8 *)(cfg + 0) & 1) {
        if (!(*(u32 *)(obj + 0x24) & 0x20)) {
            if ((func_800A5830_ovl_01(*(u8 *)(obj + 0x63)) & 0xFF) == 0) {
                *(u16 *)(obj + 0x68) = 0;
                goto done;
            }
        }
    }
    *(u32 *)(obj + 4) = *(u32 *)(obj + 0) + *(u16 *)(cfg + 6) * 8;
done:
    return 0;
}
