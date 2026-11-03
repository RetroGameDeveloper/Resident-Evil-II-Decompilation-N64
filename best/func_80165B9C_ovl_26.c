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
M2C_UNK func_8016559C_ovl_26();                     /* extern */
M2C_UNK func_80165640_ovl_26(void *);               /* extern */
M2C_UNK func_80166B18_ovl_26(void *, u8, M2C_UNK);  /* extern */
extern M2C_UNK D_801671B0_ovl_26;

void func_80165B9C_ovl_26(void *arg0) {
    s32 var_v1;
    u32 var_a0;
    void *temp_s2;

    temp_s2 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_8016559C_ovl_26();
        func_80166B18_ovl_26(arg0, *((func_80033634_ovl_01() & 0xF) + &D_801671B0_ovl_26), 0xA);
        func_80166B18_ovl_26(arg0, *((func_80033634_ovl_01() & 0xF) + &D_801671B0_ovl_26), 0xA);
        func_80166B18_ovl_26(arg0, *((func_80033634_ovl_01() & 0xF) + &D_801671B0_ovl_26), 0xA);
        var_a0 = 0;
        var_v1 = 0;
        M2C_FIELD(arg0, s8 *, 0x25D) = 0;
        M2C_FIELD(temp_s2, s8 *, 0x24) = 0x2D;
        M2C_FIELD(temp_s2, s8 *, 0xD) = 7;
        M2C_FIELD(temp_s2, s8 *, 0xF) = 3;
        do {
            var_a0 += 1;
            M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x234) + var_v1), s32 *, 0x60) = 0x3F3F3F;
            var_v1 += 0x178;
        } while (var_a0 < 0x1AU);
    } else {
        func_80165640_ovl_26(arg0);
    }
    M2C_FIELD(temp_s2, s16 *, 0x20) = 1;
}
