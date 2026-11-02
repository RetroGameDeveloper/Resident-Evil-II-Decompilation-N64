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

extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;

void func_8008D140_ovl_01(s32 arg0) {
    u8 temp_v1;
    u8 temp_v1_2;

    if (arg0 != 0) {
        temp_v1 = M2C_FIELD(((M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) * 4) + &D_800C7650_ovl_01), u8 *, 0x2181A);
        if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xC) & 1) {
            if (temp_v1 != 0) {
                M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x1C) = -2;
            } else if (!(M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) & 1)) {
                M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x1C) = -4;
            } else {
                goto block_10;
            }
        } else if (temp_v1 != 0) {
            M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x1C) = 2;
        } else if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) & 1) {
            M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x1C) = 4;
        } else {
block_10:
            M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x1C) = 0;
        }
        M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x1D) = (s8) ((((u8) M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) >> 1) - ((u8) M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xC) >> 1)) * 3);
        return;
    }
    temp_v1_2 = M2C_FIELD(((M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xC) * 4) + &D_800C7650_ovl_01), u8 *, 0x2181A);
    if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xC) & 1) {
        if (temp_v1_2 != 0) {
            if (!(M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) & 1)) {
                goto block_22;
            }
            goto block_20;
        }
        if (!(M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) & 1)) {
            M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x20) = 4;
        } else {
            goto block_25;
        }
    } else if (temp_v1_2 != 0) {
        if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) & 1) {
block_20:
            M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x20) = -2;
        } else {
block_22:
            M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x20) = 2;
        }
    } else if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) & 1) {
        M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x20) = -4;
    } else {
block_25:
        M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x20) = 0;
    }
    M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x21) = (s8) ((((u8) M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xC) >> 1) - ((u8) M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) >> 1)) * 3);
}
