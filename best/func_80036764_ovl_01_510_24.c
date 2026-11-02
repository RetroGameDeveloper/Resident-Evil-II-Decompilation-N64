s32 func_80036764_ovl_01_510_24(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 old;
    s32 t0;

    old = *(s32 *)arg0;
    t0 = (old - arg1) & 0x80000000;
    if (t0 != 0) {
        *(s32 *)arg0 = old + (s16)arg2;
    } else {
        *(s32 *)arg0 = old - (s16)arg2;
    }
    if (t0 != ((*(s32 *)arg0 - arg1) & 0x80000000)) {
        *(s32 *)arg0 = arg1;
        return 1;
    }
    return 0;
}
