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

M2C_UNK func_80040D5C_ovl_01(void *, s32 *);        /* extern */
M2C_UNK func_80040E88_ovl_01(void *, M2C_UNK *);    /* extern */
M2C_UNK func_8004229C_ovl_01(s32, M2C_UNK *, void *); /* extern */
M2C_UNK func_8004251C_ovl_01(s32, M2C_UNK *, void *); /* extern */
M2C_UNK func_80083230_ovl_01(void *, s32);          /* extern */
s32 func_80083D5C_ovl_01(M2C_UNK, s32);             /* extern */
M2C_UNK func_80088B3C_ovl_01(void *, s32 *, s32, s32 *); /* extern */
M2C_UNK func_80088E14_ovl_01(void *, s32 *, s32, s32 *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80088970_ovl_01(void *arg0, s32 *arg1, s32 arg2, M2C_UNK arg3) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    M2C_UNK sp20;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 *var_s0;
    s32 *var_s1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_v0_3;
    s32 var_v0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 var_s3;

    var_s1 = arg1;
    if (arg2 & 0x02000000) {
        func_80040E88_ovl_01(arg0 + 0x64, &sp20);
        if (arg2 & 0x01000000) {
            sp34 = M2C_FIELD(arg0, s32 *, 0x28);
            sp38 = M2C_FIELD(arg0, s32 *, 0x2C);
            sp3C = M2C_FIELD(arg0, s32 *, 0x30);
            func_8004251C_ovl_01(M2C_FIELD(arg0, s32 *, 0x70), &sp20, arg0 + 0x14);
            var_v0 = arg2 & 0x800;
        } else {
            func_8004229C_ovl_01(M2C_FIELD(arg0, s32 *, 0x70), &sp20, arg0 + 0x14);
            var_v0 = arg2 & 0x800;
        }
    } else {
        func_80040E88_ovl_01(arg0 + 0x64, arg0 + 0x14);
        var_v0 = arg2 & 0x800;
    }
    if (var_v0 != 0) {
        sp10 = (s32) M2C_FIELD(arg0, s16 *, 0x212);
        sp14 = (s32) M2C_FIELD(arg0, s16 *, 0x212);
        sp18 = (s32) M2C_FIELD(arg0, s16 *, 0x212);
        func_80040D5C_ovl_01(arg0 + 0x14, &sp10);
    }
    func_80083230_ovl_01(arg0 + 0x78, var_s1 + 0x4C);
    var_s3 = M2C_FIELD(arg0, u8 *, 0x1A3);
    if (func_80083D5C_ovl_01(arg3, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18290)) != 0) {
        var_s0 = var_s1 + 0x38;
        if (!(arg2 & 0x80000)) {
            do {
                temp_a2 = *var_s1;
                if (temp_a2 & 1) {
                    func_80088B3C_ovl_01(arg0, var_s1, temp_a2, var_s1 + 0x38);
                }
                temp_v0 = var_s3 - 1;
                var_s3 = temp_v0;
                var_s1 += 0x178;
            } while (temp_v0 & 0xFF);
            return;
        }
        goto loop_14;
    }
    var_s0 = var_s1 + 0x38;
    do {
loop_14:
        temp_a2_2 = *var_s1;
        temp_v0_3 = temp_a2_2 & 1;
        if (temp_a2_2 & 0x9000) {
            if (temp_v0_3 != 0) {
                func_80088B3C_ovl_01(arg0, var_s1, temp_a2_2, var_s0);
                var_s0 += 0x178;
            } else {
                goto block_19;
            }
        } else {
            if (temp_v0_3 != 0) {
                func_80088E14_ovl_01(arg0, var_s1, temp_a2_2, var_s0);
            }
block_19:
            var_s0 += 0x178;
        }
        temp_v0_2 = var_s3 - 1;
        var_s3 = temp_v0_2;
        var_s1 += 0x178;
    } while (temp_v0_2 & 0xFF);
}
