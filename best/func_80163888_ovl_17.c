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

s32 func_80074D94_ovl_01(s32, s32);                 /* extern */
M2C_UNK func_801637E8_ovl_17();                     /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_80163888_ovl_17(void *arg0) {
    M2C_UNK *var_v0;
    s16 temp_v1;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;

    func_801637E8_ovl_17();
    if (M2C_FIELD(arg0, u8 *, 0x2D3) != 0) {
        var_v0 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
    } else {
        var_v0 = &D_800E10D0_ovl_01;
    }
    temp_s1 = M2C_FIELD(var_v0, s32 *, 0x2C) - M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_s1 >= 0xDAD) {
        temp_v0 = func_80074D94_ovl_01(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x30));
        if (temp_v0 >= M2C_FIELD(arg0, s16 *, 0x25E)) {
            M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((temp_s1 - 0xDAC) / 100);
        } else {
            temp_v1 = (temp_v0 - (M2C_FIELD(arg0, s32 *, 0x2C) + 0x898)) / 100;
            M2C_FIELD(arg0, s16 *, 0x1F4) = temp_v1;
            if (temp_v1 & 0x8000) {
                M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
            }
        }
        if (M2C_FIELD(arg0, s16 *, 0x1F4) != 0) {
            temp_v0_2 = func_80033634_ovl_01();
            M2C_FIELD(arg0, s8 *, 5) = 1;
            M2C_FIELD(arg0, s8 *, 0x2CD) = 2;
            M2C_FIELD(arg0, s16 *, 6) = 0;
            M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1F4) + (temp_v0_2 & 3));
            return;
        }
        goto block_10;
    }
block_10:
    M2C_FIELD(arg0, s8 *, 5) = 2;
    M2C_FIELD(arg0, s16 *, 6) = 0x100;
    M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((func_80033634_ovl_01() & 0xF) + 0x1E);
}
