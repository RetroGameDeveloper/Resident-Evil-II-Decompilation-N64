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

M2C_UNK func_8016559C_ovl_26();                     /* extern */
M2C_UNK func_80165640_ovl_26(void *);               /* extern */
M2C_UNK func_801656F0_ovl_26(void *, s32, M2C_UNK); /* extern */
M2C_UNK func_80166B18_ovl_26(void *, s32, M2C_UNK, u32); /* extern */

void func_80165790_ovl_26(void *arg0) {
    M2C_UNK var_s2;
    s32 var_s1;
    u8 temp_s3;

    temp_s3 = M2C_FIELD(arg0, u8 *, 5);
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_8016559C_ovl_26();
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 1);
        var_s1 = 0xC;
        if (!((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF)) {
            if (M2C_FIELD(arg0, u8 *, 0x2D9) == 0) {
                var_s1 = 6;
                var_s2 = 9;
            } else {
                goto block_5;
            }
        } else {
block_5:
            var_s2 = 0xE;
        }
        func_80166B18_ovl_26(arg0, (var_s1 - 1) & 0xFF, 0, MULTU_HI(M2C_FIELD(arg0, u8 *, 0x26E), 0xAAAAAAAB));
        if (((u8) M2C_FIELD(arg0, u8 *, 0x26E) < 3U) || (temp_s3 == 6) || (temp_s3 == 8)) {
            func_801656F0_ovl_26(arg0, var_s1, var_s2);
        }
    } else {
        func_80165640_ovl_26(arg0);
    }
}
