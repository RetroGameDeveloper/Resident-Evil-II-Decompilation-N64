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

M2C_UNK func_800A548C_ovl_01(u8, M2C_UNK *, M2C_UNK); /* extern */
s32 func_800AB36C_ovl_01(s32);                      /* extern */
s32 func_800AD9D4_ovl_01(s32, M2C_UNK *);           /* extern */
extern u8 D_801362B1_ovl_01;
extern M2C_UNK D_801589F0;
extern s32 D_801589F8;

s32 func_800AF6A0_ovl_01(void *arg0, void *arg1) {
    M2C_UNK var_a2;
    s32 temp_hi;
    s32 var_a0;
    s32 var_lo;
    u32 var_s0;
    u8 temp_v1;

    var_s0 = (u32) M2C_FIELD(arg1, u32 *, 0) >> 8;
    if (D_801362B1_ovl_01 != 0) {
        var_a0 = var_s0 & 0xFFFF;
        if (D_801362B1_ovl_01 != 0x2A) {
            var_a0 = var_s0 & 0xFFFF;
            if (!(func_800AB36C_ovl_01(var_a0) & 0x1F)) {
                var_s0 = func_800AB36C_ovl_01(var_a0) & 0xFF;
                goto block_4;
            }
        }
    } else {
block_4:
        var_a0 = var_s0 & 0xFFFF;
    }
    if (func_800AD9D4_ovl_01(var_a0, &D_801589F0) == 0) {
        temp_v1 = (u8) M2C_FIELD(arg1, u32 *, 0);
        if (temp_v1 != 1) {
            if ((s32) temp_v1 < 2) {
                if (temp_v1 != 0) {
                    D_801589F8 = 0;
                } else {
                    M2C_FIELD(&D_801589F0, u32 *, 8) = (u32) M2C_FIELD(arg1, u32 *, 4);
                }
            } else if (temp_v1 != 2) {
                D_801589F8 = 0;
            } else {
                var_lo = M2C_FIELD(arg0, u16 *, 0x30) * M2C_FIELD(arg1, u32 *, 4);
                goto block_15;
            }
        } else {
            var_lo = (0x7F - M2C_FIELD(arg0, u16 *, 0x30)) * M2C_FIELD(arg1, u32 *, 4);
block_15:
            temp_hi = var_lo / 127;
            M2C_FIELD(&D_801589F0, u32 *, 8) = (u32) ((u32) (temp_hi + ((u32) (var_lo - temp_hi) >> 1)) >> 6);
        }
        if ((u32) M2C_FIELD(&D_801589F0, u32 *, 8) >= (u32) M2C_FIELD(&D_801589F0, u32 *, 0xC)) {
            M2C_FIELD(&D_801589F0, u32 *, 8) = (u32) (M2C_FIELD(&D_801589F0, u32 *, 0xC) - 1);
        }
        var_a2 = 0;
        if (!(M2C_FIELD(arg0, s32 *, 0x24) & 0x200)) {
            var_a2 = 1;
        }
        func_800A548C_ovl_01(M2C_FIELD(arg0, u8 *, 0x63), &D_801589F0, var_a2);
        M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(&D_801589F0, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) | 0x20);
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) M2C_FIELD(&D_801589F0, s32 *, 4);
    }
    return 0;
}
