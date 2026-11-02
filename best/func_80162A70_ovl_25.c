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

M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK);      /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80162A70_ovl_25(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x05000F00;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        return;
    case 1:
        func_80089D34_ovl_01(arg0, 0x100);
        if (!(M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) & 0x80)) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            return;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
        break;
    }
}
