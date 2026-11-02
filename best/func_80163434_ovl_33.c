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

s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80163434_ovl_33(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;
    void *temp_s0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    temp_s0 = M2C_FIELD(arg0, void **, 0x234);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(temp_s0, s32 *, 0) = (s32) (M2C_FIELD(temp_s0, s32 *, 0) | 1);
        M2C_FIELD(arg0, s16 *, 0x68) = -0x20;
        M2C_FIELD(arg0, s16 *, 0x66) = 0;
        M2C_FIELD(arg0, s16 *, 0x64) = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2E), (s16) ((s32) M2C_FIELD(arg0, u16 *, 0x32) * -1), M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CB4), s16 *, 0x52), (s16) ((s32) M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CB4), u16 *, 0x56) * -1));
        /* fallthrough */
    case 1:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
        temp_v0 = M2C_FIELD(temp_s0, u16 *, 0x124) + 0x40;
        M2C_FIELD(temp_s0, u16 *, 0x124) = temp_v0;
        if ((s16) temp_v0 >= 0x801) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x09001F00;
            return;
        }
        return;
    case 2:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
        temp_v0_2 = M2C_FIELD(temp_s0, u16 *, 0x124) + 0x40;
        M2C_FIELD(temp_s0, u16 *, 0x124) = temp_v0_2;
        if ((s16) temp_v0_2 >= 0x1001) {
            M2C_FIELD(temp_s0, u16 *, 0x124) = 0x1000U;
            M2C_FIELD(arg0, s32 *, 4) = 0x01040000;
        }
        break;
    }
}
