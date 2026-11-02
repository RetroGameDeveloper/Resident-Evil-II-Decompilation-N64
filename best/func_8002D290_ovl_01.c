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

s32 func_8002D290_ovl_01(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_v1;
    void *temp_v1_2;

    if ((M2C_FIELD(arg0, s32 *, 0x58) != 0) || (M2C_FIELD(arg0, s32 *, 0x100) != 0)) {
        /* Duplicate return node #2. Try simplifying control flow for better match */
        return 0;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_v1 == 3) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_a1 == temp_v1) {
            temp_a2 = M2C_FIELD(arg0, s32 *, 0x28);
            if ((temp_a2 == 2) && (M2C_FIELD(arg0, s32 *, 0x64) == temp_a1)) {
                temp_v1_2 = M2C_FIELD(arg0, void **, 0xB0);
                if (M2C_FIELD(temp_v1_2, s32 *, 8) == temp_a2) {
                    temp_a1_2 = M2C_FIELD(temp_v1_2, s32 *, 0x58);
                    if (temp_a1_2 == 1) {
                        temp_a2_2 = M2C_FIELD(temp_v1_2, s32 *, 0xA8);
                        if ((temp_a2_2 == temp_a1_2) && (M2C_FIELD(temp_v1_2, s32 *, 0xC) < 3)) {
                            temp_a1_3 = M2C_FIELD(temp_v1_2, s32 *, 0x5C);
                            if ((temp_a1_3 == temp_a2_2) && (M2C_FIELD(temp_v1_2, s32 *, 0xAC) == temp_a1_3)) {
                                temp_a1_4 = M2C_FIELD(temp_v1_2, s32 *, 0x24);
                                if (temp_a1_4 == M2C_FIELD(arg0, s32 *, 0x10C)) {
                                    temp_a0 = M2C_FIELD(temp_v1_2, s32 *, 0x74);
                                    if ((temp_a0 == temp_a1_4) && (M2C_FIELD(temp_v1_2, s32 *, 0xC4) == temp_a0)) {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
