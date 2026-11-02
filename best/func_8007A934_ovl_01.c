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

M2C_UNK func_8008797C_ovl_01(void *, void *, M2C_UNK); /* extern */

void func_8007A934_ovl_01(void *arg0) {
    u16 temp_v1;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x1AA);
    if (temp_v1 & 0x100) {
        temp_a1 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (temp_v1 & 0xFEFF);
        temp_a0 = temp_a1 + 0x1780;
        temp_v0 = temp_a1 + 0x178;
        M2C_FIELD(temp_v0, s32 *, 0xA8) = (s32) M2C_FIELD(temp_a0, s32 *, 0xA8);
        M2C_FIELD(temp_v0, s32 *, 0xAC) = (s32) M2C_FIELD(temp_a0, s32 *, 0xAC);
        M2C_FIELD(temp_v0, s32 *, 0xB0) = (s32) M2C_FIELD(temp_a0, s32 *, 0xB0);
        M2C_FIELD(temp_v0, s32 *, 0xB4) = (s32) M2C_FIELD(temp_a0, s32 *, 0xB4);
        M2C_FIELD(temp_v0, u16 *, 0xC4) = (u16) M2C_FIELD(temp_a0, u16 *, 0xC4);
        M2C_FIELD(temp_v0, u16 *, 0xC6) = (u16) M2C_FIELD(temp_a0, u16 *, 0xC6);
        M2C_FIELD(temp_v0, s32 *, 0xCC) = (s32) M2C_FIELD(temp_a0, s32 *, 0xCC);
        M2C_FIELD(temp_v0, s32 *, 0xC8) = (s32) M2C_FIELD(temp_a0, s32 *, 0xC8);
        M2C_FIELD(temp_a1, s32 *, 0x1780) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x2F0) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x468) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x5E0) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x758) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x8D0) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0xA48) = 0;
        func_8008797C_ovl_01(arg0, M2C_FIELD(arg0, void **, 0x234) + 0xBC0, 1);
        func_8008797C_ovl_01(arg0, M2C_FIELD(arg0, void **, 0x234), 1);
        func_8008797C_ovl_01(arg0, M2C_FIELD(arg0, void **, 0x234) + 0xD38, 1);
        func_8008797C_ovl_01(arg0, M2C_FIELD(arg0, void **, 0x234) + 0xEB0, 1);
        func_8008797C_ovl_01(arg0, M2C_FIELD(arg0, void **, 0x234) + 0x11A0, 1);
        func_8008797C_ovl_01(arg0, M2C_FIELD(arg0, void **, 0x234) + 0x1318, 1);
    }
}
