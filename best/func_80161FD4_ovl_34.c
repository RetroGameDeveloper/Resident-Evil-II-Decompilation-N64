s32 func_80089D34_ovl_01(void *, s32, s32, s32);

void func_80161FD4_ovl_34(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0;
    switch (p[6]) {
    case 0:
        *(s32 *)(p + 0x1E8) = 0x700;
        {
            u8 v = p[0x25C];
            p[6] = 1;
            p[0x25C] = v & 0xFD;
        }
        /* fallthrough */
    case 1:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    }
}
