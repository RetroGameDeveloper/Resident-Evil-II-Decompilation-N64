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

s32 func_80033634_ovl_01(s16);                      /* extern */
M2C_UNK func_800377B0_ovl_01(s32, s32, void *, M2C_UNK); /* extern */
M2C_UNK func_80040E88_ovl_01(u16 *, M2C_UNK *);     /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, u16 *, void *); /* extern */
s32 func_80066804_ovl_01(void *, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_80069F4C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80089C1C_ovl_01(void *, M2C_UNK *, void *, s32); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_800897B4_ovl_01(void *arg0, void *arg1) {
    M2C_UNK sp10;
    u16 sp30;
    u16 sp32;
    u16 sp34;
    M2C_UNK sp38;
    s16 temp_a0;
    s32 temp_v0;
    s32 temp_v1_2;
    u16 temp_v1;
    u32 *temp_s3;
    void *temp_a0_2;

    temp_s3 = M2C_FIELD(&D_800C7650_ovl_01, u32 **, 0x18288);
    if (M2C_FIELD(arg0, s16 *, 0x11E) == 0) {
        sp34 = 0;
        sp30 = 0;
        sp32 = M2C_FIELD(arg0, u16 *, 0x28);
        func_80040E88_ovl_01(&sp30, &sp10);
        sp30 = M2C_FIELD(arg0, u16 *, 0x2C);
        sp32 = M2C_FIELD(arg0, u16 *, 0x2A);
        func_8004279C_ovl_01(&sp10, &sp30, arg0 + 0x28);
        M2C_FIELD(arg0, s16 *, 0x11E) = 3;
        M2C_FIELD(arg0, s8 *, 0x112) = 0xF;
    }
    if (M2C_FIELD(arg0, s16 *, 0x11E) >= 2) {
        temp_v0 = func_80069F4C_ovl_01(arg0 + 0x4C, 0x64, 0x2000, 1);
        M2C_FIELD(arg1, s32 *, 0x14) = (s32) (M2C_FIELD(arg1, s32 *, 0x14) + (s16) M2C_FIELD(arg0, u16 *, 0x28));
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x2A) + (s8) M2C_FIELD(arg0, u8 *, 0x111);
        M2C_FIELD(arg0, u16 *, 0x2A) = temp_v1;
        M2C_FIELD(arg1, s32 *, 0x18) = (s32) (M2C_FIELD(arg1, s32 *, 0x18) + (s16) temp_v1);
        temp_a0 = (s16) M2C_FIELD(arg0, u16 *, 0x2C);
        M2C_FIELD(arg1, s32 *, 0x1C) = (s32) (M2C_FIELD(arg1, s32 *, 0x1C) + temp_a0);
        if (temp_v0 < M2C_FIELD(arg1, s32 *, 0x18)) {
            M2C_FIELD(arg0, s16 *, 0x11E) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x11E) - 1);
            M2C_FIELD(arg1, s32 *, 0x18) = temp_v0;
            M2C_FIELD(arg0, u16 *, 0x2A) = (u16) ((s32) ((s16) M2C_FIELD(arg0, u16 *, 0x2A) * -0x10000) >> 0x12);
            M2C_FIELD(arg0, u16 *, 0x28) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x28) << 0x10) >> 0x12);
            M2C_FIELD(arg0, u16 *, 0x2C) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x2C) << 0x10) >> 0x12);
            func_800377B0_ovl_01(((((u32) *temp_s3 >> 0x13) & 0x18) << 0x10) | 0x7D0, (func_80033634_ovl_01(temp_a0) & 0xFF) * 0x10, arg0 + 0x38, 0);
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 0);
            if (temp_v1_2 & 0x10) {
                M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_v1_2 | 0x2000);
                M2C_FIELD(arg0, s16 *, 0x124) = 0x1B58;
                M2C_FIELD(arg0, s16 *, 0x128) = 0x1B58;
                M2C_FIELD(arg0, s16 *, 0x126) = 0;
                M2C_FIELD(arg0, s16 *, 0x11E) = 1;
            }
            if (M2C_FIELD(arg0, s16 *, 0x11E) == 1) {
                M2C_FIELD(arg1, s32 *, 0x18) = temp_v0;
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~1);
            }
        }
        if (func_80066804_ovl_01(arg0 + 0x4C, 0x64, 1 << (M2C_FIELD(arg0, s32 *, 0x50) / -1800), 0x2000) != 0) {
            M2C_FIELD(arg0, u16 *, 0x28) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x28) << 0x10) >> 0x12);
            M2C_FIELD(arg0, u16 *, 0x2C) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x2C) << 0x10) >> 0x12);
            M2C_FIELD(arg0, u16 *, 0x28) = (u16) -(s16) M2C_FIELD(arg0, u16 *, 0x28);
            M2C_FIELD(arg0, u16 *, 0x2C) = (u16) -(s16) M2C_FIELD(arg0, u16 *, 0x2C);
        }
    }
    if (M2C_FIELD(arg0, s8 *, 0x112) >= 0) {
        sp30 = M2C_FIELD(arg0, u16 *, 0x2E);
        sp32 = M2C_FIELD(arg0, u16 *, 0x30);
        sp34 = M2C_FIELD(arg0, u16 *, 0x32);
        func_80040E88_ovl_01(&sp30, &sp38);
        temp_a0_2 = arg0 + 0x38;
        func_80089C1C_ovl_01(temp_a0_2, &sp38, temp_a0_2, 0x1000 - (M2C_FIELD(arg0, s8 *, 0x112) << 8));
        M2C_FIELD(arg0, s8 *, 0x112) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x112) - 1);
    }
}
