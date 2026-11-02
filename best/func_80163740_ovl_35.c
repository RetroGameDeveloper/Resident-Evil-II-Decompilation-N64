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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801624E4_ovl_35(void *);               /* extern */
M2C_UNK func_80166430_ovl_35(void *, M2C_UNK, u16 *, s16 *); /* extern */

void func_80163740_ovl_35(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s32 temp_v1_2;
    s32 temp_v1_5;
    s8 temp_v0;
    s8 temp_v1_3;
    u16 temp_v1_4;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u16 *, 0x1F6) = 6U;
        M2C_FIELD(arg0, s8 *, 0x206) = 0xF;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        M2C_FIELD(arg0, s8 *, 0x2BC) = 1;
        M2C_FIELD(arg0, s8 *, 0x207) = -8;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000F00;
        M2C_FIELD(arg0, s16 *, 0x64) = 0;
        func_801624E4_ovl_35(arg0);
        /* fallthrough */
    case 1:
        if (M2C_FIELD(arg0, u8 *, 7) == 0) {
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x2C) - 0x6F;
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_v1_2;
            if ((M2C_FIELD(arg0, s16 *, 0x25E) - 0x30F) >= temp_v1_2) {
                M2C_FIELD(arg0, u8 *, 7) = 1U;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + M2C_FIELD(arg0, s8 *, 0x207));
            temp_v1_3 = M2C_FIELD(arg0, s8 *, 0x206);
            if ((temp_v1_3 == 0xF) || (temp_v1_3 == 7)) {
                func_80077D48_ovl_01(5, arg0);
            }
            temp_v0 = (u8) M2C_FIELD(arg0, s8 *, 0x206) - 1;
            M2C_FIELD(arg0, s8 *, 0x206) = temp_v0;
            if ((temp_v0 << 0x18) == 0) {
                M2C_FIELD(arg0, s8 *, 0x206) = 0xF;
                temp_v1_4 = M2C_FIELD(arg0, u16 *, 0x1F6) - 1;
                M2C_FIELD(arg0, u16 *, 0x1F6) = temp_v1_4;
                M2C_FIELD(arg0, s8 *, 0x207) = (s8) -M2C_FIELD(arg0, s8 *, 0x207);
                if ((temp_v1_4 << 0x10) == 0) {
                    M2C_FIELD(arg0, u8 *, 6) = 2U;
                    M2C_FIELD(arg0, s32 *, 0x1E8) = 0xF00;
                }
            }
        }
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        if ((s16) M2C_FIELD(arg0, u16 *, 0x1F6) < 6) {
            sp10 = M2C_FIELD(arg0, u16 *, 0x2A);
            sp12 = M2C_FIELD(arg0, u16 *, 0x2E);
            sp14 = M2C_FIELD(arg0, u16 *, 0x32);
            sp18 = 0x400 - ((func_80033634_ovl_01() & 0xFF) * 0x10);
            sp1A = (u16) M2C_FIELD(arg0, s16 *, 0x25E) - (((func_80033634_ovl_01() & 0x1F) * 8) + 0x32);
            sp1C = ((func_80033634_ovl_01() & 0xFF) * 0x10) - 0x600;
            func_80166430_ovl_35(arg0, 5, &sp10, &sp18);
            return;
        }
        return;
    case 2:
        temp_v1_5 = M2C_FIELD(arg0, s32 *, 0x2C);
        if (temp_v1_5 < M2C_FIELD(arg0, s16 *, 0x25E)) {
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_v1_5 + 0x6F);
        }
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
            M2C_FIELD(arg0, s8 *, 0x2BC) = 0;
            M2C_FIELD(arg0, s8 *, 5) = 1;
            M2C_FIELD(arg0, u8 *, 6) = 0;
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s16 *, 0x25E);
        }
        break;
    }
}
