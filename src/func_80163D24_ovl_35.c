s32 func_80089D34_ovl_01(void *, s32, s32, s32);

void func_80163D24_ovl_35(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = arg0;
    if (p[7] == 0) {
        p[7] = 1;
        p[0x2C3] = 0;
    }
    if (*(s16 *)(p + 0x270) != 0 || p[0x2C3] != 0) {
        *(s16 *)(p + 6) = 0x200;
    }
    func_80089D34_ovl_01(p, arg1, arg2, 0x100);
}
