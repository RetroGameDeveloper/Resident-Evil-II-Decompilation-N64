extern u16 *D_8001289C;
extern u32 D_800128A0;
extern u32 D_800128A4;

void func_800053F4(u16 *p)
{
    u32 lo, hi;

    D_8001289C = p;
    lo = p[0];
    D_8001289C = p + 1;
    D_800128A0 = lo;
    hi = p[1];
    D_8001289C = p + 2;
    D_800128A4 = 0x20;
    D_800128A0 = lo | (hi << 16);
}
