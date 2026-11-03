s32 func_80040BE4_ovl_01(s32);

void func_80040AD8_ovl_01(s32 *arg0, s32 *arg1) {
    s32 s, len;

    s = arg0[0] * arg0[0];
    s = s + arg0[1] * arg0[1];
    s = s + arg0[2] * arg0[2];
    len = func_80040BE4_ovl_01(s);
    arg1[0] = (arg0[0] << 12) / len;
    arg1[1] = (arg0[1] << 12) / len;
    arg1[2] = (arg0[2] << 12) / len;
}
