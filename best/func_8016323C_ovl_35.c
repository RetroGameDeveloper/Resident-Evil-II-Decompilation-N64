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

s32 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;
extern M2C_UNK D_80166664_ovl_35;

void func_8016323C_ovl_35(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK *var_a3;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 var_a0;
    s32 temp_v0;
    s8 var_a1;
    u16 temp_a0;
    u8 temp_v1_2;

    if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
        var_a3 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
    } else {
        var_a3 = &D_800E10D0_ovl_01;
    }
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) & 0xFFF);
        temp_v0 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(var_a3, s16 *, 0x2A), M2C_FIELD(var_a3, s16 *, 0x32)) + 0x800;
        temp_v1 = (temp_v0 & 0xC00) + ((temp_v0 & 0x200) * 2);
        var_a0 = (s16) M2C_FIELD(arg0, u16 *, 0x66) - temp_v1;
        M2C_FIELD(arg0, s16 *, 0x1F4) = temp_v1;
        if (var_a0 < 0) {
            var_a0 = -var_a0;
        }
        var_a1 = -0x30;
        M2C_FIELD(arg0, s16 *, 0x1F6) = var_a0;
        if ((s16) M2C_FIELD(arg0, u16 *, 0x66) < M2C_FIELD(arg0, s16 *, 0x1F4)) {
            var_a1 = 0x30;
        }
        temp_a0 = (u16) M2C_FIELD(arg0, s16 *, 0x1F6);
        M2C_FIELD(arg0, s8 *, 0x206) = var_a1;
        if (temp_a0 & 0x800) {
            M2C_FIELD(arg0, s16 *, 0x1F6) = (s16) (0xFFF - temp_a0);
            M2C_FIELD(arg0, s8 *, 0x206) = (s8) -var_a1;
        }
        M2C_FIELD(arg0, u8 *, 0x207) = 0U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x03000F00;
    }
    temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x207);
    M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + (s8) (u8) M2C_FIELD(arg0, s8 *, 0x206));
    M2C_FIELD(arg0, u8 *, 0x207) = (u8) (temp_v1_2 + 1);
    temp_v0_2 = (u16) M2C_FIELD(arg0, s16 *, 0x1F6) - 0x30;
    M2C_FIELD(arg0, s16 *, 0x1F6) = temp_v0_2;
    M2C_FIELD(arg0, u16 *, 0x64) = (u16) *(((temp_v1_2 & 7) * 2) + &D_80166664_ovl_35);
    if ((temp_v0_2 << 0x10) <= 0) {
        M2C_FIELD(arg0, s8 *, 0x2C4) = 1;
        M2C_FIELD(arg0, s8 *, 5) = 0xB;
        M2C_FIELD(arg0, u8 *, 6) = 0;
        M2C_FIELD(arg0, s8 *, 0x2BE) = 1;
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) M2C_FIELD(arg0, s16 *, 0x1F4);
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
}
