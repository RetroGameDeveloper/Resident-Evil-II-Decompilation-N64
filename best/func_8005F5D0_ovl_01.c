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

s32 func_80032EA4_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_8006AB70_ovl_01(s32, s32 *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_800E1388_ovl_01;

void func_8005F5D0_ovl_01(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *var_s0;
    s32 var_a1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s5;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_a2;
    u8 var_s3;
    u8 var_s3_2;
    void *temp_s0;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_s2 = 2;
    var_a1 = 0;
    var_s5 = 0;
    var_s3 = M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A76);
    var_s6 = 0;
    temp_a2 = var_s3;
    if (var_s3 == 0) {
        goto block_21;
    }
    var_s0 = M2C_FIELD(&D_800C7650_ovl_01, s32 **, 0x19D40);
    if (!(*var_s0 & 1)) {
        goto loop_3;
    }
    var_a1 = 1;
    goto block_6;
loop_3:
    var_s2 += 1;
    if (var_s3 == 0) {
        goto block_7;
    }
    var_s0 = M2C_FIELD(((var_s2 * 4) + &D_800C7650_ovl_01), s32 **, 0x19D38);
    if (!(*var_s0 & 1)) {
        goto loop_3;
    }
    var_a1 += 1;
block_6:
    var_s3 -= 1;
    if (M2C_FIELD(arg0, void **, 0x250) != var_s0) {
        goto loop_3;
    }
block_7:
    var_s2_2 = var_s2 + 1;
    if (temp_a2 != var_a1) {
        goto block_9;
    }
    var_s2_2 = 2;
block_9:
    var_s3_2 = temp_a2;
    var_v0 = var_s2_2 * 4;
loop_10:
    temp_s0 = M2C_FIELD((var_v0 + &D_800C7650_ovl_01), void **, 0x19D38);
    var_v0_2 = var_s2_2 * 4;
    if (!(M2C_FIELD(temp_s0, s32 *, 0) & 1)) {
        goto block_17;
    }
    sp10 = M2C_FIELD(temp_s0, s32 *, 0x120);
    sp14 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x25D) * 0x178) + M2C_FIELD(temp_s0, s32 *, 0x234)), s32 *, 0x50);
    var_s3_2 -= 1;
    sp18 = M2C_FIELD(temp_s0, s32 *, 0x128);
    var_s1 = 0;
    if (M2C_FIELD(temp_s0, s16 *, 0x1F2) < 0) {
        goto block_14;
    }
    if (func_80032EA4_ovl_01(arg0, M2C_FIELD(temp_s0, s32 *, 0x28), M2C_FIELD(temp_s0, s32 *, 0x30), 0x400) != 0) {
        goto block_14;
    }
    var_s1 = func_8006AB70_ovl_01(M2C_FIELD(arg0, s32 *, 0x234) + (M2C_FIELD(arg0, u8 *, 0x25D) * 0x178) + 0x4C, &sp10, 0x80, 1) == 0;
block_14:
    var_v0_2 = var_s2_2 * 4;
    if (var_s1 == 0) {
        goto block_17;
    }
    var_v0_2 = var_s2_2 * 4;
    if (M2C_FIELD(temp_s0, u16 *, 0x1AA) & 0xC000) {
        goto block_17;
    }
    var_s6 = var_s5;
    var_s5 = var_s2_2;
block_17:
    var_s2_2 += 1;
    if ((var_v0_2 + &D_800E1388_ovl_01) != M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x28C)) {
        goto block_19;
    }
    var_s2_2 = 2;
block_19:
    var_v0 = var_s2_2 * 4;
    if (var_s3_2 != 0) {
        goto loop_10;
    }
    if (var_s5 != 0) {
        goto block_22;
    }
block_21:
    M2C_FIELD(arg0, void **, 0x250) = arg0;
    return;
block_22:
    if (var_s2 != var_s5) {
        goto block_27;
    }
    if (var_s6 == 0) {
        goto block_25;
    }
    var_s5 = var_s6;
    goto block_27;
block_25:
block_27:
    M2C_FIELD(arg0, void **, 0x250) = (void *) M2C_FIELD(((var_s5 * 4) + &D_800C7650_ovl_01), void **, 0x19D38);
    return;
}
