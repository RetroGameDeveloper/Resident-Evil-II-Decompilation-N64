s32 func_800AC334_ovl_01(s32, s32);

s32 func_800AC8A8_ovl_01(s32 arg0) {
    return func_800AC334_ovl_01(arg0, arg0 + 0x10C) & 0xFFFF;
}

s32 func_800AC8C8_ovl_01(s32 arg0) {
    return func_800AC334_ovl_01(arg0, arg0 + 0x11E) & 0xFFFF;
}

s32 func_800AC8E8_ovl_01(s32 arg0) {
    return func_800AC334_ovl_01(arg0, arg0 + 0x130) & 0xFFFF;
}

s32 func_800AC908_ovl_01(s32 arg0) {
    return func_800AC334_ovl_01(arg0, arg0 + 0x142) & 0xFFFF;
}
