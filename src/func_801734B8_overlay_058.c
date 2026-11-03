/* identical to func_80166928_ovl_30 (matched), with its names changed by decompdecomp */
s32 func_80089D34_ovl_01(void *, s32, s32, s32);

void func_801734B8_overlay_058(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = arg0;
    if (p[6] == 0) {
        p[6] = 1;
        *(s32 *)(p + 0x1E8) = 0xF00;
    }
    func_80089D34_ovl_01(p, arg1, arg2, 0x100);
    *(s16 *)(p + 0x272) = 1;
}
