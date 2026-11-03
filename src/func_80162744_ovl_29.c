s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_80162744_ovl_29(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0;
    switch (p[6]) {
    case 0:
        *(s32 *)(p + 0x1E8) = 0x1F00;
        p[6] = 1;
        p[0x207] = 1;
        p[0x206] = 1;
        p[0x25C] &= 0xFD;
        /* fallthrough */
    case 1:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
    }
}
