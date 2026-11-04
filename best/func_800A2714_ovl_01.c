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

M2C_UNK func_80006650(void *, s32);                 /* extern */
M2C_UNK func_8000EFA0(void *, s32);                 /* extern */
M2C_UNK func_800A5618_ovl_01();                     /* extern */
M2C_UNK func_800A5660_ovl_01();                     /* extern */
extern s32 D_80143EA4;
extern void *D_80143F08;
extern s32 D_80143F0C;
extern void *D_80143F10;
extern void *(*D_80143FA8)(M2C_UNK, M2C_UNK);

void func_800A2714_ovl_01(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    u16 temp_v0_2;
    u32 temp_hi;
    u32 var_a1;
    u32 var_a1_2;
    void *temp_v0;
    void *temp_v1;
    void *var_a0;
    
    void *var_a2;
    void *var_a2_2;
    void *var_a3;

    if (D_80143F10 != NULL) {
        temp_s1 = ((((M2C_FIELD(arg0, u16 *, 0) * D_80143EA4) / 1000) / 192) * 0xC0) + 0xC0;
        temp_v0 = D_80143FA8(0x48, 0);
        temp_s0 = temp_s1 * 2;
        M2C_FIELD(temp_v0, void **, 0) = (void *) D_80143F10;
        func_80006650(D_80143F10, temp_s0);
        func_8000EFA0(M2C_FIELD(temp_v0, void **, 0), temp_s0);
        M2C_FIELD(temp_v0, s32 *, 4) = temp_s1;
        M2C_FIELD(temp_v0, s16 *, 0xA) = (s16) (M2C_FIELD(arg0, u8 *, 0x1B) << 8);
        M2C_FIELD(temp_v0, s16 *, 8) = (s16) M2C_FIELD(arg0, u8 *, 0x1A);
        var_a1 = 0;
        if (M2C_FIELD(arg0, u8 *, 0x1A) != 0) {
            var_a3 = temp_v0;
            var_a2 = arg0;
            var_a0 = temp_v0;
            do {
                temp_hi = MULTU_HI((D_80143EA4 * M2C_FIELD(var_a2, u16 *, 2)), 0x10624DD3);
                var_a2 += 2;
                temp_v1 = arg0 + var_a1;/*__repair_loop_weight*/do {
                var_a1 += 1;} while (0);
                M2C_FIELD(var_a0, s32 *, 0xC) = (s32) (((temp_hi >> 6) + 3) & 0xFFFC);
                var_a0 += 4;
                M2C_FIELD(var_a3, s16 *, 0x2C) = (s16) (M2C_FIELD(temp_v1, u8 *, 0x12) << 8);
                var_a3 += 2;
            } while (var_a1 < (u8) M2C_FIELD(arg0, u8 *, 0x1A));
        }
        if (M2C_FIELD(arg0, u8 *, 0x1C) == 1) {
            var_a1_2 = 0;
            temp_v1 = arg0;
            var_a2_2 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(temp_v1, u16 *, 0x1E);
                temp_v1 += 2;
                var_a1_2 += 1;
                M2C_FIELD(var_a2_2, u16 *, 0x40) = temp_v0_2;
                var_a2_2 += 2;
            } while (var_a1_2 < 4U);
        } else {
            M2C_FIELD(temp_v0, s16 *, 0x40) = 0;
            M2C_FIELD(temp_v0, s16 *, 0x42) = 0;
            M2C_FIELD(temp_v0, s16 *, 0x44) = 0;
            M2C_FIELD(temp_v0, s16 *, 0x46) = 0x7FFF;
        }
        func_8000EFA0(temp_v0, 0x48);
        func_800A5618_ovl_01();
        D_80143F0C = 0;
        D_80143F08 = temp_v0;
        func_800A5660_ovl_01();
    }
}
