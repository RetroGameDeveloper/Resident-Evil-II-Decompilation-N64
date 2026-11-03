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

M2C_UNK func_80004CFC(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
extern s32 D_8010B69C_ovl_01;
extern M2C_UNK D_80171C34_ovl_07;
extern u32 D_801722C8_ovl_07;
extern s32 D_801722CC_ovl_07;

s32 func_801712F8_overlay_007(u32 arg0) {
    M2C_UNK *var_s0;
    s32 temp_v1;
    s32 var_a1;
    u32 var_s1;
    u32 var_v1;

    var_v1 = 0;
    var_s1 = 0;
    var_s0 = &D_80171C34_ovl_07;
loop_1:
    if ((arg0 >= var_v1) && (arg0 < (u32) (var_v1 + M2C_FIELD(var_s0, s32 *, 4)))) {
        if (D_801722C8_ovl_07 != var_s1) {
            temp_v1 = M2C_FIELD(var_s0, s32 *, 8);
            if (temp_v1 != 2) {
                var_a1 = D_8010B69C_ovl_01;
                if (temp_v1 != 0) {
                    var_a1 += 0x17700;
                }
                D_801722CC_ovl_07 = var_a1;
                func_80004CFC(M2C_FIELD(var_s0, s32 *, 0), var_a1, 0, 0);
                D_801722C8_ovl_07 = var_s1;
            }
        }
        return M2C_FIELD(var_s0, s32 *, 8);
    }
    var_s1 += 1;
    var_v1 += M2C_FIELD(var_s0, s32 *, 4);
    var_s0 += 0xC;
    if (var_s1 >= 9U) {
        return -1;
    }
    goto loop_1;
}
