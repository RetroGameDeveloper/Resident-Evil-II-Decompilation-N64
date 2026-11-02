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

u32 func_8000A6C0(void *, s32, void *);             /* extern */
M2C_UNK func_8000CB60(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK D_80129E34_ovl_01;
extern M2C_UNK D_80129FD4_ovl_01;

void func_80087E14_ovl_01(void *arg0) {
    s32 var_s0;
    s32 var_s1;
    u32 temp_v0;
    void *var_s2;

    if (*(M2C_FIELD(arg0, s32 *, 0) + &D_80129FD4_ovl_01) != 1) {
        *M2C_FIELD(arg0, u32 **, 4) = 0xFFFF;
        return;
    }
    var_s0 = 0;
    var_s2 = arg0;
    var_s1 = 0x48;
    *M2C_FIELD(arg0, u32 **, 4) = 0;
    do {
        temp_v0 = func_8000A6C0((M2C_FIELD(arg0, s32 *, 0) * 0x68) + &D_80129E34_ovl_01, var_s0, arg0 + var_s1);
        M2C_FIELD(var_s2, u32 *, 8) = temp_v0;
        if ((temp_v0 < 5U) && (temp_v0 != 0)) {
            *M2C_FIELD(arg0, u32 **, 4) = temp_v0;
        }
        var_s2 += 4;
        var_s0 += 1;
        var_s1 += 0x20;
    } while (var_s0 < 0x10);
    func_8000CB60(M2C_FIELD(arg0, s32 *, 0x248), 0, 0);
}
