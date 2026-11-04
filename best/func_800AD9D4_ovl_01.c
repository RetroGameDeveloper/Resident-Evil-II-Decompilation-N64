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

void *func_800AB3DC_ovl_01(s16 *, s32, u16, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_800AE0F4_ovl_01;
extern s16 D_8014E0A0;
extern void *D_8014E0BC;
extern void *D_8014E0C0;
extern s32 D_8014E10C;
extern M2C_UNK D_8014E110;

s32 func_800AD9D4_ovl_01(s16 arg0, void *arg1) {
int __repair_literal;

    M2C_UNK *var_s0;
    s32 var_s1;
    void *temp_v0;
    void *temp_v1;

    var_s1 = 0;
    D_8014E0A0 = arg0;
__repair_literal = 0;

    if (D_8014E10C > __repair_literal) {
        var_s0 = &D_8014E110;
loop_2:
        temp_v0 = func_800AB3DC_ovl_01(&D_8014E0A0, M2C_FIELD(var_s0, s32 *, 0), M2C_FIELD(var_s0, u16 *, 8), 0x1C, &D_800AE0F4_ovl_01);
        D_8014E0BC = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(temp_v0, s32 *, 0xC);
            temp_v1 = temp_v0 + 0xC;
            M2C_FIELD(arg1, s32 *, 8) = 0;
            M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_v0, s32 *, 8);
            M2C_FIELD(arg1, s32 *, 0x10) = (s32) M2C_FIELD(temp_v1, s32 *, 8);
            M2C_FIELD(arg1, s32 *, 0xC) = (s32) (M2C_FIELD(temp_v1, s32 *, 4) & 0xFFFFFF);
            D_8014E0C0 = temp_v1;
            M2C_FIELD(arg1, s32 *, 0x14) = (s32) M2C_FIELD(temp_v1, s32 *, 0xC);
            M2C_FIELD(arg1, u8 *, 0x18) = (u8) M2C_FIELD(temp_v1, s32 *, 4);
            return 0;
        }
        var_s1 += 1;
        var_s0 += 0xC;
        if (var_s1 >= D_8014E10C) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    return -1;
}
