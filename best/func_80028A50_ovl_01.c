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

void func_80028A50_ovl_01(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp10;
    void *temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0x10) != 0xCB) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0xE;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0)();
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) >= (u32) M2C_FIELD(arg0, u32 *, 0x60)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x6D;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, M2C_UNK), 4)(arg0, -1);
    }
    temp_v1 = M2C_FIELD(arg0, void **, 8);
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, u32 *, 4) = (u32) M2C_FIELD(arg0, u32 *, 0x78);
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), u32 *, 8) = (u32) M2C_FIELD(arg0, u32 *, 0x60);
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(void *), 0)(arg0);
    }
    sp10 = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x168), M2C_UNK (**)(void *, M2C_UNK, s32 *, M2C_UNK), 4)(arg0, arg1, &sp10, arg2);
    M2C_FIELD(arg0, u32 *, 0x78) = (u32) (M2C_FIELD(arg0, u32 *, 0x78) + sp10);
}
