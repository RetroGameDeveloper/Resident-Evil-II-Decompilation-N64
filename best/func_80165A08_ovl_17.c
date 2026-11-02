extern s32 D_800C7650_ovl_01, D_800E8FC8_ovl_01, D_80167F04_ovl_17;
void func_80165A08_ovl_17(void *arg0) {
    s16 sp10;
    u16 sp12;
    s16 sp14;
    s32 *var_s0;
    u32 var_s1;
    void *temp_s2;
    if (*(u8 *)((u8 *)arg0 + 0x2D2) != 0) {
        *(u16 *)((u8 *)&D_800C7650_ovl_01 + 0x19A78) &= 0xFFDF;
    }
    var_s1 = 0;
    if (*(s8 *)((u8 *)arg0 + 0x2D6) <= 0) {
        temp_s2 = *(void **)((u8 *)arg0 + 0x234);
        var_s0 = &D_80167F04_ovl_17;
        do {
            sp10 = *(u16 *)((u8 *)temp_s2 + 0x4E) + *(u16 *)var_s0;
            sp12 = *(u16 *)((u8 *)arg0 + 0x1A8);
            sp14 = *(u16 *)((u8 *)temp_s2 + 0x56) + *(u16 *)((u8 *)var_s0 + 4);
            func_800377B0_ovl_01(0x1A002000, *(s16 *)((u8 *)arg0 + 0x66), &D_800E8FC8_ovl_01, &sp10);
            var_s1++;
            var_s0 = (s32 *)((u8 *)var_s0 + 8);
        } while (var_s1 < 8);
        *(s8 *)((u8 *)arg0 + 0x2DA) = 1;
        *(s8 *)((u8 *)arg0 + 0x2DB) = 1;
    }
}
