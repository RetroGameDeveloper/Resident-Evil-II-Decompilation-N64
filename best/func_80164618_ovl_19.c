/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s32, void *, M2C_UNK); /* extern */
M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80164618_ovl_19(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 temp_v0;
    u8 temp_v1;
    void *temp_s0;

    if (((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x190U) && (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A7A) & 6)) {
        M2C_FIELD(arg0, s32 *, 4) = 0x03010100;
        M2C_FIELD(arg0, s8 *, 0x26E) = 0;
        M2C_FIELD(arg0, u16 *, 0x1E0) = 0U;
        temp_s0 = arg0 + 0x14;
        func_800377B0_ovl_01(0x81FA0, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0, 0);
        func_800377B0_ovl_01(0x817D0, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0, 0);
        func_800377B0_ovl_01(0x817D0, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0, 0);
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((func_80033634_ovl_01() & 7) << 0x10) + 0x09000000);
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
        func_80052C00_ovl_01(1, 0);
        func_80052C9C_ovl_01(5, 0x50, 0);
        return;
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0xF00;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
        /* fallthrough */
    case 1:
        func_80032DEC_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x40);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        func_80032B8C_ovl_01(arg0, 0);
        M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E0) - ((s16) M2C_FIELD(arg0, u16 *, 0x1F4) * 5));
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) (M2C_FIELD(arg0, u16 *, 0x1F4) + 1);
        if ((s16) M2C_FIELD(arg0, u16 *, 0x1E0) < 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((func_80033634_ovl_01() & 0x1F) + 0x3C);
            M2C_FIELD(arg0, s8 *, 0x206) = 0;
            return;
        }
        return;
    case 2:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x9C4U) {
            M2C_FIELD(arg0, u8 *, 6) = 3U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0D000700;
            func_80032DEC_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x100);
            return;
        }
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((s16) temp_v0 == -1) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            M2C_FIELD(arg0, u16 *, 0x1E0) = 0x50U;
            return;
        }
        break;
    case 3:
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            M2C_FIELD(arg0, u16 *, 0x1E0) = 0x64U;
            M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
            return;
        }
        func_80032B8C_ovl_01(arg0, 0);
        break;
    }
}
