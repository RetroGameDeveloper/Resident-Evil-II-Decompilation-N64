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

extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_801665D4_ovl_23;
extern u8 D_801665D7_ovl_23;
extern M2C_UNK D_801665D8_ovl_23;

void func_80162B44_ovl_23(S_func_80162870_ovl_23_arg0 *arg0) {
    u8 temp_v1;

    temp_v1 = arg0->unk_2C4;
    switch (temp_v1) {                              /* irregular */
    case 0:
        D_801665D4_ovl_23 = (s32) arg0->unk_26E;
        func_80162998_ovl_23(arg0, 1, 0, 6, 0x2000, 3);
        arg0->unk_2BC = (s32) func_80162B44_ovl_23;
        arg0->unk_2C4 += 1;
        return;
    case 4:
    case 7:
        /* fallthrough */
    case 10:
        M2C_FIELD(&D_801665D8_ovl_23, s32 *, 0) = (s32) arg0->unk_26E;
        arg0->unk_26E = D_801665D7_ovl_23;
        if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18264) & 0x40) {
            func_80162998_ovl_23(arg0, 1, 0, 6, 0x1800, 3);
        }
        arg0->unk_26E = M2C_FIELD(&D_801665D8_ovl_23, u8 *, 3);
        if (arg0->unk_2C4 == 0xA) {
            arg0->unk_2BC = 0;
        }
        /* fallthrough */
    default:
        arg0->unk_2C4 += 1;
        return;
    }
}
