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

M2C_UNK func_8004279C_ovl_01(M2C_UNK *, M2C_UNK *, u16 *); /* extern */
extern f32 D_800B8820_ovl_01;
extern f32 D_800B8824_ovl_01;
extern u16 D_800EFBF0_ovl_01;
extern u16 D_800EFBF2_ovl_01;
extern f32 D_800EFBF4_ovl_01;
extern f32 D_800EFBF8_ovl_01;
extern M2C_UNK D_801399F0;
extern M2C_UNK D_80139A10;
extern s16 D_80139A18;
extern M2C_UNK D_80139A20;

void func_80042E10_ovl_01(void *arg0) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    f32 temp_ft0;
    u16 temp_a1;
    u16 temp_a2;
    u16 temp_a3;

    M2C_FIELD(&D_80139A10, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(arg0, M2C_UNK *, 0));
    M2C_FIELD(&D_80139A10, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(arg0, M2C_UNK *, 4));
    func_8004279C_ovl_01(&D_801399F0, &D_80139A10, &sp10);
    temp_a2 = sp10 + M2C_FIELD(&D_801399F0, u16 *, 0x16);
    sp10 = temp_a2;
    temp_a3 = sp12 + M2C_FIELD(&D_801399F0, u16 *, 0x1A);
    temp_a1 = sp14 + M2C_FIELD(&D_801399F0, u16 *, 0x1E);
    sp12 = temp_a3;
    sp14 = temp_a1;
    if ((temp_a1 << 0x10) == 0) {
        sp14 = temp_a1 + 1;
    }
    M2C_FIELD(&D_80139A20, u16 *, 4) = sp14;
    temp_ft0 = (f32) -(s16) sp14;
    M2C_FIELD(&D_80139A20, s16 *, 0) = (s16) (((s32) ((s16) temp_a2 * D_800EFBF0_ovl_01) / (s16) sp14) + 0xA0);
    M2C_FIELD(&D_80139A20, s16 *, 2) = (s16) (((s32) ((s16) temp_a3 * D_800EFBF2_ovl_01) / (s16) sp14) + 0x78);
    if (temp_ft0 < D_800B8820_ovl_01) {
        D_80139A18 = (s16) (s32) (((((temp_ft0 * D_800EFBF4_ovl_01) + D_800EFBF8_ovl_01) / -temp_ft0) * D_800B8824_ovl_01) + D_800B8824_ovl_01);
        return;
    }
    D_80139A18 = -1;
}
