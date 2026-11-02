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

s32 func_80032EA4_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80162B1C_ovl_18(void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_80162C10_ovl_18(void *);                   /* extern */
extern M2C_UNK D_800E10D0_ovl_01;

void func_8016263C_ovl_18(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s2;
    s32 temp_v1;
    s32 var_v0;
    u16 temp_v0_2;
    u16 var_v1;
    u8 temp_v0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x2B4);
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0x1C2U;
        var_v1 = -0x20U;
        if (func_80033634_ovl_01() & 1) {
            var_v1 = 0x20;
        }
        M2C_FIELD(arg0, u16 *, 0x1F6) = var_v1;
        M2C_FIELD(arg0, u8 *, 0x206) = (u8) (func_80033634_ovl_01() & 0x1F);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x0C000000);
    }
    temp_s2 = func_80032EA4_ovl_01(arg0, M2C_FIELD(temp_s1, s32 *, 0x28), M2C_FIELD(temp_s1, s32 *, 0x30), 0x100);
    temp_v1 = (s8) M2C_FIELD(arg0, u8 *, 0x2BA) + M2C_FIELD(arg0, u16 *, 0x1F6);
    M2C_FIELD(arg0, u8 *, 0x2BA) = (u8) -(s8) M2C_FIELD(arg0, u8 *, 0x2BA);
    M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + temp_v1);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x206) + 1;
    M2C_FIELD(arg0, u8 *, 0x206) = temp_v0;
    if (!(temp_v0 & 0xF)) {
        func_80162B1C_ovl_18(arg0, 0, 0x82);
        M2C_FIELD(arg0, u8 *, 0x206) = (u8) (M2C_FIELD(arg0, u8 *, 0x206) + (func_80033634_ovl_01() & 7));
    }
    if (M2C_FIELD(arg0, void **, 0x2B4) == &D_800E10D0_ovl_01) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x28C) < 0x7D0;
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x290) < 0x7D0;
    }
    if ((var_v0 != 0) && (temp_s2 == 0) && !(M2C_FIELD(temp_s1, u8 *, 0x26F) & 0x80)) {
        M2C_FIELD(arg0, s8 *, 5) = 3;
        M2C_FIELD(arg0, u8 *, 6) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s16 *, 0x1A8) + 0xA);
    if (func_80162C10_ovl_18(arg0) >= 0) {
        M2C_FIELD(arg0, s8 *, 5) = 1;
        M2C_FIELD(arg0, u8 *, 6) = 0;
        return;
    }
    temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
    M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        M2C_FIELD(arg0, s16 *, 0x1F2) = -1;
        M2C_FIELD(arg0, s32 *, 4) = 0x03000000;
    }
}
