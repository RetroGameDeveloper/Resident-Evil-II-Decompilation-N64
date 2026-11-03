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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, M2C_UNK, void *, M2C_UNK *); /* extern */
M2C_UNK func_80082230_ovl_01(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern u8 D_800C7650_ovl_01;

void func_801624FC_ovl_16(void *arg0) {
    M2C_UNK sp10;
    s16 temp_v0;
    s32 var_a1;
    u16 var_v1;
    u8 temp_v1;
    void *temp_s0;
    void *temp_s2;

    temp_s0 = M2C_FIELD(arg0, void **, 0x208);
    temp_s2 = M2C_FIELD(arg0, void **, 0x234);
    func_80082230_ovl_01(&sp10, 0, 8);
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2B7);
    switch (temp_v1) {                              /* irregular */
    case 0:
        var_a1 = 0x2328 - (M2C_FIELD(arg0, s16 *, 0x25E) - M2C_FIELD(temp_s2, s32 *, 0x50));
        if (var_a1 < 0) {
            var_a1 = 0;
        }
        M2C_FIELD(temp_s0, u16 *, 4) = (u16) ((M2C_FIELD(arg0, u16 *, 0x2B8) * var_a1) / 9000);
        var_v1 = (M2C_FIELD(arg0, u16 *, 0x2BA) * var_a1) / 9000;
block_14:
        M2C_FIELD(temp_s0, u16 *, 6) = var_v1;
        break;
    case 1:
        M2C_FIELD(temp_s0, void **, 0x14) = (void *) (temp_s2 + 0x33C);
        M2C_FIELD(arg0, s16 *, 0x1F6) = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0xA);
        M2C_FIELD(arg0, u8 *, 0x2B7) = (u8) (M2C_FIELD(arg0, u8 *, 0x2B7) + 1);
        /* fallthrough */
    case 2:
        temp_v0 = (u16) M2C_FIELD(arg0, s16 *, 0x1F6) + 1;
        if (M2C_FIELD(arg0, s16 *, 0x1F6) < 0x70) {
            M2C_FIELD(arg0, s16 *, 0x1F6) = temp_v0;
            if (temp_v0 < 0x10) {
                M2C_FIELD(temp_s0, s8 *, 0x18) = (s8) ((u32) (D_800C7650_ovl_01 * (temp_v0 + 1)) >> 4);
                M2C_FIELD(temp_s0, s8 *, 0x19) = (s8) ((u32) (((u16) D_800C7650_ovl_01 & 0xFF) * (M2C_FIELD(arg0, s16 *, 0x1F6) + 1)) >> 4);
                M2C_FIELD(temp_s0, s8 *, 0x1A) = (s8) ((u32) ((((u32) D_800C7650_ovl_01 >> 8) & 0xFF) * (M2C_FIELD(arg0, s16 *, 0x1F6) + 1)) >> 4);
            }
            var_v1 = M2C_FIELD(temp_s0, u16 *, 6) + 4;
            M2C_FIELD(temp_s0, u16 *, 4) = (u16) (M2C_FIELD(temp_s0, u16 *, 4) + 4);
            goto block_14;
        }
        break;
    }
    if ((M2C_FIELD(arg0, s16 *, 0x1F2) > 0) && !(func_80033634_ovl_01() & 0x1F)) {
        func_800377B0_ovl_01(0x150800, 0, temp_s2 + 0xD70, &sp10);
    }
}
