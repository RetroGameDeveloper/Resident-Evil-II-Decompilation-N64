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

f32 func_80006BE0(M2C_UNK);                         /* extern */
f32 func_8000D050(M2C_UNK);                         /* extern */
M2C_UNK func_80082230_ovl_01(f32 *, M2C_UNK, M2C_UNK); /* extern */
extern f32 D_800B6A48_ovl_01;

void func_80027968_ovl_01(s32 arg0, void *arg1, M2C_UNK arg2) {
    f32 sp10;
    f32 sp14;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs3;
    f32 var_fs0;
    f32 var_fs1;
    s32 var_s2;
    void *var_s0;
    void *var_s1;

    var_s1 = arg1;
    func_80082230_ovl_01(&sp10, 0, 8);
    var_s0 = arg0 + 4;
    var_s2 = 0;
    temp_fs3 = D_800B6A48_ovl_01;
loop_1:
    if (var_s2 < 4) {
        sp10 = (f32) (M2C_FIELD(var_s1, u16 *, 0) - 0xA0);
        sp14 = (f32) ((M2C_FIELD(var_s1, u16 *, 2) & 0xFFFF) - 0x78);
        temp_fs0 = sp10 * func_80006BE0(arg2);
        var_fs1 = temp_fs0 - (sp14 * func_8000D050(arg2));
        temp_fs0_2 = sp10 * func_8000D050(arg2);
        var_fs0 = temp_fs0_2 + (sp14 * func_80006BE0(arg2));
        if (var_fs1 > 0.0f) {
            var_fs1 += temp_fs3;
        }
        if (var_fs0 > 0.0f) {
            var_fs0 += temp_fs3;
        }
        M2C_FIELD(var_s0, s16 *, 0) = (s16) ((s32) var_fs1 + 0xA0);
        M2C_FIELD(var_s0, s16 *, 2) = (s16) ((s32) var_fs0 + 0x78);
        var_s0 += 8;
        var_s1 += 4;
        var_s2 += 1;
        goto loop_1;
    }
}
