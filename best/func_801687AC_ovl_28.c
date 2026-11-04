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

M2C_UNK func_800662B8_ovl_01(void *, void *);       /* extern */
extern s8 D_80168ECE_ovl_28;
extern s8 D_80168ECF_ovl_28;

void func_801687AC_ovl_28(void *arg0, void *arg1) {
    u8 temp_v1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2BD);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_v0, u16 *, 0x10) = (u16) (M2C_FIELD(temp_v0, u16 *, 0x10) + 0x400);
        temp_v1_2 = M2C_FIELD(arg1, void **, 0x120);
        if ((s16) M2C_FIELD(temp_v1_2, u16 *, 0x10) >= 0x1001) {
            M2C_FIELD(temp_v1_2, u16 *, 0x10) = 0x1000U;
            M2C_FIELD(arg0, u8 *, 0x2BD) = 1U;
            M2C_FIELD(arg0, u16 *, 0x2BE) = 0U;
            D_80168ECF_ovl_28 = 0xE - ((func_80033634_ovl_01() & 0xFF) % 28);
            D_80168ECE_ovl_28 = 0xE - ((func_80033634_ovl_01() & 0xFF) % 28);
        }
        break;
    case 1:
        temp_a0 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_a0, u16 *, 0x10) = (u16) (M2C_FIELD(temp_a0, u16 *, 0x10) - M2C_FIELD(arg0, u16 *, 0x2BE));
        M2C_FIELD(arg0, u16 *, 0x2BE) = (u16) (M2C_FIELD(arg0, u16 *, 0x2BE) + 0x64);
        temp_v1_3 = M2C_FIELD(arg1, void **, 0x120);
        if ((s16) M2C_FIELD(temp_v1_3, u16 *, 0x10) < 0) {
            M2C_FIELD(temp_v1_3, u16 *, 0x10) = 0U;
            M2C_FIELD(arg0, s8 *, 0x2BC) = 0;
            M2C_FIELD(arg0, u8 *, 0x2BD) = 0U;
            D_80168ECF_ovl_28 = 0;
            D_80168ECE_ovl_28 = 0;
        }
        break;
    }
    func_800662B8_ovl_01(arg0, arg1);
}
