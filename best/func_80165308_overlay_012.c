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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80166900_ovl_12(void *, s32, s32);     /* extern */

void func_80165308_overlay_012(void *arg0) {
    s32 temp_s0;
    u8 temp_v1;
    void *temp_s1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 5);
    temp_s1 = arg0 + 0x2B4;
    if ((temp_v1 == 0xF) || (temp_v1 == 0x12)) {
        M2C_FIELD(temp_s1, u8 *, 7) = (u8) (M2C_FIELD(temp_s1, u8 *, 7) + 3);
        if (!(func_80033634_ovl_01() & 3)) {
            M2C_FIELD(temp_s1, u8 *, 7) = (u8) (M2C_FIELD(temp_s1, u8 *, 7) + 1);
            temp_s0 = func_80033634_ovl_01() & 0xF;
            func_80166900_ovl_12(arg0, temp_s0, (func_80033634_ovl_01() & 1) | 2);
        }
    } else {
        M2C_FIELD(temp_s1, u8 *, 7) = 1U;
        func_80166900_ovl_12(arg0, 0, 0);
        func_80077D48_ovl_01(1, arg0);
    }
    if ((M2C_FIELD(temp_s1, u8 *, 0xB) & 0x7F) == 1) {
        if (M2C_FIELD(temp_s1, u8 *, 1) != 0) {
            M2C_FIELD(arg0, s16 *, 6) = 0x100;
        } else {
            M2C_FIELD(arg0, s16 *, 6) = 0x200;
        }
    } else {
        M2C_FIELD(arg0, s16 *, 6) = 0x301;
        if (!(M2C_FIELD(temp_s1, u8 *, 0xB) & 0x40)) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x1EA) << 8) + 0x12000000);
            func_80077D48_ovl_01(1, arg0);
            M2C_FIELD(temp_s1, u8 *, 0xB) = (u8) (M2C_FIELD(temp_s1, u8 *, 0xB) | 0x40);
        }
        M2C_FIELD(arg0, s8 *, 0x206) = 0;
        M2C_FIELD(temp_s1, s8 *, 8) = 1;
    }
    M2C_FIELD(arg0, s16 *, 0x1F6) = 0;
}
