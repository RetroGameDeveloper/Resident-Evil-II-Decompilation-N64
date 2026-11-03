s32 func_80166984_ovl_26(u8 *a0) {
    s16 x;
    s16 y;
    s32 r;

    x = *(s16 *)(a0 + 0x1F2);
    y = *(s16 *)(a0 + 0x2C4);
    r = 0;
    if (x > y) {
        goto done;
    }
    if (x < 0) {
        goto done;
    }
    if (*(u8 *)(a0 + 0x2B8) != 0) {
        goto done;
    }
    a0[5] = 7;
    *(u16 *)(a0 + 6) = 0;
    r = 1;
done:
    return r;
}
