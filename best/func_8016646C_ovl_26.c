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

M2C_UNK func_8003420C_ovl_01(void *, M2C_UNK);      /* extern */

void func_8016646C_ovl_26(void *arg0) {
    u8 temp_v0;
    u8 temp_v1;
    void *temp_s0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2CF);
    temp_s0 = M2C_FIELD(arg0, void **, 0x208);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 0x2CF) = 1U;
        func_8003420C_ovl_01(temp_s0, 0x6F3F3F00);
        M2C_FIELD(arg0, u8 *, 0x207) = 0x5AU;
        /* fallthrough */
    case 1:
        M2C_FIELD(temp_s0, u16 *, 4) = (u16) (M2C_FIELD(temp_s0, u16 *, 4) + 8);
        M2C_FIELD(temp_s0, u16 *, 6) = (u16) (M2C_FIELD(temp_s0, u16 *, 6) + 8);
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x207) - 1;
        M2C_FIELD(arg0, u8 *, 0x207) = temp_v0;
        if ((temp_v0 << 0x18) == 0) {
            M2C_FIELD(arg0, u8 *, 0x2CF) = 2U;
        }
        break;
    }
}
