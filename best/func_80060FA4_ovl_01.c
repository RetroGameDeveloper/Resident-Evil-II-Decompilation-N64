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

u32 func_80040BE4_ovl_01(s32);                      /* extern */
s32 func_80059E30_ovl_01(s32, M2C_UNK);             /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern void *D_800E1388_ovl_01;

void *func_80060FA4_ovl_01(void *arg0, u32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_s4;
    u16 temp_v1;
    void **temp_fp;
    void **var_s1;
    void *temp_s0;
    void *var_s3;

    var_s3 = NULL;
    var_s2 = 0;
    var_s4 = 1;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x10000000) {
        var_s4 = 2;
    }
    var_s1 = &D_800E1388_ovl_01;
    temp_fp = &D_800E1388_ovl_01 + 0x62C8;
    do {
        temp_s0 = *var_s1;
        if (!(M2C_FIELD(temp_s0, s32 *, 0) & 1) || (M2C_FIELD(temp_s0, u8 *, 0x26F) != 0) || (M2C_FIELD(temp_s0, s16 *, 0x1F2) < 0) || (M2C_FIELD(temp_s0, u16 *, 0x1AA) & 0xC000)) {
            var_s1 += 4;
            var_s2 += 1;
        } else {
            M2C_FIELD(temp_s0, u16 *, 0x26C) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x26C) & 0xFF00);
            temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x13A);
            if ((u32) ((M2C_FIELD(temp_s0, s32 *, 0x2C) + M2C_FIELD(temp_s0, s16 *, 0x134) + temp_v1) - M2C_FIELD(arg0, s32 *, 4)) < (u32) (temp_v1 * 2)) {
                temp_v0 = M2C_FIELD(arg0, s32 *, 0) - M2C_FIELD(temp_s0, s32 *, 0x28);
                temp_v0_2 = M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(temp_s0, s32 *, 0x30);
                if (func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2)) < arg1) {
                    var_s3 = temp_s0;
                    M2C_FIELD(var_s3, s32 *, 4) = 0x02000000;
                    if (var_s2 != 0) {
                        M2C_FIELD(var_s3, s16 *, 0x1F2) = (s16) ((u16) M2C_FIELD(var_s3, s16 *, 0x1F2) - arg2);
                        M2C_FIELD(temp_fp, u16 *, 0x1960) = (u16) (M2C_FIELD(temp_fp, u16 *, 0x1960) - arg2);
                        if (M2C_FIELD(var_s3, s16 *, 0x1F2) < 0) {
                            M2C_FIELD(var_s3, s32 *, 4) = 0x03000000;
                        }
                    } else if (func_80059E30_ovl_01(arg2, 0) == 2) {
                        M2C_FIELD(var_s3, s32 *, 4) = 0x03000000;
                    }
                }
            }
            var_s2 += 1;
            var_s1 += 4;
        }
        var_s4 -= 1;
    } while (var_s4 != 0);
    return var_s3;
}
