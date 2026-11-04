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

s32 func_800439B8_ovl_01(s32, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478DC_ovl_01(void *, s32, M2C_UNK); /* extern */
M2C_UNK func_800478E8_ovl_01(void *, s32, s32);     /* extern */
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_8013A380;

void *func_80095F90_ovl_01(void *arg0, s32 arg1, u32 arg2, u32 arg3) {
    s32 temp_v0;
s32 __repair_phase_temp_v0;
    
    
    s32 var_s2;
    s32 var_s3;
    void *var_s1;

    var_s1 = arg0;
    var_s3 = 0;
    if ((arg3 & 0x7F) == 4) {
        return var_s1 + 0x50;
    }
    if ((arg1 == 0xFF) || (M2C_FIELD(&D_8013A380, u8 *, 0) = (u8) (arg3 >> 0x10), M2C_FIELD(&D_8013A380, u8 *, 3) = (u8) (arg1 / 100), M2C_FIELD(&D_8013A380, u8 *, 2) = (u8) ((arg1 % 100) / 10), M2C_FIELD(&D_8013A380, s8 *, 1) = (s8) ((arg1 % 100) % 10), ((arg3 & 0x10) != 0))) {
        var_s2 = 0x50;
        __repair_phase_temp_v0 = 2;
        do {
            var_s2 += 8;
            __repair_phase_temp_v0 -= 1;
            func_800478E8_ovl_01(var_s1, ((arg2 >> 0x10) + var_s3) & 0xFFFF, arg2 & 0xFFFF);
            func_800478DC_ovl_01(var_s1, var_s2 & 0xFFFF, 0x1A);
            M2C_FIELD(var_s1, s16 *, 0xA) = (s16) (((arg3 & 0xF) + 2) << 5);
            var_s3 += 7;
            temp_v0 = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), var_s1, 0, 0);
            var_s1 += 0x14;
            M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = temp_v0;
        } while (__repair_phase_temp_v0 != 0);
        var_s1 += 0x28;
    } else {
        __repair_phase_temp_v0 = 4;
        do {
            __repair_phase_temp_v0 -= 1;
            if (((M2C_FIELD(&D_8013A380, u8 *, 3) != 0) || ((__repair_phase_temp_v0 != 3) && ((M2C_FIELD(&D_8013A380, u8 *, 2) != 0) || (__repair_phase_temp_v0 != 2)))) && ((M2C_FIELD(&D_8013A380, u8 *, 0) != 0) || (__repair_phase_temp_v0 != 0))) {
                func_800478E8_ovl_01(var_s1, ((arg2 >> 0x10) + var_s3) & 0xFFFF, arg2 & 0xFFFF);
                var_s3 += 7;
                func_800478DC_ovl_01(var_s1, *(__repair_phase_temp_v0 + &D_8013A380) * 8, 0x1A);
                M2C_FIELD(var_s1, s16 *, 0xA) = (s16) (((arg3 & 0xF) + 2) << 5);
                M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), var_s1, 0, 0);
            }
            var_s1 += 0x14;
        } while (__repair_phase_temp_v0 != 0);
    }
    return var_s1;
}
