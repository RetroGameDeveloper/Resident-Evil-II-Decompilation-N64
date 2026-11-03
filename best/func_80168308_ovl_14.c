/* identical to func_80168158_ovl_14 (matched), with its names changed by decompdecomp */
extern void func_80077D48_ovl_01(s32, void *);
extern s32 func_801676DC_ovl_14(void *);
extern s32 func_80036C14_ovl_01(void *, s32, s32, s32);

void func_80168308_ovl_14(void *a) {
    u8 *p = a;
    s32 one = 1;

    switch (p[6]) {
    case 0:
        func_801676DC_ovl_14(p);
        break;
    case 1:
        func_80077D48_ovl_01(8, p);
        p[6] = p[6] + 1;
        break;
    case 2:
        if (func_80036C14_ovl_01(p, 11, 15, 0)) {
            p[0x2B7] = one;
            p[6] = p[6] + 1;
        }
        break;
    }
}
