extern u8 D_800161B4[];
extern s32 D_800161BC, D_800161C0, D_80016224, D_8001290C;
s32 func_80006650(void *, s32);
s32 func_800072E0(void);
s32 func_80007300(s32);

void *func_80007DF0(void)
{
    u8 *p = D_800161B4;
    s32 old;
    s32 v;

    p[0] = 2;
    D_800161BC = 0xA5000000;
    p[1] = 3;
    p[4] = 6;
    p[2] = 6;
    p[5] = 1;
    p[3] = 2;
    *(volatile s32 *)0xA4600024 = 3;
    *(volatile s32 *)0xA4600028 = 6;
    *(volatile s32 *)0xA460002C = 6;
    *(volatile s32 *)0xA4600030 = 2;
    D_800161C0 = 0;
    func_80006650(p + 0x10, 0x60);
    v = func_800072E0();
    old = D_8001290C;
    D_8001290C = (s32)(p - 4);
    D_80016224 = (s32)(p - 4);
    *(s32 *)(p - 4) = old;
    func_80007300(v);
    return p - 4;
}
