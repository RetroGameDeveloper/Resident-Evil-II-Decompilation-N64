void func_80077D48_ovl_01(s32, void *);
void func_8016528C_ovl_15(void *);
s32 func_80036C98_ovl_01(void *, s32, s32, s32);

void func_801644B0_ovl_15(u8 *p)
{
    switch (p[6]) {
    case 0:
        if (!p[0x2CE])
            func_80077D48_ovl_01(0, p);
        p[0x26F] |= 0x80;
        func_8016528C_ovl_15(p);
        p[6] = p[6] + 1;
        /* fall through */
    case 1:
        if (func_80036C98_ovl_01(p, 10, 3, 0)) {
            *(s32 *)(p + 4) = 0x01010000;
            p[0x26F] &= 0x7F;
        }
        break;
    }
}
