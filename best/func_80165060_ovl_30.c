extern u8 D_800C7650_ovl_01[];
extern u8 D_80167D18_ovl_30[];
extern u8 D_80167D2C_ovl_30[];
extern u32 D_80167ECC_ovl_30[];
extern u8 D_80167F18_ovl_30[];
extern u8 D_80167F2C_ovl_30[];
void func_80077D48_ovl_01(s32, void *);
void func_80162094_ovl_30(void *, s32, s32, u8);
void func_801673FC_ovl_30(void *, s32, s32, s16 *);

void func_80165060_ovl_30(u8 *arg0, s32 arg1, s32 arg2) {
    s16 tmp[3];
    u8 *s2;
    u8 *base;
    s32 s0, s1, one;
    s32 v0;
    u16 t;

    ((void (*)(u8 *))D_80167ECC_ovl_30[*(u8 *)(arg0 + 5) - 1])(arg0);
    s2 = arg0 + 0x2B4;
    s2[0x10] = 2;
    s2[0x11] = 0;
    if (*(u8 *)(arg0 + 5) != 0x10)
        func_80077D48_ovl_01(2, arg0);
    one = 1;
    if (*(u8 *)(arg0 + 5) != one) {
        s1 = D_80167D18_ovl_30[*(u8 *)(arg0 + 5) - 1];
        s0 = D_80167D2C_ovl_30[*(u8 *)(arg0 + 0x26E) % 3];
        tmp[0] = 0x12C;
        tmp[1] = 0;
        tmp[2] = 0;
        func_801673FC_ovl_30(arg0, s0, s1, tmp);
        tmp[0] = -0x64;
        func_801673FC_ovl_30(arg0, s0, s1, tmp);
    }
    base = D_800C7650_ovl_01 + 0x18000;
    if (*(s16 *)(base + 0x1C72) >= 0x14) {
        if (s2[9] == 0) {
            if (s2[0x1C] == 0) {
                s32 limit = 0x258;
                if (*(u32 *)(base + 0x1A3C) & 0x20)
                    limit = 0x1F4;
                if (*(s16 *)(arg0 + 0x1F2) >= limit) {
                    t = *(u16 *)(s2 + 0xE) - D_80167F18_ovl_30[*(u8 *)(arg0 + 5) - 1];
                    *(u16 *)(s2 + 0xE) = t;
                    if ((s16)t <= 0) {
                        *(u8 *)(arg0 + 0x2C0) = 0;
                        *(u16 *)(s2 + 0xE) = 0x28;
                        v0 = 0x01080000;
                        goto success;
                    }
                } else {
                    t = *(u16 *)(s2 + 0xE) - D_80167F2C_ovl_30[*(u8 *)(arg0 + 5) - 1];
                    *(u16 *)(s2 + 0xE) = t;
                    if ((s16)t <= 0) {
                        *(u8 *)(arg0 + 0x2C0) = 0;
                        *(u16 *)(s2 + 0xE) = 0x28;
                        if (*(u8 *)(s2) == 0) {
                            v0 = 0x01090000;
                            goto success;
                        }
                    }
                }
            }
        }
    }
    *(s32 *)(arg0 + 4) = (s2[6] << 16) + (s2[7] << 8) + s2[8] + 0x01000000;
    func_80162094_ovl_30(arg0, arg1, arg2, s2[8]);
    return;
success:
    s2[0x1C] = one;
    *(s32 *)(arg0 + 4) = v0;
    *(u16 *)(arg0 + 0x1E0) = *(u16 *)(s2 + 0x1E);
    *(u16 *)(arg0 + 0x1E2) = *(u16 *)(s2 + 0x20);
    *(u16 *)(arg0 + 0x1E4) = *(u16 *)(s2 + 0x22);
    s2[6] = *(u8 *)(arg0 + 5);
    s2[7] = *(u8 *)(arg0 + 6);
    s2[8] = *(u8 *)(arg0 + 7);
}
