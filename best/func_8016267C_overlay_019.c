/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_80032C08_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_80033634_ovl_01(s16);                      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_8016267C_overlay_019(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 temp_a0;
    u16 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02000300;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1E2) = -0xB4U;
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1E0) + 0xC8;
        M2C_FIELD(arg0, u16 *, 0x1E0) = temp_v0;
        if ((s16) temp_v0 >= 0x12D) {
            M2C_FIELD(arg0, u16 *, 0x1E0) = 0x12CU;
        }
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1F6) = 0;
        /* fallthrough */
    case 1:
        func_80032DEC_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x28);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        func_80032C08_ovl_01(arg0, 0, 0);
        temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1E2) + (M2C_FIELD(arg0, s16 *, 0x1F4) * 0xF);
        M2C_FIELD(arg0, u16 *, 0x1E2) = temp_v0_2;
        if (((temp_v0_2 << 0x10) > 0) && (M2C_FIELD(arg0, s16 *, 0x1F6) == 0)) {
            M2C_FIELD(arg0, s16 *, 0x1F6) = 1;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x03000700;
        }
        temp_a0 = M2C_FIELD(arg0, s16 *, 0x25E);
        M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1F4) + 1);
        if (temp_a0 < M2C_FIELD(arg0, s32 *, 0x2C)) {
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_a0;
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E0) - 0x96);
            if (func_80033634_ovl_01(temp_a0) & 1) {
                M2C_FIELD(arg0, s32 *, 4) = 0x01070000;
            }
        }
        if (((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x2BCU) && (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) == 0)) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01040000;
        }
        return;
    }
}
