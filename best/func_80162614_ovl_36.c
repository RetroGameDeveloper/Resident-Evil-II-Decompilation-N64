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

s32 func_80033634_ovl_01();                         /* extern */
extern M2C_UNK D_800E10D0_ovl_01;

void func_80162614_ovl_36(void *arg0) {
    s32 temp_v1;
    s8 var_a0;
    u16 temp_v0;
    u16 var_v0;
    void *temp_s1;

    temp_s1 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) (0x12C - (func_80033634_ovl_01() & 0x1F));
    }
    if (M2C_FIELD(arg0, s16 *, 0x270) != 0) {
        temp_v1 = M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 4) & 0xFFFF0000;
        switch (temp_v1) {                          /* irregular */
        case 0x1030000:
            /* fallthrough */
        case 0x1010000:
            var_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 0xA;
block_10:
            M2C_FIELD(arg0, u16 *, 0x1F4) = var_v0;
            break;
        case 0x1020000:
            var_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 0xF;
            goto block_10;
        }
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if (((temp_v0 << 0x10) <= 0) || (M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x1F2) < 0)) {
            if ((0x5335 >> (func_80033634_ovl_01() & 0xF)) & 1) {
                var_a0 = 2;
                if ((0x990 >> (func_80033634_ovl_01() & 0xF)) & 1) {
                    var_a0 = 5;
                }
                M2C_FIELD(temp_s1, s8 *, 5) = var_a0;
                M2C_FIELD(temp_s1, u16 *, 6) = (u16) M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x2A);
                M2C_FIELD(temp_s1, u16 *, 8) = (u16) M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x32);
                M2C_FIELD(arg0, s16 *, 6) = 0x100;
            }
            M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
        }
    }
}
