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

M2C_UNK func_80083800_ovl_01(s16, void *, void *);  /* extern */
M2C_UNK func_80166E0C_ovl_16(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, void *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;
extern M2C_UNK D_80166FF0_ovl_16;

void func_801650CC_ovl_16(void *arg0) {
    M2C_UNK sp20;
    M2C_UNK sp24;
    M2C_UNK sp28;
    M2C_UNK sp2C;
    M2C_UNK sp30;
    M2C_UNK sp34;
    M2C_UNK sp38;
    M2C_UNK sp3C;
    u8 temp_v0;
    void *temp_a1;

    sp20 = M2C_UNALIGNED32(M2C_FIELD(&D_80166FF0_ovl_16, M2C_UNK *, 0));
    sp24 = M2C_UNALIGNED32(M2C_FIELD(&D_80166FF0_ovl_16, M2C_UNK *, 4));
    sp28 = M2C_UNALIGNED32(M2C_FIELD(&D_80166FF0_ovl_16, M2C_UNK *, 8));
    sp2C = M2C_UNALIGNED32(M2C_FIELD(&D_80166FF0_ovl_16, M2C_UNK *, 0xC));
    sp30 = M2C_UNALIGNED32(M2C_FIELD(&D_80166FF0_ovl_16, M2C_UNK *, 0x10));
    sp34 = M2C_UNALIGNED32(M2C_FIELD(&D_80166FF0_ovl_16, M2C_UNK *, 0x14));
    sp38 = M2C_UNALIGNED32(M2C_FIELD(&D_80166FF0_ovl_16, M2C_UNK *, 0x18));
    sp3C = M2C_UNALIGNED32(M2C_FIELD(&D_80166FF0_ovl_16, M2C_UNK *, 0x1C));
    if (!(M2C_FIELD(arg0, u8 *, 0x2CF) & 1)) {
        temp_a1 = &sp20 + (((u8) M2C_FIELD(arg0, u8 *, 0x2CF) >> 1) * 8);
        func_80083800_ovl_01((s16) (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C74) << 0xB), temp_a1, temp_a1);
        func_80166E0C_ovl_16(&D_800E10D0_ovl_01, 0, 2, 0x2400, 0, 0, &sp20 + (((u8) M2C_FIELD(arg0, u8 *, 0x2CF) >> 1) * 8));
    }
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x2CF) + 1;
    M2C_FIELD(arg0, u8 *, 0x2CF) = temp_v0;
    if ((temp_v0 & 0xFF) == 7) {
        M2C_FIELD(arg0, s32 *, 0x2D8) = 0;
    }
}
