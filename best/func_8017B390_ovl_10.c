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

M2C_UNK func_8004CDB8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8017B478_ovl_10();                     /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_8017E680_ovl_10;
extern u8 D_8017E6D8_ovl_10;

void func_8017B390_ovl_10(void) {
    u8 var_v0;

    M2C_FIELD(&D_8017E680_ovl_10, s16 *, 2) = 0;
    M2C_FIELD(&D_8017E680_ovl_10, s16 *, 4) = 0;
    D_8017E6D8_ovl_10 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CD0), u8 *, 8);
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x10000000) {
        if (M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D3C), u8 *, 4) == 3) {
            var_v0 = 0xF;
            if (!(M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D3C), u8 *, 8) & 4)) {
                var_v0 = 0xE;
            }
            goto block_5;
        }
    } else {
        var_v0 = M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A88);
block_5:
        D_8017E6D8_ovl_10 = var_v0;
    }
    if ((((u32) (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21962) & 0xC) >> 3) == 0) || (D_8017E6D8_ovl_10 == 0xF)) {
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & ~0x100);
    }
loop_9:
    func_8017B478_ovl_10();
    func_8004CDB8_ovl_01(1);
    goto loop_9;
}
