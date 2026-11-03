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

s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
M2C_UNK func_80083800_ovl_01(s16, u16 *, u16 *);    /* extern */
M2C_UNK func_800838F0_ovl_01(s32, s32, s32, u16 *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8FC8_ovl_01;
extern M2C_UNK D_80166274_ovl_15;
extern M2C_UNK D_80166278_ovl_15;
extern M2C_UNK D_8016627C_ovl_15;

void func_80164F38_ovl_15(void *arg0) {
    u16 sp10;
    s16 sp12;
    s16 sp14;
    s16 temp_a0;
    s32 temp_a2;
    u16 temp_v0;
    u8 temp_v1;
    void *temp_s0;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x234);
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2C9);
    temp_s0 = temp_a2 + 0xA48;
    switch (temp_v1) {                              /* irregular */
    case 1:
        M2C_FIELD(temp_s0, M2C_UNK **, 0x64) = &D_800E8FC8_ovl_01;
        M2C_FIELD(temp_s0, s32 *, 0x1C) = (s32) M2C_FIELD(temp_s0, s32 *, 0x4C);
        M2C_FIELD(temp_s0, s32 *, 0x20) = (s32) M2C_FIELD(temp_s0, s32 *, 0x50);
        M2C_FIELD(temp_s0, s32 *, 0x24) = (s32) M2C_FIELD(temp_s0, s32 *, 0x54);
        sp14 = 0;
        sp12 = 0;
        sp10 = 0;
        func_800838F0_ovl_01(temp_a2 + 0xA64, temp_a2 + 0xAA0, temp_a2 + 0xA80, &sp10);
        M2C_FIELD(&D_80166274_ovl_15, u16 *, 2) = -0x2BCU;
        M2C_FIELD(&D_80166278_ovl_15, s16 *, 0) = -0x1F4;
        M2C_FIELD(&D_80166278_ovl_15, u16 *, 2) = 0x46U;
        M2C_FIELD(&D_8016627C_ovl_15, u16 *, 0) = -0xD2U;
        M2C_FIELD(&D_8016627C_ovl_15, u16 *, 2) = 0xAU;
        M2C_FIELD(arg0, u8 *, 0x2C9) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C9) + 1);
        /* fallthrough */
    case 2:
        temp_a0 = func_80032D44_ovl_01(M2C_FIELD(temp_s0, s16 *, 0x1E), M2C_FIELD(temp_s0, s16 *, 0x26), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AAA), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AB2));
        sp14 = 0;
        sp10 = M2C_FIELD(&D_80166274_ovl_15, u16 *, 2);
        func_80083800_ovl_01(temp_a0, &sp10, &sp10);
        M2C_FIELD(temp_s0, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x1C) + (s16) sp10);
        M2C_FIELD(temp_s0, s32 *, 0x20) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x20) + M2C_FIELD(&D_80166278_ovl_15, s16 *, 0));
        M2C_FIELD(temp_s0, u16 *, 0x5C) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x5C) + M2C_FIELD(&D_8016627C_ovl_15, u16 *, 0));
        M2C_FIELD(&D_80166278_ovl_15, s16 *, 0) = (s16) ((u16) M2C_FIELD(&D_80166278_ovl_15, s16 *, 0) + M2C_FIELD(&D_80166278_ovl_15, u16 *, 2));
        M2C_FIELD(temp_s0, s32 *, 0x24) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x24) + sp14);
        if (M2C_FIELD(temp_s0, s32 *, 0x20) >= 0) {
            M2C_FIELD(temp_s0, s32 *, 0x20) = 0;
            M2C_FIELD(arg0, u8 *, 0x2C9) = 0U;
        }
        temp_v0 = M2C_FIELD(&D_8016627C_ovl_15, u16 *, 0) + M2C_FIELD(&D_8016627C_ovl_15, u16 *, 2);
        M2C_FIELD(&D_8016627C_ovl_15, u16 *, 0) = temp_v0;
        if (!(temp_v0 & 0x8000)) {
            M2C_FIELD(&D_8016627C_ovl_15, u16 *, 0) = 0U;
            M2C_FIELD(&D_8016627C_ovl_15, u16 *, 2) = 0U;
        }
        return;
    }
}
