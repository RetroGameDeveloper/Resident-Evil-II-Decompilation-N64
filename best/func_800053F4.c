extern u32 D_800128AC;
extern s32 D_800C5278;
extern u16 *D_8001289C;
extern u32 D_800128A0;
extern u32 D_800128A4;
u32 func_80005438(u32);
s32 func_80004C9C(s32);
s32 func_80004CFC(s32, s32, s32, s32);

u32 func_80005E84(u32 a, u32 b)
{
    u32 c;
    a &= 0xFFFF;
    if (a == 0xFFFF)
        return b;
    D_800128AC = D_800C5278 + 0xAF800;
    c = func_80005438(a);
    if (D_800128AC < c)
        __builtin_trap();
    return c;
}

void func_800053F4(u16 *p)
{
    u16 lo, hi;
    D_8001289C = p;
    lo = p[0];
    D_8001289C = p + 1;
    D_800128A0 = lo;
    hi = p[1];
    D_8001289C = p + 2;
    D_800128A4 = 0x20;
    D_800128A0 = lo | (hi << 16);
}

u32 func_800051B8(u32 arg0)
{
    u32 a = arg0 & 0xFFFF;
    u32 ret = func_80004C9C(a);
    s32 tmp = (D_800128AC - ret) & ~7;
    D_800128AC = tmp;
    if (func_80004CFC(a, tmp, 0, 0) == 0)
        __builtin_trap();
    return ret;
}

s32 func_80005134(u8 *arg0, u8 *arg1)
{
    u8 *start = arg0;
    s32 n, v;
    do {
        n = *(s32 *)arg1;
        arg1 += 4;
        if (n > 0) {
            while (--n != -1) {
                *(s32 *)arg0 = *(s32 *)arg1;
                arg1 += 4;
                arg0 += 4;
            }
        } else if (n < 0) {
            v = *(s32 *)arg1;
            arg1 += 4;
            while (++n != 1) {
                *(s32 *)arg0 = v;
                arg0 += 4;
            }
        }
    } while (n != 0);
    return arg0 - start;
}
