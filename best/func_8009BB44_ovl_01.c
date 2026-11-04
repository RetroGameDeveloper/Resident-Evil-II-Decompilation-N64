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

f32 func_8000DB80(f32, u16 *, s32, s32);            /* extern */
extern f32 D_800BA3E0_ovl_01;
extern f32 D_800BA3E4_ovl_01;
extern M2C_UNK D_800E8FFC_ovl_01;
extern M2C_UNK D_80131F24_ovl_01;
extern void *D_8013A3D0;

void func_8009BB44_ovl_01(void *arg0, s32 arg1) {
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 var_ft1;
    f32 var_fv1;
    s32 var_a1;
    s32 var_a2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u16 *temp_a0;
    void *temp_s4;
    void *temp_v1;
    
    void *temp_v1_3;
    void *var_s0;

    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(D_8013A3D0, s32 *, 0x288);
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) M2C_FIELD(D_8013A3D0, s32 *, 0x28C);
    var_s3 = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) M2C_FIELD(D_8013A3D0, s32 *, 0x290);
    temp_s4 = arg0 + 0x78;
    M2C_FIELD(arg0, void **, 0xC4) = (void *) M2C_FIELD(D_8013A3D0, void **, 0x294);
    var_s0 = temp_s4;
    M2C_FIELD(arg0, u16 *, 0xD4) = (u16) M2C_FIELD(D_8013A3D0, u16 *, 0x2A4);
    M2C_FIELD(arg0, u16 *, 0xD6) = (u16) M2C_FIELD(D_8013A3D0, u16 *, 0x2A6);
    var_s2 = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = (s32) M2C_FIELD(D_8013A3D0, s32 *, 0x2AC);
    var_s1 = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = (s32) M2C_FIELD(D_8013A3D0, s32 *, 0x2A8);
    M2C_FIELD(arg0, s32 *, 0xDC) = -1;
    M2C_FIELD(arg0, s32 *, 0xD8) = (s32) (M2C_FIELD(M2C_FIELD(D_8013A3D0, void **, 0x294), s32 *, 8) + (arg1 * 0x10));
loop_1:
    var_a1 = 0;
    if (var_s3 < 3) {
        var_a2 = var_s1;
        do {
            temp_a0 = var_a2 + &D_80131F24_ovl_01;
            temp_v1 = temp_s4 + (var_a1 + var_s2);
            M2C_FIELD(temp_v1, s8 *, 8) = (s8) ((u16) *temp_a0 >> 4);
            var_a1 += 1;
            M2C_FIELD(temp_v1, s8 *, 0xC) = (s8) ((u16) *temp_a0 >> 4);
            var_a2 += 6;
        } while (var_a1 < 3);
        temp_v1 = var_s1 + &D_800E8FFC_ovl_01;
        temp_fs1 = (f32) M2C_FIELD(temp_v1, s16 *, 0);
        temp_fs0 = (f32) M2C_FIELD(temp_v1, s16 *, 6);
        temp_fs2 = (f32) M2C_FIELD(temp_v1, s16 *, 0xC);
        temp_fa0 = (temp_fs1 * temp_fs1) + (temp_fs0 * temp_fs0) + (temp_fs2 * temp_fs2);
        var_fv1 = sqrtf(temp_fa0);
        if (var_fv1 != var_fv1) {
            var_fv1 = func_8000DB80(temp_fa0, temp_a0, var_a1, var_a2);
        }
        if (D_800BA3E0_ovl_01 < var_fv1) {
            var_ft1 = D_800BA3E4_ovl_01 / var_fv1;
        } else {
            var_ft1 = 0.0f;
        }
        var_s2 += 0x10;
        var_s1 += 2;
        temp_v1_3 = temp_s4 + var_s3;
        var_s3 += 1;
        M2C_FIELD(var_s0, s8 *, 0x10) = (s8) (s32) (var_ft1 * temp_fs1);
        M2C_FIELD(var_s0, s8 *, 0x11) = (s8) (s32) (var_ft1 * temp_fs0);
        M2C_FIELD(var_s0, s8 *, 0x12) = (s8) (s32) (var_ft1 * temp_fs2);
        var_s0 += 0x10;
        M2C_FIELD(temp_v1_3, s8 *, 0) = 0x7D;
        M2C_FIELD(temp_v1_3, s8 *, 4) = 0x7D;
        goto loop_1;
    }
    M2C_FIELD(temp_s4, s32 *, 0x38) = 3;
}
