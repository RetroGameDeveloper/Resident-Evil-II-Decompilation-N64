/* identical to func_80161D30_ovl_24 (matched), with its names changed by decompdecomp */
extern s32 func_80089D34_ovl_01(void *p, s32 a1, s32 a2, s32 a3);

void func_8016E8C0_overlay_052(void *p, s32 a1, s32 a2) {
    u8 *q = p;
    s16 s = q[5];
    s32 one = 1;
    if (s == one) goto active;
    if (s >= 2) goto done;
    if (s != 0) goto done;
    if (*(s16 *)(q + 0x270) == 0) goto done;
    q[5] = one;
    *(s32 *)(q + 0x1E8) = 0;
active:
    q[5] += func_80089D34_ovl_01(p, a1, a2, 0x1000);
done:
    ;
}
