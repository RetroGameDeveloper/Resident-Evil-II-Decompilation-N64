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

M2C_UNK func_800A8278_ovl_01(s32, u8, u32 *);       /* extern */
extern M2C_UNK D_80143BF0;
extern void *D_80143BF8;
extern s32 D_80147F40;
extern s32 D_80147F44;

void func_800A0B58_ovl_01(s32 arg0) {
    s32 temp_a0;
    u32 *temp_a0_2;
    u32 *temp_a1;
    u32 *temp_a2;
    u32 temp_lo;
    u32 temp_v0;

    temp_a1 = M2C_FIELD(D_80143BF8, u32 **, 0xF68);
    if (temp_a1 != NULL) {
        M2C_FIELD(D_80143BF8, u32 **, 0xF6C) = temp_a1;
        M2C_FIELD(D_80143BF8, s32 *, 0xF74) = arg0;
        M2C_FIELD(D_80143BF8, s32 *, 0xF70) = 0;
        if ((temp_a1 != NULL) && (*temp_a1 != -1U)) {
loop_4:
            temp_a2 = M2C_FIELD(D_80143BF8, u32 **, 0xF6C);
            if ((u32) (M2C_FIELD(D_80143BF8, s32 *, 0xF74) + M2C_FIELD(D_80143BF8, s32 *, 0x120)) >= (u32) M2C_FIELD(temp_a2, u32 *, 0)) {
                temp_a0 = M2C_FIELD(temp_a2, s32 *, 4);
                M2C_FIELD(D_80143BF8, s32 *, 0x124) = temp_a0;
                func_800A8278_ovl_01(temp_a0, M2C_FIELD(&D_80143BF0, u8 *, 3), temp_a2);
                temp_a0_2 = M2C_FIELD(D_80143BF8, u32 **, 0xF6C);
                M2C_FIELD(D_80143BF8, u32 **, 0xF6C) = (u32 *) (temp_a0_2 + 8);
                if (M2C_FIELD(temp_a0_2, s32 *, 8) == -1) {

                } else {
                    goto loop_4;
                }
            }
        }
        temp_lo = ((u32) (((M2C_FIELD(D_80143BF8, s32 *, 0x124) * 0xC00) / 60) * ((s32) (D_80147F40 << 0x10) / (s32) D_80147F44)) >> 3) * M2C_FIELD(D_80143BF8, u16 *, 0xFC2);
        temp_v0 = temp_lo >> 0x18;
        M2C_FIELD(D_80143BF8, u32 *, 0x11C) = temp_v0;
        M2C_FIELD(D_80143BF8, s32 *, 0x118) = (s32) ((temp_lo >> 8) & 0xFFFF);
        M2C_FIELD(D_80143BF8, s32 *, 0x120) = (s32) ((s32) temp_v0 >> 1);
    }
}
