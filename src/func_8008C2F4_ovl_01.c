extern u8 D_800C7650_ovl_01[];

void func_8008C2F4_ovl_01(s32 arg0, s8 arg1, s8 arg2, s8 arg3)
{
    u32 base = (u32)D_800C7650_ovl_01;
    u32 a = arg0 * 4;
    u8 *q;

    a += base;
    a += 0x20000;
    q = (u8 *)a;
    q[0x1818] = arg1;
    q[0x1819] = arg2;
    q[0x181A] = arg3;
}

void func_8008C31C_ovl_01(s32 arg0, s8 arg1)
{
    u32 base = (u32)D_800C7650_ovl_01;
    u32 a = arg0 * 4;
    u8 *p;

    a += base;
    a += 0x20000;
    p = (u8 *)a;
    if (p[0x181A] == 1) {
        u32 b = (arg0 + 1) * 4;
        u8 *q;

        b += base;
        b += 0x20000;
        q = (u8 *)b;
        q[0x1819] = arg1;
    }
    if (p[0x181A] == 2) {
        u32 c = (arg0 - 1) * 4;
        u8 *r;

        c += base;
        c += 0x20000;
        r = (u8 *)c;
        r[0x1819] = arg1;
    }
    p[0x1819] = arg1;
}
