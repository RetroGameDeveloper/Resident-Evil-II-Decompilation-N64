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
s32 func_8006AB70_ovl_01(s32, s32 *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern void *D_800E1390_ovl_01;

s32 func_8005BC34_ovl_01(void *arg0, u32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 temp_v0;
    s32 temp_v0_2;
    u32 temp_v0_3;
    u32 var_s4;
    u32 var_s6;
    void **var_s2;
    void *temp_s0;
    void *var_s5;
    void *var_s7;

    var_s4 = 0x7FFFFFFF;
    var_s7 = NULL;
    var_s6 = 0x7FFFFFFF;
    var_s5 = NULL;
    if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76) != 0) {
        if (arg1 != 0) {
            var_s4 = arg1;
        }
        var_s2 = &D_800E1390_ovl_01;
        do {
            temp_s0 = *var_s2;
            if ((M2C_FIELD(temp_s0, s32 *, 0) & 1) && !(M2C_FIELD(temp_s0, u16 *, 0x1AA) & 0xC000)) {
                temp_v0 = M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(temp_s0, s32 *, 0x28);
                temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x30) - M2C_FIELD(temp_s0, s32 *, 0x30);
                temp_v0_3 = func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2));
                sp10 = M2C_FIELD(temp_s0, s32 *, 0x120);
                sp14 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x25D) * 0x178) + M2C_FIELD(temp_s0, s32 *, 0x234)), s32 *, 0x50);
                sp18 = M2C_FIELD(temp_s0, s32 *, 0x128);
                if ((M2C_FIELD(temp_s0, s16 *, 0x1F2) >= 0) && (func_8006AB70_ovl_01(M2C_FIELD(arg0, s32 *, 0x234) + (M2C_FIELD(arg0, u8 *, 0x25D) * 0x178) + 0x4C, &sp10, 0x80, 1) == 0)) {
                    if (!(M2C_FIELD(temp_s0, u16 *, 0x1AA) & 0x2000)) {
                        if (temp_v0_3 < var_s4) {
                            var_s4 = temp_v0_3;
                            var_s7 = temp_s0;
                        }
                    } else if (temp_v0_3 < var_s6) {
                        var_s6 = temp_v0_3;
                        var_s5 = temp_s0;
                    }
                }
            }
            var_s2 += 4;
        } while (var_s2 != M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1828C));
        if (var_s7 != NULL) {
            M2C_FIELD(arg0, void **, 0x250) = var_s7;
            goto block_20;
        }
        if (var_s5 != NULL) {
            M2C_FIELD(arg0, void **, 0x250) = var_s5;
block_20:
            return 1;
        }
        goto block_19;
    }
block_19:
    M2C_FIELD(arg0, void **, 0x250) = arg0;
    return 0;
}
