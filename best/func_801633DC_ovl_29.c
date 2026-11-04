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

s32 func_80032EA4_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_80033174_ovl_01(void *, M2C_UNK *);        /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_801633DC_ovl_29(void *arg0) {
    s32 temp_s3;
    s32 temp_v1;
    s32 var_v0;
    u32 temp_s2;

    if ((M2C_FIELD(arg0, u16 *, 0x2C0) == 0) || (M2C_FIELD(arg0, s16 *, 0x1F2) < 0x64)) {
        M2C_FIELD(arg0, s16 *, 0x1AA) = 1;
        M2C_FIELD(arg0, s32 *, 4) = 0x01060000;
        return;
    }
    temp_s2 = M2C_FIELD(arg0, u32 *, 0x28C);
    temp_v1 = func_80032EA4_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x400);
    temp_s3 = temp_v1;
    if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) == 0) {
        var_v0 = temp_s3 << 0x10;
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) >= 0xBU) {
            if ((temp_v1 << 0x10) == 0) {
                var_v0 = temp_s3 << 0x10;
                if (temp_s2 < 0x5DCU) {
                    if (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C60) > 0) {
                        if (!(func_80033174_ovl_01(arg0, &D_800E10D0_ovl_01) & 0xFF)) {
                            M2C_FIELD(arg0, s32 *, 4) = 0x01040000;
                            M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
                        }
                    }
                    var_v0 = temp_s3 << 0x10;
                    if (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C60) < 0) {
                        if (func_80033174_ovl_01(arg0, &D_800E10D0_ovl_01) & 0xFF) {
                            M2C_FIELD(arg0, s32 *, 4) = 0x01040000;
                            M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
                        }
                        goto block_14;
                    }
                }
                goto block_15;
            }
            goto block_17;
        }
        goto block_15;
    }
block_14:
    var_v0 = temp_s3 << 0x10;
block_15:
    if ((var_v0 != 0) || (temp_s2 >= 0x1389U)) {
block_17:
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) >= 0x1AU) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            M2C_FIELD(arg0, s8 *, 0x2B6) = 0xA;
        }
    }
}
