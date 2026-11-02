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

void func_80182C80_ovl_02(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 var_t4;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t0_3;
    u8 temp_t0_4;
    u8 temp_t0_5;
    u8 temp_t0_6;
    u8 temp_t0_7;
    u8 temp_t0_8;
    u8 temp_t1;
    u8 temp_t1_2;
    u8 temp_t1_3;
    u8 temp_t1_4;
    u8 temp_t1_5;
    u8 temp_t1_6;
    u8 temp_t1_7;
    u8 temp_t1_8;
    u8 temp_v1;
    void *var_t2;
    void *var_t3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_t4 = 0;
    if (arg3 > 0) {
        var_t2 = var_a1 + 0xF;
        var_t3 = var_a0 + 0x10;
        do {
            temp_t0 = *var_a0;
            var_a0 += arg2;
            var_t4 += 1;
            temp_t1 = M2C_FIELD(var_t3, u8 *, -0xF);
            *var_a1 = (u8) ((u32) (*var_a1 + ((u32) (temp_t0 + temp_t1 + 1) >> 1) + 1) >> 1);
            var_a1 += arg2;
            temp_t0_2 = M2C_FIELD(var_t3, u8 *, -0xE);
            M2C_FIELD(var_t2, u8 *, -0xE) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -0xE) + ((u32) (temp_t1 + temp_t0_2 + 1) >> 1) + 1) >> 1);
            temp_t1_2 = M2C_FIELD(var_t3, u8 *, -0xD);
            M2C_FIELD(var_t2, u8 *, -0xD) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -0xD) + ((u32) (temp_t0_2 + temp_t1_2 + 1) >> 1) + 1) >> 1);
            temp_t0_3 = M2C_FIELD(var_t3, u8 *, -0xC);
            M2C_FIELD(var_t2, u8 *, -0xC) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -0xC) + ((u32) (temp_t1_2 + temp_t0_3 + 1) >> 1) + 1) >> 1);
            temp_t1_3 = M2C_FIELD(var_t3, u8 *, -0xB);
            M2C_FIELD(var_t2, u8 *, -0xB) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -0xB) + ((u32) (temp_t0_3 + temp_t1_3 + 1) >> 1) + 1) >> 1);
            temp_t0_4 = M2C_FIELD(var_t3, u8 *, -0xA);
            M2C_FIELD(var_t2, u8 *, -0xA) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -0xA) + ((u32) (temp_t1_3 + temp_t0_4 + 1) >> 1) + 1) >> 1);
            temp_t1_4 = M2C_FIELD(var_t3, u8 *, -9);
            M2C_FIELD(var_t2, u8 *, -9) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -9) + ((u32) (temp_t0_4 + temp_t1_4 + 1) >> 1) + 1) >> 1);
            temp_t0_5 = M2C_FIELD(var_t3, u8 *, -8);
            M2C_FIELD(var_t2, u8 *, -8) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -8) + ((u32) (temp_t1_4 + temp_t0_5 + 1) >> 1) + 1) >> 1);
            temp_t1_5 = M2C_FIELD(var_t3, u8 *, -7);
            M2C_FIELD(var_t2, u8 *, -7) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -7) + ((u32) (temp_t0_5 + temp_t1_5 + 1) >> 1) + 1) >> 1);
            temp_t0_6 = M2C_FIELD(var_t3, u8 *, -6);
            M2C_FIELD(var_t2, u8 *, -6) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -6) + ((u32) (temp_t1_5 + temp_t0_6 + 1) >> 1) + 1) >> 1);
            temp_t1_6 = M2C_FIELD(var_t3, u8 *, -5);
            M2C_FIELD(var_t2, u8 *, -5) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -5) + ((u32) (temp_t0_6 + temp_t1_6 + 1) >> 1) + 1) >> 1);
            temp_t0_7 = M2C_FIELD(var_t3, u8 *, -4);
            M2C_FIELD(var_t2, u8 *, -4) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -4) + ((u32) (temp_t1_6 + temp_t0_7 + 1) >> 1) + 1) >> 1);
            temp_t1_7 = M2C_FIELD(var_t3, u8 *, -3);
            M2C_FIELD(var_t2, u8 *, -3) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -3) + ((u32) (temp_t0_7 + temp_t1_7 + 1) >> 1) + 1) >> 1);
            temp_t0_8 = M2C_FIELD(var_t3, u8 *, -2);
            M2C_FIELD(var_t2, u8 *, -2) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -2) + ((u32) (temp_t1_7 + temp_t0_8 + 1) >> 1) + 1) >> 1);
            temp_t1_8 = M2C_FIELD(var_t3, u8 *, -1);
            M2C_FIELD(var_t2, u8 *, -1) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, -1) + ((u32) (temp_t0_8 + temp_t1_8 + 1) >> 1) + 1) >> 1);
            temp_v1 = M2C_FIELD(var_t3, u8 *, 0);
            var_t3 += arg2;
            M2C_FIELD(var_t2, u8 *, 0) = (u8) ((u32) (M2C_FIELD(var_t2, u8 *, 0) + ((u32) (temp_t1_8 + temp_v1 + 1) >> 1) + 1) >> 1);
            var_t2 += arg2;
        } while (var_t4 < arg3);
    }
}
