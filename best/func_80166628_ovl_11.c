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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_800334F8_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_80089D34_ovl_01(void *, s32, s32, M2C_UNK); /* extern */

void func_80166628_ovl_11(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
        func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x22C), M2C_FIELD(arg0, s32 *, 0x230), 0x100);
        if (M2C_FIELD(arg0, u16 *, 0x270) & 1) {
            M2C_FIELD(arg0, u8 *, 6) = 1U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
            return;
        }
        return;
    case 1:
        func_800334F8_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x22C), M2C_FIELD(arg0, s32 *, 0x230), 0);
        if (func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x22C), M2C_FIELD(arg0, s32 *, 0x230), 0x100) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01050600;
            M2C_FIELD(arg0, s8 *, 0x207) = 0;
            M2C_FIELD(arg0, s8 *, 0x206) = 0;
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
            M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) & 0xBFFF);
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~8);
        }
        func_80032B8C_ovl_01(arg0, 0);
        break;
    }
}
