extern u8 D_80013890;
extern volatile s32 D_A4500000;
extern s32 func_800115B0(void);
extern s32 func_8000E800(s32);

s32 func_80011510(s32 a0, s32 a1)
{
    s32 s1 = a1;
    s32 s0 = a0;
    u8 flag = D_80013890;

    if (flag)
        s0 -= 0x2000;

    if (((a0 + s1) & 0x1FFF) == 0)
        D_80013890 = 1;
    else
        D_80013890 = 0;

    if (func_800115B0())
        return -1;

    D_A4500000 = func_8000E800(s0);
    *(volatile u32 *)0xA4500004 = s1;
    return 0;
}
