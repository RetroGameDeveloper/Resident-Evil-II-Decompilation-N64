s32 func_80036C98_ovl_01(void *, s32, s32, s32);

void func_80165A60_ovl_22(void *arg0)
{
    u8 *p = (u8 *)arg0;
    s32 r;

    switch (p[7]) {
    case 0:
        r = func_80036C98_ovl_01(arg0, 9, 15, 0);
        p[7] = p[7] + r;
        break;
    case 1:
        *(s32 *)(p + 4) = 0x01010000;
        break;
    }
}
