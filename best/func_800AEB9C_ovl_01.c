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

M2C_UNK func_800AE370_ovl_01();                     /* extern */
extern u8 D_801587D8;
extern u8 D_801587D9;
extern u8 D_801587DC;
extern M2C_UNK D_80158860;
extern u8 D_801589E0;

void func_800AEB9C_ovl_01(void *arg0) {
char *__repair_addr;

    u8 temp_a1;
    void *temp_a0;

    func_800AE370_ovl_01();
    temp_a1 = M2C_FIELD(arg0, u8 *, 0x63);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 0x2E) = 0;
    temp_a0 = (temp_a1 * 4) + &D_80158860;
    if (M2C_FIELD(temp_a0, u16 *, 2) == 0) {
        M2C_FIELD(temp_a0, u16 *, 2) = 1U;
        if (D_801589E0 != 0xFF) {
            M2C_FIELD(temp_a0, u8 *, 1) = 0xFFU;
            M2C_FIELD(temp_a0, u8 *, 0) = (u8) D_801587D9;
__repair_addr = (char *)(((D_801587D9 * 4) + &D_80158860));

            M2C_FIELD(__repair_addr, u8 *, 1) = temp_a1;
        } else {
            M2C_FIELD(temp_a0, u8 *, 1) = (u8) D_801589E0;
            M2C_FIELD(temp_a0, u8 *, 0) = (u8) D_801589E0;
            D_801589E0 = temp_a1;
        }
        D_801587D9 = temp_a1;
        if (M2C_FIELD(arg0, u8 *, 0x4C) != 0) {
            D_801587DC -= 1;
        } else {
            D_801587D8 -= 1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x60) = -1;
}
