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

M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_801636DC_ovl_27(void *, M2C_UNK);      /* extern */

void func_80163184_ovl_27(void *arg0) {
    u16 temp_v0;
    u8 temp_v1;
    void *temp_a0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    temp_a0 = arg0 + 0x2B4;
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(temp_a0, u16 *, 0xE) = 0x400U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x2B4) << 0x13) + 0xF00);
        /* fallthrough */
    case 1:
        temp_v0 = M2C_FIELD(temp_a0, u16 *, 0xE) - 0x20;
        M2C_FIELD(temp_a0, u16 *, 0xE) = temp_v0;
        if (temp_v0 & 0x8000) {
            M2C_FIELD(temp_a0, u16 *, 0xE) = 0U;
            M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
        }
        break;
    }
    func_80089D34_ovl_01(arg0, 0x100);
    func_801636DC_ovl_27(arg0, 0);
}
