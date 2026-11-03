extern volatile u8 D_80119E9C_ovl_01[];
extern s32 D_800E90B4_ovl_01;
s32 func_80040A44_ovl_01(s32 arg0);

s32 func_8007880C_ovl_01(s32 arg0, s32 arg1)
{
    u8 v = D_80119E9C_ovl_01[(arg0 & 0xFF) * 2];
    u32 a = arg1 & 7;
    s32 r;

    if (a < v) {
        r = 1;
        goto done;
    }
    if (v != a) {
        r = 0;
        goto done;
    }
    r = 1;
    if (!(arg1 & 8)) {
        r = 0;
    }
done:
    return r;
}

s32 func_80078854_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 d = arg2 - arg0;
    s32 n = arg3 - arg1;
    s32 v;

    if (d != 0) {
        s32 r = func_80040A44_ovl_01((n << 12) / d);
        s32 b = 0x1000;

        if (d < 0) {
            b = 0x800;
        }
        v = (b - r) & 0xFFF;
        goto done;
    }
    v = 0x400;
    if (n > 0) {
        v += 0x800;
    }
done:
    return v;
}

void func_80026AC0_ovl_01(void)
{
    D_800E90B4_ovl_01 = 1;
}
