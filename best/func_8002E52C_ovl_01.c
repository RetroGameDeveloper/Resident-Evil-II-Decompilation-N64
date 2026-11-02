extern u8 func_8002DDE4_ovl_01[];
extern u8 D_8002DF44_ovl_01[];
extern u8 D_8002E074_ovl_01[];
extern u8 D_8002E0D8_ovl_01[];
extern u8 D_8002E294_ovl_01[];

void func_8002E52C_ovl_01(u8 *arg0) {
    u8 *s0;
    s32 prod;

    s0 = ((void *(*)(u8 *, s32, s32)) * (void **)(*(u8 **)(arg0 + 4)))(arg0, 1, 0x30);
    *(u8 **)(arg0 + 0x180) = s0;
    *(void **)s0 = func_8002DDE4_ovl_01 + 0x5C;
    *(s32 *)(s0 + 8) = 0;
    prod = *(s32 *)(arg0 + 0x5C) * *(s32 *)(arg0 + 0x64);
    *(s32 *)(s0 + 0x28) = prod;
    if (*(s32 *)(arg0 + 0x108) == 2) {
        *(void **)(s0 + 4) = D_8002DF44_ovl_01;
        *(void **)(s0 + 0xC) = D_8002E294_ovl_01;
        *(s32 *)(s0 + 0x20) = ((s32 (*)(u8 *, s32, s32)) * (void **)(*(u8 **)(arg0 + 4) + 4))(arg0, 1, prod);
    } else {
        *(void **)(s0 + 4) = D_8002E074_ovl_01;
        *(void **)(s0 + 0xC) = D_8002E0D8_ovl_01;
        *(s32 *)(s0 + 0x20) = 0;
    }
}
