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

u32 D_80036ED0(s32, M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

M2C_UNK *func_80162820_ovl_14(void *arg0) {
    s8 var_v0;
    u32 temp_v0;
    u8 var_v0_2;

    if (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) >= 0) {
        if (M2C_FIELD(arg0, u8 *, 4) == 7) {
            M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
            goto block_15;
        }
        var_v0 = 1;
        if (!(M2C_FIELD(arg0, u16 *, 0x2C8) & 1)) {
            if ((u8) M2C_FIELD(arg0, u8 *, 0xD) < 2U) {
                M2C_FIELD(arg0, s8 *, 0x2B5) = 2;
                return M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0xD) * 4) + &D_800C7650_ovl_01), M2C_UNK **, 0x19D38);
            }
            temp_v0 = D_80036ED0(M2C_FIELD(arg0, s32 *, 0x28C), 0xBB8, 0x1388, 0x1B58);
            switch (temp_v0) {                      /* irregular */
            case 0:
                var_v0_2 = M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A85);
block_13:
                var_v0 = 2;
                if (var_v0_2 != 0) {
                    goto block_14;
                }
                goto block_15;
            case 1:
                var_v0_2 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A78) & 0x17;
                goto block_13;
            default:
                var_v0_2 = M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A7A) & 5;
                goto block_13;
            }
        } else {
block_14:
            M2C_FIELD(arg0, s8 *, 0x2B5) = var_v0;
            return &D_800E10D0_ovl_01;
        }
    } else {
block_15:
        return NULL;
    }
}
