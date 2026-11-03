#define MULT_HI(a,b) ((s32)(((s64)(a)*(s64)(b)) >> 32))
s32 func_80032C08_ovl_01(void *, s32, s32);
s16 func_80032D44_ovl_01(s16, s16, s32, s32);
s32 func_80040BE4_ovl_01(s32);
s32 func_80052C9C_ovl_01(s32, s32, s32);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80165D94_ovl_30(void *, s32);
void func_80164498_ovl_30(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_hi, temp_v0, temp_v0_2, temp_v0_3, temp_v0_4;
    u16 temp_v0_5;
    u8 temp_v1;
    temp_v1 = *((u8 *)arg0 + 7);
    switch (temp_v1) {
    case 0:
        temp_v0 = 0x1388 - *((s32 *)((u8 *)arg0 + 0x28));
        temp_v0_2 = -0x40D8 - *((s32 *)((u8 *)arg0 + 0x30));
        *((u8 *)arg0 + 7) = 1U;
        *((s32 *)((u8 *)arg0 + 0x1E8)) = 0x0D000F00;
        temp_v0_3 = func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2));
        temp_hi = MULT_HI(temp_v0_3, 0x78787879);
        temp_v0_4 = temp_v0_3 >> 31;
        *((u16 *)((u8 *)arg0 + 0x1E2)) = -0x54A;
        *((s16 *)((u8 *)arg0 + 0x1E4)) = 0;
        *((s16 *)((u8 *)arg0 + 0x1E0)) = (temp_hi >> 3) - temp_v0_4;
        *((s16 *)((u8 *)arg0 + 0x2B6)) = func_80032D44_ovl_01(*((s16 *)((u8 *)arg0 + 0x2A)), *((s16 *)((u8 *)arg0 + 0x32)), 0x1388, -0x40D8);
        *((s8 *)arg0 + 0x2CD) = 0;
        *((u8 *)arg0 + 0x25C) |= 1;
    case 1:
        func_80165D94_ovl_30(arg0, 0x80);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        if (*((s32 *)*((u8 *)arg0 + 0x214)) & 0x10000) {
            *((u8 *)arg0 + 7) = 2U;
            *((s8 *)arg0 + 0x2BD) = 1;
            *((s8 *)arg0 + 0x207) = 0;
            *((s32 *)arg0) |= 8;
            *((u8 *)arg0 + 0x26F) |= 0x80;
            func_80077D48_ovl_01(6, arg0);
            func_80052C9C_ovl_01(8, 0x64, 0);
        }
        break;
    case 2:
        func_80032C08_ovl_01(arg0, 0, 0);
        if ((*((s8 *)arg0 + 0x207) == 0) && func_80089D34_ovl_01(arg0, arg1, arg2, 0x100)) {
            *((s8 *)arg0 + 0x207) = 1;
            *((s32 *)arg0) |= 0x400;
        }
        temp_v0_5 = *((u16 *)((u8 *)arg0 + 0x1E2)) + 0x50;
        *((u16 *)((u8 *)arg0 + 0x1E2)) = temp_v0_5;
        if (!(temp_v0_5 & 0x8000) && (*((s32 *)((u8 *)arg0 + 0x2C)) >= -0x1770)) {
            *((s16 *)((u8 *)arg0 + 6)) = 0x100;
            *((s32 *)((u8 *)arg0 + 0x28)) = 0x1388;
            *((s32 *)((u8 *)arg0 + 0x2C)) = -0x1770;
            *((s32 *)((u8 *)arg0 + 0x30)) = -0x40D8;
            func_80077D48_ovl_01(7, arg0);
            *((s8 *)arg0 + 0x2CF) = 0x1C;
            *((s8 *)arg0 + 0x2CE) = 7;
            func_80052C9C_ovl_01(8, 0x64, 0);
        }
        break;
    }
    *((s8 *)arg0 + 0x1A2) = *((s32 *)((u8 *)arg0 + 0x2C)) / 1800;
}
