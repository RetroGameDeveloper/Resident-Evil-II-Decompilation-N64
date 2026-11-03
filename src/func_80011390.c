extern u8 D_80012948;
extern u8 *D_80012950;
s32 func_800072E0(void);
void func_80000DD4(void *p, s32 v);
void func_80007300(s32);

void func_80011390(void)
{
    s32 s0 = func_800072E0();
    s32 n = 2;

    *(s16 *)(D_80012950 + 0x10) = n;
    func_80000DD4(&D_80012948, n);
    func_80007300(s0);
}
