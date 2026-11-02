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

s32 func_80033634_ovl_01();                         /* extern */
extern M2C_UNK D_8016C4BC_ovl_31;

void func_8016B328_ovl_31(void *arg0, void *arg1) {
    s16 *temp_a0_2;
    s16 *temp_a0_3;
    s32 temp_s0;
    u16 *temp_a0;
    u16 *temp_v1_2;
    u16 temp_v1_3;
    u8 temp_s0_2;
    u8 temp_v1;
    void *temp_v1_4;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2C5);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 0x2C5) = 1U;
        M2C_FIELD(arg0, u16 *, 0x2C6) = 0U;
        temp_s0 = func_80033634_ovl_01();
        temp_s0_2 = (((s32) (temp_s0 & 0xFF) >> (func_80033634_ovl_01() & 3)) & 1) + 5;
        M2C_FIELD(arg0, u8 *, 0x2D0) = temp_s0_2;
        M2C_FIELD(arg0, u8 *, 0x2D1) = (u8) (0xB - temp_s0_2);
        M2C_FIELD(arg0, s16 *, 0x2C8) = (s16) (*(((func_80033634_ovl_01() & 0x1F) * 2) + &D_8016C4BC_ovl_31) + 0x800);
        /* fallthrough */
    case 1:
        temp_v1_2 = (M2C_FIELD(arg0, u8 *, 0x2D0) * 4) + M2C_FIELD(arg1, void **, 0x120);
        *temp_v1_2 += M2C_FIELD(arg0, u16 *, 0x2C6);
        temp_v1_3 = M2C_FIELD(arg0, u16 *, 0x2C6);
        M2C_FIELD(arg0, u16 *, 0x2C6) = (u16) (temp_v1_3 + 8);
        temp_a0 = (M2C_FIELD(arg0, u8 *, 0x2D1) * 4) + M2C_FIELD(arg1, void **, 0x120);
        *temp_a0 += (temp_v1_3 + 8) / 3;
        temp_a0_2 = (M2C_FIELD(arg0, u8 *, 0x2D1) * 4) + M2C_FIELD(arg1, void **, 0x120);
        if ((0x1000 - M2C_FIELD(arg0, s16 *, 0x2C8)) < *temp_a0_2) {
            *temp_a0_2 = 0x1000 - (u16) M2C_FIELD(arg0, s16 *, 0x2C8);
        }
        temp_v1_4 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_v1_4, u16 *, 0x10) = (u16) ((s32) (M2C_FIELD(temp_v1_4, u16 *, 0x10) << 0x10) >> 0x11);
        temp_a0_3 = (M2C_FIELD(arg0, u8 *, 0x2D0) * 4) + M2C_FIELD(arg1, void **, 0x120);
        if (M2C_FIELD(arg0, s16 *, 0x2C8) < *temp_a0_3) {
            *temp_a0_3 = (s16) (u16) M2C_FIELD(arg0, s16 *, 0x2C8);
            M2C_FIELD(arg0, s8 *, 0x2C4) = 6;
            M2C_FIELD(arg0, u8 *, 0x2C5) = 0U;
        }
        return;
    }
}
