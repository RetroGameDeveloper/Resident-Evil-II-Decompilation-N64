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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_8016232C_ovl_35(void *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_801627D8_ovl_35(void *arg0) {
    u16 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((func_80033634_ovl_01() & 0xF) + 0xF);
    }
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
    M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
        if (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) < 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01090000;
        }
    }
    func_8016232C_ovl_35(arg0);
}
