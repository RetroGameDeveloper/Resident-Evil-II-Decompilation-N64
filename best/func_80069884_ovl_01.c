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

s32 func_8006B250_ovl_01(void *);                   /* extern */
s32 func_8006B294_ovl_01(void *);                   /* extern */
extern M2C_UNK D_800C7650_ovl_01;

s32 func_80069884_ovl_01(void *arg0, s32 arg1, void *arg2) {
    s16 var_v0_3;
    s32 temp_hi;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    u16 var_v1;
    u32 temp_s3;

    temp_s3 = (u16) M2C_FIELD(arg2, u16 *, 0xA) >> 4;
    if (temp_s3 & 2) {
        var_v0 = 0;
        if ((u32) (M2C_FIELD(arg2, u16 *, 4) - 0x1F4) >= (u32) (M2C_FIELD(arg0, s32 *, 0x120) - (M2C_FIELD(arg2, s16 *, 0) + 0xFA))) {
            var_a0 = M2C_FIELD(arg0, s32 *, 0x128);
            var_v1 = M2C_FIELD(arg2, u16 *, 6);
            var_v0_2 = M2C_FIELD(arg2, s16 *, 2) - 0x28A;
            goto block_5;
        }
    } else {
        var_v0 = 0;
        if ((u32) (M2C_FIELD(arg2, u16 *, 6) - 0x1F4) >= (u32) (M2C_FIELD(arg0, s32 *, 0x128) - (M2C_FIELD(arg2, s16 *, 2) + 0xFA))) {
            var_a0 = M2C_FIELD(arg0, s32 *, 0x120);
            var_v1 = M2C_FIELD(arg2, u16 *, 4);
            var_v0_2 = M2C_FIELD(arg2, s16 *, 0) - 0x28A;
block_5:
            var_v0 = 0;
            if ((u32) (var_v1 + 0x514) >= (u32) (var_a0 - var_v0_2)) {
                temp_s0 = func_8006B250_ovl_01(arg2);
                temp_s0_2 = temp_s0 - func_8006B294_ovl_01(arg2);
                temp_hi = MULT_HI(temp_s0_2, 0x91A2B3C5);
                M2C_FIELD(arg0, s8 *, 5) = 7;
                temp_s0_3 = (temp_s0_2 >> 0x1F) - ((s32) (temp_hi + temp_s0_2) >> 0xA);
                var_v0_3 = temp_s0_3 - 1;
                if (M2C_FIELD(arg0, u8 *, 4) == 4) {
                    M2C_FIELD(arg0, s8 *, 5) = 0x1A;
                    var_v0_3 = temp_s0_3 - 1;
                }
                M2C_FIELD(arg0, s16 *, 0x1F6) = var_v0_3;
                M2C_FIELD(arg0, s8 *, 6) = 0;
                M2C_FIELD(arg0, s8 *, 0x206) = 0;
                if (temp_s3 & 2) {
                    if ((M2C_FIELD(arg0, s32 *, 0x128) - M2C_FIELD(arg2, s16 *, 2)) < (s32) ((u16) M2C_FIELD(arg2, u16 *, 6) >> 1)) {
                        M2C_FIELD(arg0, s16 *, 0x1F4) = 0xC00;
                        if (temp_s3 & 1) {
                            M2C_FIELD(arg0, s8 *, 0x206) = 1;
                        }
                        M2C_FIELD(arg0, s32 *, 0x128) = (s32) (M2C_FIELD(arg2, s16 *, 2) - arg1);
                    } else {
                        M2C_FIELD(arg0, s16 *, 0x1F4) = 0x400;
                        if (!(temp_s3 & 1)) {
                            M2C_FIELD(arg0, s8 *, 0x206) = 1;
                        }
                        M2C_FIELD(arg0, s32 *, 0x128) = (s32) (M2C_FIELD(arg2, s16 *, 2) + M2C_FIELD(arg2, u16 *, 6) + arg1);
                    }
                } else {
                    if ((M2C_FIELD(arg0, s32 *, 0x120) - M2C_FIELD(arg2, s16 *, 0)) < (s32) ((u16) M2C_FIELD(arg2, u16 *, 4) >> 1)) {
                        M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
                        if (temp_s3 & 1) {
                            M2C_FIELD(arg0, s8 *, 0x206) = 1;
                        }
                        var_v0_4 = M2C_FIELD(arg2, s16 *, 0) - arg1;
                    } else {
                        M2C_FIELD(arg0, s16 *, 0x1F4) = 0x800;
                        if (!(temp_s3 & 1)) {
                            M2C_FIELD(arg0, s8 *, 0x206) = 1;
                        }
                        var_v0_4 = M2C_FIELD(arg2, s16 *, 0) + M2C_FIELD(arg2, u16 *, 4) + arg1;
                    }
                    M2C_FIELD(arg0, s32 *, 0x120) = var_v0_4;
                }
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 8);
                var_v0 = 1;
                M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) | 0x40);
            }
        }
    }
    return var_v0;
}
