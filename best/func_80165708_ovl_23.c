void func_80165708_ovl_23(void *arg0, s32 arg1, s32 arg2) {
    s16 sp10;
    s16 sp12 = -0x12C;
    s16 sp14 = 0;
    s16 var_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    u16 temp_v0;
    u8 temp_s1;
    temp_s0 = *(s32 *)((u8 *)arg0 + 0x234);
    temp_s1 = *(u8 *)((u8 *)arg0 + 6);
    switch (temp_s1) {
    case 0:
        temp_s0_2 = temp_s0 + 0x38;
        *(s16 *)((u8 *)arg0 + 0x1F4) = 0;
        *(u16 *)((u8 *)arg0 + 0x1F6) = 0;
        sp10 = 0xFA;
        func_800377B0_ovl_01(0x62300, 0, temp_s0_2, &sp10);
        func_800377B0_ovl_01(0x62300, 0, temp_s0_2, &sp10);
        sp10 = 0xFA;
        func_800377B0_ovl_01(0x62300, 0x800, temp_s0_2, &sp10);
        func_800377B0_ovl_01(0x62300, 0x800, temp_s0_2, &sp10);
        *(u8 *)((u8 *)arg0 + 6) = (u8)(*(u8 *)((u8 *)arg0 + 6) + 1);
    case 1:
        *(s32 *)((u8 *)arg0 + 0x1E8) = 0;
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x1000);
        *(u16 *)((u8 *)arg0 + 0x66) = (u16)(*(u16 *)((u8 *)arg0 + 0x66) + 0x800);
        func_8003334C_ovl_01(arg0, arg1, arg2, 0);
        *(u16 *)((u8 *)arg0 + 0x66) = (u16)(*(u16 *)((u8 *)arg0 + 0x66) - 0x800);
        *(u8 *)((u8 *)arg0 + 6) = (u8)(*(u8 *)((u8 *)arg0 + 6) + 1);
        return;
    case 2:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x1000);
        if (*(u8 *)((u8 *)arg0 + 0x1E9) == 0x6C) *(u8 *)((u8 *)arg0 + 6) = (u8)(*(u8 *)((u8 *)arg0 + 6) + 1);
        temp_v0 = *(u16 *)((u8 *)arg0 + 0x1F6) + 1;
        *(u16 *)((u8 *)arg0 + 0x1F6) = temp_v0;
        if ((s16)temp_v0 == temp_s1) {
            if (*(s16 *)((u8 *)arg0 + 0x1F4) != 0) {
                sp10 = 0xFA;
            } else {
                sp10 = -0xFA;
            }
            *(u16 *)((u8 *)arg0 + 0x1F6) = 0;
            *(s16 *)((u8 *)arg0 + 0x1F4) = (s16)(*(u16 *)((u8 *)arg0 + 0x1F4) ^ 1);
        }
        if (*(u8 *)((u8 *)arg0 + 0x1E9) < 0x50) {
            temp_s0_3 = temp_s0 + 0x38;
            func_800377B0_ovl_01(0x32000, 0, temp_s0_3, &sp10);
            func_800377B0_ovl_01(0x62000, 0, temp_s0_3, &sp10);
        }
        *(u16 *)((u8 *)arg0 + 0x66) = (u16)(*(u16 *)((u8 *)arg0 + 0x66) + 0x800);
        func_8003334C_ovl_01(arg0, arg1, arg2, 0);
        *(u16 *)((u8 *)arg0 + 0x66) = (u16)(*(u16 *)((u8 *)arg0 + 0x66) - 0x800);
        return;
    }
}
