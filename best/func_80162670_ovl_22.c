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

M2C_UNK func_801624E8_ovl_22(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_80166880_ovl_22;
extern u8 D_80166883_ovl_22;
extern M2C_UNK D_80166884_ovl_22;

void func_80162670_ovl_22(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2C4);
    switch (temp_v1) {                              /* irregular */
    case 0:
        D_80166880_ovl_22 = (s32) M2C_FIELD(arg0, u8 *, 0x26E);
        func_801624E8_ovl_22(arg0, 1, 0, 6, 0x1000, 3);
        M2C_FIELD(arg0, void (**)(void *), 0x2BC) = func_80162670_ovl_22;
        M2C_FIELD(arg0, u8 *, 0x2C4) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C4) + 1);
        return;
    case 4:
    case 7:
        /* fallthrough */
    case 10:
        M2C_FIELD(&D_80166884_ovl_22, s32 *, 0) = (s32) M2C_FIELD(arg0, u8 *, 0x26E);
        M2C_FIELD(arg0, u8 *, 0x26E) = (u8) D_80166883_ovl_22;
        if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18264) & 0x40) {
            func_801624E8_ovl_22(arg0, 1, 0, 6, 0x1000, 3);
        }
        M2C_FIELD(arg0, u8 *, 0x26E) = (u8) M2C_FIELD(&D_80166884_ovl_22, u8 *, 3);
        if (M2C_FIELD(arg0, u8 *, 0x2C4) == 0xA) {
            M2C_FIELD(arg0, void (**)(void *), 0x2BC) = NULL;
        }
        /* fallthrough */
    default:
        M2C_FIELD(arg0, u8 *, 0x2C4) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C4) + 1);
        return;
    }
}
