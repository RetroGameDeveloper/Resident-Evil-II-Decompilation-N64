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

M2C_UNK func_800824C8_ovl_01(void *, M2C_UNK);      /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E9118_ovl_01;

void func_800278AC_ovl_01(void) {
    u8 temp_s3;
    void *temp_v0;

    temp_s3 = M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21962);
    func_800824C8_ovl_01(&D_800C7650_ovl_01 + 0x19A5C, 0x1FC4);
    temp_v0 = &D_800E9118_ovl_01 + 0x10;
    M2C_FIELD(&D_800E9118_ovl_01, s16 *, 0x10) = -1;
    M2C_FIELD(temp_v0, s16 *, 0x2C) = -1;
    M2C_FIELD(temp_v0, s16 *, 0x58) = -1;
    M2C_FIELD(temp_v0, s16 *, 0x84) = -1;
    M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x21600) = -1;
    M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FE) = -1;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x1820C) = 0xFFFF0000;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18230) = 0xFFFF0000;
    M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21962) = temp_s3;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0xD9);
    M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x2148E) = (u8) M2C_FIELD(&D_800E9118_ovl_01, u8 *, 0xCA);
}
