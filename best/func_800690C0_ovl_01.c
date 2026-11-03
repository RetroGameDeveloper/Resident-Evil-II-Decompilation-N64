extern s32 func_80040BE4_ovl_01(s32);

s32 func_800690C0_ovl_01(u8 *p, s32 arg1, u8 *arg2) {
    u32 w = *(u16 *)(arg2 + 4);
    s32 dx, dy, t, dist, qx, qy;

    w >>= 1;
    dx = *(s32 *)(p + 0x120) - (*(s16 *)(arg2 + 0) + w);
    dy = *(s32 *)(p + 0x128) - (*(s16 *)(arg2 + 2) + w);
    t = (s32)w + arg1;
    dist = func_80040BE4_ovl_01(dx * dx + dy * dy);
    t -= dist;
    if (t <= 0) {
        return 0;
    }
    qx = (dx + 8) * t / dist;
    qy = (dy + 8) * t / dist;
    *(s32 *)(p + 0x120) = *(s32 *)(p + 0x120) + qx;
    *(s32 *)(p + 0x128) = *(s32 *)(p + 0x128) + qy;
    return 1;
}
