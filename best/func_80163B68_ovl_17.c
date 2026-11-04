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

M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166BF0_ovl_17(void *, s16);          /* extern */
s16 func_80166F04_ovl_17(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801678B8_ovl_17(void *);               /* extern */

void func_80163B68_ovl_17(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 temp_v0;
    s16 var_v1;
    s8 var_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        temp_v0 = func_80166F04_ovl_17(arg0, 0x20, 1);
        M2C_FIELD(arg0, s16 *, 0x1F6) = temp_v0;
        if (temp_v0 == 0) {
            var_v0 = 7;
            goto block_15;
        }
        var_v1 = -0x400;
        if (temp_v0 > 0) {
            var_v1 = 0x400;
        }
        M2C_FIELD(arg0, s16 *, 0x1F4) = var_v1;
        if (M2C_FIELD(arg0, u8 *, 0x2CC) == 0) {
            M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) -var_v1;
        }
    case 1:
        M2C_FIELD(arg0, u8 *, 6) = 2U;
        M2C_FIELD(arg0, u8 *, 0x206) = (u8) ((func_80033634_ovl_01() & 0xF) + 0xF);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02000300;
    case 2:
        func_80166BF0_ovl_17(arg0, M2C_FIELD(arg0, s16 *, 0x1F6));
        var_v0 = 6;
        if ((M2C_FIELD(arg0, u16 *, 0x2C2) & 0xFFF) == ((u16) M2C_FIELD(arg0, s16 *, 0x1F4) & 0xFFF)) {
block_15:
            M2C_FIELD(arg0, s8 *, 5) = var_v0;
            M2C_FIELD(arg0, u8 *, 6) = 0;
        } else {
            temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x206) - 1;
            M2C_FIELD(arg0, u8 *, 0x206) = temp_v0_2;
            if ((temp_v0_2 << 0x18) == 0) {
                M2C_FIELD(arg0, u8 *, 6) = 3U;
                M2C_FIELD(arg0, u8 *, 0x206) = (u8) ((func_80033634_ovl_01() & 0xF) + 1);
                M2C_FIELD(arg0, s32 *, 0x1E8) = 0x300;
            }
        }
        break;
    case 3:
        temp_v0_3 = M2C_FIELD(arg0, u8 *, 0x206) - 1;
        M2C_FIELD(arg0, u8 *, 0x206) = temp_v0_3;
        if ((temp_v0_3 << 0x18) == 0) {
            M2C_FIELD(arg0, u8 *, 6) = 1U;
        }
        break;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
    func_801678B8_ovl_17(arg0);
}
