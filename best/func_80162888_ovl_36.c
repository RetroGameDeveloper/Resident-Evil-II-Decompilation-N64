s32 func_80036F08_ovl_01(void *arg0, void *arg1, s32 arg2, s32 arg3);

void func_80162888_ovl_36(void *arg0) {
    u8 *q = (u8 *)arg0 + 0x2B4;
    u8 v = q[3];

    if (v == 0) {
        q[2] = func_80036F08_ovl_01(arg0, 0, 0x3B, 0);
        q[3] = 0xF;
    } else {
        q[3] = v - 1;
    }
}
