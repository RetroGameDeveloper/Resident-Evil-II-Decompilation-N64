s16 func_800358A4_ovl_01(s16, s16);
s16 func_8003593C_ovl_01(s16, s16);
s32 func_80040998_ovl_01(s32);
void func_80041048_ovl_01(s32 *, s32 *);
void func_80041484_ovl_01(s16, s32 *);
void func_800415B8_ovl_01(s32, s32 *);
void func_8004251C_ovl_01(s32 *, s32, s32 *);
void func_80042854_ovl_01(s32 *, s32 *, s32 *);
void func_8004A028_ovl_01(s32, s32 *, s32 *, s32);
extern u8 D_800C7650_ovl_01[];
extern u32 D_800E8FC8_ovl_01[8];
extern u8 D_800E10E4_ovl_01[];

#define R(o) (*(s32 *)(stk + (o)))
#define S(o) (*(s16 *)(stk + (o)))
#define U(o) (*(u16 *)(arg0 + (o)))
#define SL(o) (*(s16 *)(arg0 + (o)))
#define L(o) (*(s32 *)(arg0 + (o)))

void func_800352F4_ovl_01(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5,
                          s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10,
                          s32 arg11, s32 arg12) {
    u8 stk[0x80];
    u8 *fp;
    s32 s0, s5, s6, s1, s2;
    s32 v0, v1, tv0, tv0_2;
    s32 i;

    R(0xB0) = (s32)(stk + 0x20);
    R(0x98) = arg4;
    R(0x9C) = arg6;
    R(0xA0) = arg9;
    R(0xA4) = arg10;
    R(0xA8) = arg11;
    R(0xAC) = arg12;
    fp = arg0 + 0x38;
    R(0x20) = (s32)((U(0x58) + U(0x132)) << 16);
    S(0x24) = (s16)(U(0x5C) + U(0x130));
    func_80041048_ovl_01((s32 *)(stk + 0x20), (s32 *)stk);
    func_80041484_ovl_01(SL(0x5A), (s32 *)stk);
    R(0x20) = (s32)((u16)arg2);
    S(0x24) = 0;
    func_80042854_ovl_01((s32 *)stk, (s32 *)(stk + 0x20), (s32 *)(stk + 0x28));
    s1 = (s16)(arg7 - arg2);
    v0 = R(0x28) + L(0x4C);
    R(0x28) = v0;
    R(0x38) = v0 + ((s1 * S(2)) >> 12);
    v1 = R(0x2C) + L(0x50);
    R(0x2C) = v1;
    R(0x2C) = v1 + arg3;
    R(0x3C) = v1 + (s16)arg8 + ((s1 * S(8)) >> 12);
    s0 = *(s32 *)(D_800C7650_ovl_01 + 0x18000 + 0x1CB4);
    S(0x22) = (s16)arg7;
    v1 = R(0x30) + L(0x54);
    R(0x30) = v1;
    R(0x40) = v1 + ((s1 * S(0xE)) >> 12);
    func_8004251C_ovl_01((s32 *)D_800E10E4_ovl_01, s0 + 8, (s32 *)(stk + 0x58));
    func_8004251C_ovl_01((s32 *)(stk + 0x58), s0 + 0xBC8, (s32 *)(s0 + 0xBF8));
    for (i = 0; i < 8; i++)
        R(0x58 + i * 4) = D_800E8FC8_ovl_01[i];
    R(0x6C) = R(0x28);
    R(0x70) = R(0x2C);
    R(0x74) = R(0x30);
    func_8004A028_ovl_01(s0 + 0xBF8, (s32 *)(stk + 0x58), (s32 *)(stk + 0x78), R(0x30));
    S(0x20) = (s16)(U(0x1E) << 4);
    S(0x22) = (s16)(U(0x22) << 4);
    S(0x24) = (s16)(U(0x26) << 4);
    func_80042854_ovl_01((s32 *)arg1, (s32 *)(stk + 0x20), (s32 *)(stk + 0x48));
    L(0x4C) = (R(0x48) >> 4) + L(0x14);
    L(0x50) = (R(0x4C) >> 4) + L(0x18);
    L(0x54) = (R(0x50) >> 4) + L(0x1C);
    for (i = 0; i < 8; i++)
        R(i * 4) = D_800E8FC8_ovl_01[i];
    func_80041484_ovl_01(-SL(0x5A), (s32 *)stk);
    S(0x20) = (s16)((SL(0x4E) - S(0x2A)) * 4);
    S(0x22) = (s16)((SL(0x52) - S(0x2E)) * 4);
    S(0x24) = (s16)((SL(0x56) - S(0x32)) * 4);
    func_80042854_ovl_01((s32 *)stk, (s32 *)(stk + 0x20), (s32 *)(stk + 0x48));
    tv0 = func_800358A4_ovl_01(S(0x4A), S(0x4E));
    S(0x20) = (s16)((SL(0x4E) - S(0x3A)) * 4);
    S(0x22) = (s16)((SL(0x52) - S(0x3E)) * 4);
    S(0x24) = (s16)((SL(0x56) - S(0x42)) * 4);
    func_800415B8_ovl_01(-(SL(0x5C) + SL(0x130)), (s32 *)stk);
    func_80042854_ovl_01((s32 *)stk, (s32 *)(stk + 0x20), (s32 *)(stk + 0x48));
    tv0_2 = func_8003593C_ovl_01((s16)(-S(0x50)), S(0x4E));
    R(0xB8) = arg6 << 16;
    v1 = (SL(0x130) - SL(0x130) / (s16)arg5)
       - (((s16)arg4 * func_80040998_ovl_01((s16)tv0 - (s16)arg6)) >> 12);
    S(0x130) = (s16)(v1 & 0xFFF);
    if (v1 & 0x800)
        SL(0x130) = (s16)((v1 & 0xFFF) - 0x1000);
    v0 = (SL(0x132) - SL(0x132) / (s16)R(0xA4))
       - (((s16)R(0xA0) * func_80040998_ovl_01((s16)tv0_2 - (s16)R(0xA8))) >> 12);
    S(0x132) = (s16)(v0 & 0xFFF);
    if (v0 & 0x800)
        SL(0x132) = (s16)((v0 & 0xFFF) - 0x1000);
    SL(0x5C) = (s16)tv0;
    R(0x58) = tv0_2 << 16;
    for (i = 0; i < 8; i++)
        R(i * 4) = D_800E8FC8_ovl_01[i];
    func_80041048_ovl_01((s32 *)(arg0 + 0x58), (s32 *)fp);
    SL(0x5A) = S(0xAE);
    func_80041484_ovl_01((s16)R(0xAC), (s32 *)fp);
}
