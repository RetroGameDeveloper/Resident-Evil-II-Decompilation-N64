extern u8 D_80168B74_ovl_14[];

extern void func_80077D48_ovl_01(s32 arg0, u8 *arg1);
extern void func_80162B24_ovl_14(u8 *arg0, u8 *arg1, s32 arg2);
extern void func_80032F24_ovl_01(u8 *arg0, s32 arg1, s32 arg2);
extern void func_80083800_ovl_01(s32 arg0, void *arg1, void *arg2);
extern s32 func_8008A974_ovl_01(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80166BFC_ovl_14(u8 *arg0);

void func_80166D68_ovl_14(u8 *o, s32 a1, s32 a2)
{
    s16 p[4];
    s32 one = 1;

    if (*(u16 *)(o + 0x26C) & 0x20) {
        switch (o[7]) {
        case 0:
            func_80077D48_ovl_01(7, o);
            func_80162B24_ovl_14(o, D_80168B74_ovl_14 + o[0x2CB] * 8, one);
            *(s16 *)(o + 0x1E0) = 100;
            *(s16 *)(o + 0x1E4) = 0;
            *(s16 *)(o + 0x1E2) = 0;
            func_80032F24_ovl_01(o, *(s16 *)(*(s32 *)(o + 0x2C4) + 0x66), 0x80);
            *(s32 *)(o + 0x1E8) = 0x08000300;
            o[7] = one;
            *(u16 *)(o + 0x2C8) &= 0xFFFD;
            goto common;
        case 1:
            goto common;
        case 2:
            if (*(s16 *)(o + 0x1F2) >= 0) {
                func_80166BFC_ovl_14(o);
            } else {
                *(s32 *)(o + 4) = 0x03000000;
            }
            goto end;
        }
    } else {
        switch (o[7]) {
        case 0:
            func_80077D48_ovl_01(7, o);
            func_80162B24_ovl_14(o, D_80168B74_ovl_14 + o[0x2CB] * 8, 0);
            *(s16 *)(o + 0x1E0) = 100;
            *(s16 *)(o + 0x1E4) = 0;
            *(s16 *)(o + 0x1E2) = 0;
            func_80032F24_ovl_01(o,
                (s16)(*(u16 *)(*(s32 *)(o + 0x2C4) + 0x66) + 0x800), 0x80);
            *(s32 *)(o + 0x1E8) = 0x08000300;
            o[7] = one;
            *(u16 *)(o + 0x2C8) &= 0xFFFD;
            goto common;
        case 1:
            goto common;
        case 2:
            if (*(volatile s16 *)(o + 0x1F2) < 0) {
                *(s32 *)(o + 4) = 0x03000000;
            } else {
                func_80166BFC_ovl_14(o);
            }
            goto end;
        }
    }
    goto end;
common:
    if (*(s16 *)(o + 0x1E0) > 0) {
        *(s16 *)(o + 0x1E0) = *(u16 *)(o + 0x1E0) - 6;
    }
    func_80083800_ovl_01(*(s16 *)(*(s32 *)(o + 0x2C4) + 0x66), o + 0x1E0, p);
    *(s32 *)(o + 0x28) += *(s16 *)((u8 *)p + 0);
    *(s32 *)(o + 0x30) += *(s16 *)((u8 *)p + 4);
    o[7] += func_8008A974_ovl_01(o, a1, a2, 0x400);
end:
    return;
}
