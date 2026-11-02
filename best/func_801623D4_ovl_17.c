/* func_801623D4_ovl_17 - ovl_17 */
s32 func_80032B8C_ovl_01(void *, s16);
s8 func_80033634_ovl_01(void);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80166978_ovl_17(void *, s32);
s32 func_80166A84_ovl_17(void *, s16);
s32 func_801678B8_ovl_17(void *);
extern u8 D_80167D68_ovl_17[];

void func_801623D4_ovl_17(u8 *p, s32 arg1, s32 arg2) {
    u8 *base;
    u8 *tbl;
    s32 v;
    u16 v1;

    base = D_80167D68_ovl_17;
    switch (*(u8 *)(p + 6)) {
    case 0:
        tbl = base + (*(u8 *)(p + 5) - 1) * 0xC;
        v = (*(s32 *)tbl << 24) + 0x300;
        *(u8 *)(p + 6) = 1;
        *(s16 *)(p + 0x1E4) = 0;
        *(s32 *)(p + 0x1E8) = v;
        *(s16 *)(p + 0x1F4) = func_80033634_ovl_01() & 0x2E;
        /* fall through */
    case 1:
        *(u16 *)(p + 0x66) += func_80166A84_ovl_17(p,
            *(s16 *)(base + (*(u8 *)(p + 5) - 1) * 0xC + 6));
        func_80089D34_ovl_01(p, arg1, arg2, 0x400);
        func_801678B8_ovl_17(p);
        func_80166978_ovl_17(p, 1);
        *(u16 *)(p + 0x1F6) = *(u16 *)(p + 0x1E0);
        v1 = *(u16 *)(p + 0x1F4) - 1;
        *(u16 *)(p + 0x1F4) = v1;
        *(u16 *)(p + 0x1E0) += *(u16 *)(base + (*(u8 *)(p + 5) - 1) * 0xC + 0xA);
        if ((s16)v1 == -1) goto set4;
        if (*(u8 *)(p + 0x2BE) != 0) goto end;
        if (*(u8 *)(p + 0x2D3) != 0) {
            if ((*(u32 *)(p + 0x290) & 0x3FFFFFFF) < 0x5DC) goto set4;
        } else {
            if (*(u32 *)(p + 0x28C) < 0x5DC) goto set4;
        }
        goto end;
set4:
        *(s32 *)(p + 4) = 0x01000000;
end:
        break;
    }
    func_80032B8C_ovl_01(p, *(s16 *)(p + 0x2B6));
}
