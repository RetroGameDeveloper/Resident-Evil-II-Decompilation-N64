extern volatile u8 D_8012FF48_ovl_01[];
extern u8 D_800E8D18_ovl_01[];
extern u8 D_800C7650_ovl_01[];
s32 func_800837DC_ovl_01(void *bits, s32 n);
s32 func_8004BF9C_ovl_01(s32, s32, s32, s32);

void func_8008C23C_ovl_01(s32 arg0, s32 arg1, s32 arg2, u32 arg3)
{
    s32 s0;

    s0 = 0;
    if (arg3 < 0x64) {
        volatile u8 *base = D_8012FF48_ovl_01;

        s0 = *(base + arg3 * 8 + 1) & 0xF;
    }
    arg2 |= 0x4000;
    if (s0 != 0 && func_800837DC_ovl_01(D_800E8D18_ovl_01, s0) != 0) {
        func_8004BF9C_ovl_01(arg0, arg1, arg2, s0 + 0x91);
    } else {
        func_8004BF9C_ovl_01(arg0, arg1, arg2, arg3);
    }
}

void func_8008C2F4_ovl_01(s32 arg0, s8 arg1, s8 arg2, s8 arg3)
{
    u32 a = (u32)D_800C7650_ovl_01 + arg0 * 4 + 0x20000;
    u8 *q = (u8 *)a;

    q[0x1818] = arg1;
    q[0x1819] = arg2;
    q[0x181A] = arg3;
}

void func_8008C31C_ovl_01(s32 arg0, s8 arg1)
{
    u8 *p = D_800C7650_ovl_01;

    if (p[arg0 * 4 + 0x2181A] == 1) {
        p[(arg0 + 1) * 4 + 0x21819] = arg1;
    }
    if (p[arg0 * 4 + 0x2181A] == 2) {
        p[(arg0 - 1) * 4 + 0x21819] = arg1;
    }
    p[arg0 * 4 + 0x21819] = arg1;
}
