s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_80165248_ovl_35(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0;

    if (p[7] == 0) {
        s32 v = *(s16 *)(p + 0x25E);
        p[7] = 1;
        *(s32 *)(p + 0x1E8) = 0x07000F00;
        *(s32 *)(p + 0x2C) = v;
    }
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
        *(s32 *)(p + 4) = 0x07000000;
    }
}
