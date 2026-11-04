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

M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80163B38_ovl_27(void *, M2C_UNK, M2C_UNK); /* extern */

void func_80162C74_ovl_27(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 temp_a0;
    s16 var_v1;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x2BC) = (s16) (M2C_FIELD(arg0, u16 *, 0x2C0) + 0x400);
        var_v1 = -0x400;
        if (func_80033634_ovl_01() & 1) {
            var_v1 = 0x400;
        }
        M2C_FIELD(arg0, s16 *, 0x2C2) = var_v1;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0x28;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((func_80033634_ovl_01() & 7) << 0x10) + 0x05000700);
        func_80163B38_ovl_27(arg0, 0, 1);
        /* fallthrough */
    case 1:
        temp_a0 = M2C_FIELD(arg0, s16 *, 0x25E);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + M2C_FIELD(arg0, s16 *, 0x1E2));
        M2C_FIELD(arg0, s16 *, 0x1E2) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1E2) + 0x28);
        if (M2C_FIELD(arg0, s32 *, 0x2C) >= temp_a0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_a0;
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((func_80033634_ovl_01() & 0x1F) << 0x10) + 0x02000700);
        }
        break;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
}
