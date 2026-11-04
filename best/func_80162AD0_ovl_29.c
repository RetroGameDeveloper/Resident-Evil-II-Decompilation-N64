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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */

s32 func_80032B8C_ovl_01();
s32 func_80032DEC_ovl_01();
s32 func_80032EA4_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80083D5C_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650_ovl_01[];

void func_80162AD0_ovl_29(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a3;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01001F00;
        if (M2C_FIELD(arg0, u16 *, 0x1AA) & 1) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02001F00;
        }
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
        /* fallthrough */
    case 1:
        if (!(M2C_FIELD(arg0, u16 *, 0x1AA) & 1)) {
            func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262));
            if (func_80032EA4_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262)) != 0) {
                var_a3 = 0x30;
                goto block_11;
            }
        } else {
            func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 8);
            if (func_80032EA4_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262)) != 0) {
                var_a3 = 0x10;
block_11:
                func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), var_a3);
            }
        }
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1EA) >= 0x10U) {
            M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x1E0) << 0x10) >> 0x11);
        }
        if (func_80083D5C_ovl_01(arg0 + 0x28, *(s32 *)(D_800C7650_ovl_01 + 0x18290)) == 0) {
            M2C_FIELD(arg0, u16 *, 0x1E0) += 0x14;
        }
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0) {
            M2C_FIELD(arg0, u16 *, 0x1F4) += 1;
            if (M2C_FIELD(arg0, u16 *, 0x1AA) & 1) {
                if (func_80033634_ovl_01(arg0) & 1) {
                    func_80077D48_ovl_01(9, arg0);
                }
                if (!(M2C_FIELD(arg0, u16 *, 0x1AA) & 1)) {
                    goto block_21;
                }
            } else {
block_21:
                if (!(M2C_FIELD(arg0, u16 *, 0x1F4) & 1)) {
                    func_80077D48_ovl_01(0xD, arg0);
                }
            }
        }
        func_80032B8C_ovl_01(arg0, 0);
        return;
    }
}
