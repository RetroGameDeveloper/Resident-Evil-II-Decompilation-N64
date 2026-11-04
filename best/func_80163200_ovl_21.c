extern void func_80077D48_ovl_01(s8 arg0, void *arg1);
extern s32 func_800377B0_ovl_01(u32 arg0, s16 arg1, void *arg2, void *arg3);
extern s32 func_80036BB4_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern u8 D_800E8FC8_ovl_01[];

void func_80163200_ovl_21(void *arg0) {
    u8 *p = arg0;
    u8 state;
    u8 *s1;
    u16 desc[3];

    state = p[6];
    s1 = *(u8 **)(p + 0x234);
    switch (state) {
    case 0:
        func_80077D48_ovl_01(2, p);
        desc[0] = *(u16 *)(p + 0x2A);
        desc[1] = *(u16 *)(p + 0x2E);
        desc[2] = *(u16 *)(p + 0x32);
        *(s32 *)(s1 + 0x2F0) = 1;
        *(s32 *)(s1 + 0x468) = 1;
        func_800377B0_ovl_01(0x100C00, 0, D_800E8FC8_ovl_01, desc);
        p[6] = p[6] + 1;
        /* fallthrough */
    case 1:
        p[0x1E9] = 0;
        func_80036BB4_ovl_01(p, 4, 0, 0);
        break;
    }
}
