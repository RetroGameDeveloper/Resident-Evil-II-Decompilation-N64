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

M2C_UNK D_80036EA0(void *);                         /* extern */
M2C_UNK func_80033A0C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK, void *); /* extern */
M2C_UNK func_80089D34_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_80163448_ovl_21(void *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8FC8_ovl_01;
extern s32 D_80163A80_ovl_21;
extern s32 D_80163A84_ovl_21;
extern s32 D_80163A88_ovl_21;
extern s32 D_80163A8C_ovl_21;
extern M2C_UNK func_801632B8_ovl_21;

void func_80161F7C_ovl_21(void *arg0) {
    void *temp_s1;
    void *temp_v0;

    temp_s1 = M2C_FIELD(arg0, void **, 0x234);
    M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x182FC) = &func_801632B8_ovl_21;
    M2C_FIELD(arg0, s16 *, 0x1F2) = 0xA;
    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    M2C_FIELD(arg0, s8 *, 0x25D) = 0;
    D_80163A80_ovl_21 = 0;
    D_80163A84_ovl_21 = 0;
    D_80163A8C_ovl_21 = 0;
    D_80163A88_ovl_21 = 0;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(arg0, s16 *, 0x2B4) = 0;
    M2C_FIELD(arg0, s16 *, 0x2B6) = 0;
    M2C_FIELD(arg0, s16 *, 0x2B8) = 0;
    M2C_FIELD(arg0, s16 *, 0x2BA) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C2) = 0;
    M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) | 0x2000);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x800000);
    temp_v0 = arg0 + 0x2B4;
    M2C_FIELD(temp_v0, s16 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s16 *, 0xA) = 0;
    M2C_FIELD(arg0, s16 *, 0x2BC) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C3) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000000;
    func_80089D34_ovl_01(0x100);
    M2C_FIELD(temp_s1, s32 *, 0x2F0) = 0;
    M2C_FIELD(temp_s1, s32 *, 0x468) = 0;
    M2C_FIELD(arg0, s16 *, 0x1DA) = 0xC00;
    M2C_FIELD(arg0, s16 *, 0x1D8) = 0;
    M2C_FIELD(arg0, s16 *, 0x1DC) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x02000000);
    M2C_FIELD(arg0, s32 *, 0x1B8) = (s32) M2C_FIELD(&D_800E8FC8_ovl_01, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x1BC) = (s32) M2C_FIELD(&D_800E8FC8_ovl_01, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C0) = (s32) M2C_FIELD(&D_800E8FC8_ovl_01, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x1C4) = (s32) M2C_FIELD(&D_800E8FC8_ovl_01, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x1C8) = (s32) M2C_FIELD(&D_800E8FC8_ovl_01, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x1CC) = (s32) M2C_FIELD(&D_800E8FC8_ovl_01, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x1D0) = (s32) M2C_FIELD(&D_800E8FC8_ovl_01, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1D4) = (s32) M2C_FIELD(&D_800E8FC8_ovl_01, s32 *, 0x1C);
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x64;
    M2C_FIELD(arg0, s32 *, 0x284) = 1;
    M2C_FIELD(arg0, s16 *, 0x130) = 0;
    M2C_FIELD(arg0, s16 *, 0x134) = 0;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s16 *, 0x12C) = 1;
    M2C_FIELD(arg0, s16 *, 0x136) = 1;
    M2C_FIELD(arg0, s16 *, 0x12E) = 1;
    M2C_FIELD(arg0, s16 *, 0x138) = 1;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x320;
    D_80036EA0(arg0);
    M2C_FIELD(arg0, s16 *, 0x66) = (s16) ((func_80033634_ovl_01() & 0xFF) * 0x10);
    M2C_FIELD(arg0, s16 *, 0x68) = 0;
    func_80163448_ovl_21(arg0);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x1C000002);
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0, 0, arg0 + 0x28);
}
