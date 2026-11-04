extern volatile u8 D_800DFBB4_ovl_01[];

void func_80033A0C_ovl_01(void **arg0, u16 arg1, u32 arg2, s32 arg3, s32 arg4) {
    volatile u8 *p = D_800DFBB4_ovl_01;
    s32 i = 0x32;

    if (p[0xE] != 0) {
        i--;
        for (;;) {
            if (i == 0)
                goto fail;
            p += 0x68;
            if (p[0xE] == 0)
                break;
            i--;
        }
    }

    if (i != 0) {
        *arg0 = (void *)p;
        p[0xE] = 5;
        *(s32 *)(p + 0x14) = arg4;
        if (arg3 != 0)
            *(s32 *)(p + 0x18) = p[0x1B] | arg3;
        else
            *(s32 *)(p + 0x18) = 0x80808000;
        *(u16 *)(p + 0x2) = arg1 >> 16;
        *(u16 *)(p + 0x0) = arg1;
        *(u16 *)(p + 0x4) = arg2;
        *(u16 *)(p + 0x6) = arg2 >> 16;
        return;
    }
fail:
    *arg0 = 0;
}
