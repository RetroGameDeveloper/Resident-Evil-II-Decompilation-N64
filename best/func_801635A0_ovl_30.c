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

M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_801672F4_ovl_30(void *, s32, M2C_UNK); /* extern */
s32 func_80167814_ovl_30(s32, M2C_UNK);             /* extern */

s32 func_801635A0_ovl_30(void *arg0, s32 arg1) {
    s32 temp_s0;
    u16 temp_v1_2;
    void *temp_v1;

    if (*M2C_FIELD(arg0, s32 **, 0x214) & 0x01000000) {
        temp_s0 = arg1 & 0xFF;
        if (func_80167814_ovl_30(temp_s0, 0x64) != 0) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x234) + (temp_s0 * 0x178);
            temp_v1_2 = M2C_FIELD(temp_v1, u16 *, 0x56);
            if ((u32) ((M2C_FIELD(temp_v1, u16 *, 0x4E) + 0xE73) & 0xFFFF) < 0x4A9BU) {
                if ((s16) temp_v1_2 >= -0x55EF) {
                    if ((s16) temp_v1_2 < -0x2AF8) {
                        func_80077D48_ovl_01(5, arg0);
                        func_801672F4_ovl_30(arg0, (arg1 - 1) & 0xFF, 6);
                        func_801672F4_ovl_30(arg0, temp_s0, 6);
                        func_801672F4_ovl_30(arg0, (arg1 + 1) & 0xFF, 6);
                        return 1;
                    }
                    goto block_6;
                }
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return 0;
            }
        }
    }
block_6:
    return 0;
}
