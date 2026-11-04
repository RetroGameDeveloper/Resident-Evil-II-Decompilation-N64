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

M2C_UNK func_80032B8C_ovl_01(void *, s16);          /* extern */
s32 func_80033634_ovl_01(M2C_UNK *);                /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166978_ovl_17(void *, M2C_UNK);      /* extern */
s32 func_80166A84_ovl_17(void *, s16);              /* extern */
M2C_UNK func_801678B8_ovl_17(void *);               /* extern */
extern M2C_UNK D_80167D68_ovl_17;

void func_801623D4_ovl_17(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 temp_v1_2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((*(((M2C_FIELD(arg0, u8 *, 5) - 1) * 0xC) + &D_80167D68_ovl_17) << 0x18) + 0x300);
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) (func_80033634_ovl_01(&D_80167D68_ovl_17) & 0x2E);
        /* fallthrough */
    case 1:
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + func_80166A84_ovl_17(arg0, M2C_FIELD((((M2C_FIELD(arg0, u8 *, 5) - 1) * 0xC) + &D_80167D68_ovl_17), s16 *, 6)));
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        func_801678B8_ovl_17(arg0);
        func_80166978_ovl_17(arg0, 1);
        M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) M2C_FIELD(arg0, u16 *, 0x1E0);
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v1_2;
        M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E0) + M2C_FIELD((((M2C_FIELD(arg0, u8 *, 5) - 1) * 0xC) + &D_80167D68_ovl_17), u16 *, 0xA));
        if ((s16) temp_v1_2 != -1) {
            if (M2C_FIELD(arg0, u8 *, 0x2BE) == 0) {
                if (M2C_FIELD(arg0, u8 *, 0x2D3) != 0) {
                    if ((u32) (M2C_FIELD(arg0, s32 *, 0x290) & 0x3FFFFFFF) >= 0x5DCU) {

                    } else {
                        goto block_11;
                    }
                } else if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x5DCU) {
                    goto block_10;
                }
            }
        } else {
block_10:
block_11:
            M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
        }
        break;
    }
    func_80032B8C_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x2B6));
}
