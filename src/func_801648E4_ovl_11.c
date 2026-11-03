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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_80032DEC_ovl_01(void *, s16, s16, M2C_UNK); /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_801648E4_ovl_11(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x05000F00;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((func_80033634_ovl_01() & 7) + 7);
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        M2C_FIELD(arg0, s8 *, 0x1E9) = (s8) (func_80033634_ovl_01() & 0xF);
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        /* fallthrough */
    case 1:
        if (M2C_FIELD(arg0, s16 *, 0x1E0) >= 0x15) {
            func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 0x18);
            temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
            M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
            if ((s16) temp_v0 == -1) {
                func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 0x18);
                M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((func_80033634_ovl_01() & 7) + 7);
            }
        }
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        func_80032B8C_ovl_01(arg0, 0);
        return;
    }
}
