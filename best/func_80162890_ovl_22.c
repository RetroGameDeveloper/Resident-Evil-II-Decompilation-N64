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

M2C_UNK func_800377B0_ovl_01(s32, s16, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_80166630_ovl_22;

void func_80162890_ovl_22(void *arg0) {
    M2C_UNK *temp_a3;
    M2C_UNK *var_s1;
    s16 temp_a0;
    s32 temp_s4;
    s32 temp_v0;
    u32 var_s2;
    void *var_s0;

    var_s1 = &D_80166630_ovl_22;
    var_s2 = 0;
    var_s0 = (char *)(&D_80166630_ovl_22); var_s0 += (s32)(6);
    temp_s4 = M2C_FIELD(arg0, s32 *, 0x234);
    do {
        temp_v0 = M2C_FIELD(var_s0, s32 *, 2);
        temp_a0 = M2C_FIELD(var_s0, s16 *, 0);
        var_s0 += 0xC;
        temp_a3 = var_s1;
        var_s1 += 0xC;
        var_s2 += 1;/*__repair_call_balance*/if(var_s2){
        func_800377B0_ovl_01(temp_a0 | 0x05040000, M2C_FIELD(arg0, s16 *, 0x66), temp_s4 + (temp_v0 * 0x178) + 0x38, temp_a3);}else{
        func_800377B0_ovl_01(temp_a0 | 0x05040000, M2C_FIELD(arg0, s16 *, 0x66), temp_s4 + (temp_v0 * 0x178) + 0x38, temp_a3);}
    } while (var_s2 < 7U);
}
