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

M2C_UNK func_800537D4_ovl_01(s32, s32, s32);        /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern void *D_8010D8E0_ovl_01;

s32 func_80053874_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 temp_v0;
    u8 temp_v1;
    void *temp_s0;

    temp_s0 = D_8010D8E0_ovl_01;
    switch (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x20F5B)) { /* irregular */
    case 0:
        if ((u8) M2C_FIELD(temp_s0, u8 *, 0x2DC) < 0xDU) {
            temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x2DC);
            func_800537D4_ovl_01(arg0, arg0 + (temp_v1 * (arg2 / 12)), arg1 + (temp_v1 * (arg3 / 12)));
            M2C_FIELD(temp_s0, u8 *, 0x2DC) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x2DC) + 1);
            return 1;
        }
block_7:
        M2C_FIELD(temp_s0, u8 *, 0x2DC) = 0U;
        M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x20F5B) = 0U;
        return 0;
    case 1:
        if ((u8) M2C_FIELD(temp_s0, u8 *, 0x2DC) >= 0xDU) {
            goto block_7;
        }
        temp_v0 = M2C_FIELD(temp_s0, u8 *, 0x2DC);
        func_800537D4_ovl_01(arg0, (arg0 + arg2) - ((temp_v0 * arg2) / 12), (arg1 + arg3) - ((temp_v0 * arg3) / 12));
        M2C_FIELD(temp_s0, u8 *, 0x2DC) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x2DC) + 1);
        return 1;
    default:
        return 1;
    }
}
