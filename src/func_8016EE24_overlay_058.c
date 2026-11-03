/* identical to func_80162294_ovl_30 (matched), with its names changed by decompdecomp */
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80032B8C_ovl_01(void *, s32);
s32 func_80033678(void *);

void func_8016EE24_overlay_058(void *arg0, s32 arg1, s32 arg2) {
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    func_80032B8C_ovl_01(arg0, 0);
    if (*(s16 *)((u8 *)arg0 + 0x270) == 2) *(s16 *)((u8 *)arg0 + 6) = 0x200;
    func_80033678(arg0);
}
