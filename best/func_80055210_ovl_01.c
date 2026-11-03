extern u8 D_80111103_ovl_01;
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];
extern s32 D_801314F0_ovl_01[];
extern f32 D_8010DD0C_ovl_01;
f32 func_80047DA0_ovl_01(f32, f32);

void func_8005AB28_ovl_01(u8 *arg0) {
    arg0[0x1A3] -= D_80111103_ovl_01;
}

void func_8005AB40_ovl_01(u8 *arg0, u8 *arg1) {
    if (D_800C7650_ovl_01[0x18000 + 0x1A76] != 0) {
        arg0[0x289] = 0;
        arg0[0x288] = *(u8 *)(*(s32 *)(arg1 + 4) + 1);
    }
}

void func_80059F08_ovl_01(s32 arg0) {
    u8 *p = D_800E10D0_ovl_01;
    u16 temp;

    temp = (u16)(*(u16 *)(p + 0x1F2) + arg0);
    *(u16 *)(p + 0x1F2) = temp;
    *(u16 *)(p + 0x1F0) &= 0xEFFF;
    if ((s16)*(u16 *)(p + 0x1FE) >= (s16)temp)
        *(u16 *)(p + 0x1F2) = *(u16 *)(p + 0x1FE);
}

void func_80055210_ovl_01(void) {
    D_8010DD0C_ovl_01 =
        func_80047DA0_ovl_01((f32)(D_801314F0_ovl_01[0x8C / 4] - D_801314F0_ovl_01[0x80 / 4]),
                             (f32)(D_801314F0_ovl_01[0x94 / 4] - D_801314F0_ovl_01[0x88 / 4]));
}
