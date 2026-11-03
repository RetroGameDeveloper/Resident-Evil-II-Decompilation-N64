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

s32 func_80032EA4_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80162438_ovl_25(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK var_a0;
    u16 temp_v0;
    u16 temp_v1_2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((func_80033634_ovl_01() & 1) + 1) << 0x18) + 0xF00);
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((func_80033634_ovl_01() & 0x1F) + 0x3C);
        if (func_80033634_ovl_01() & 1) {
            var_a0 = 1;
            if (func_80033634_ovl_01() & 1) {
                var_a0 = 0;
            }
            func_80077D48_ovl_01(var_a0, arg0);
        }
        /* fallthrough */
    case 1:
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x66) + func_80032EA4_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x20);
        M2C_FIELD(arg0, u16 *, 0x66) = temp_v1_2;
        if ((M2C_FIELD(arg0, s16 *, 0x2B4) + 0x180) < (s16) temp_v1_2) {
            M2C_FIELD(arg0, u16 *, 0x66) = (u16) ((u16) M2C_FIELD(arg0, s16 *, 0x2B4) + 0x180);
        }
        if ((s16) M2C_FIELD(arg0, u16 *, 0x66) < (M2C_FIELD(arg0, s16 *, 0x2B4) - 0x180)) {
            M2C_FIELD(arg0, u16 *, 0x66) = (u16) ((u16) M2C_FIELD(arg0, s16 *, 0x2B4) - 0x180);
        }
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((s16) temp_v0 == -1) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01050000;
        }
        return;
    }
}
