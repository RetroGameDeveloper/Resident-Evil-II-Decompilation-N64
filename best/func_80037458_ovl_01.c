typedef struct { u8 pad[0x18]; s16 f; u8 pad2[0x62]; } Elem7C;
s32 func_8003754C_ovl_01(s32 *, s32, s32, s32);
s32 func_8003768C_ovl_01(s32, s32);
extern Elem7C D_800EBD48_ovl_01[];
extern u8 D_800EBB38_ovl_01[];
extern s32 D_800EBB48_ovl_01[];
extern s32 D_800EBC48_ovl_01[];
extern u8 D_800C7650_ovl_01[];

s32 func_80037458_ovl_01(void)
{
    s32 i = 0x60;
    Elem7C *pe = &D_800EBD48_ovl_01[0x60];
    u8 *p;
    s32 *a;
    s32 ff = 0xFF;
    s32 arg0;
    s32 arg1;

    do {
        pe--;
        i--;
        pe->f = 0;
    } while (i);

    i = 8;
    do {
        u8 x;
        p = D_800EBB38_ovl_01 + i;
        x = *p;
        if (x == ff) {
            i = 0x10;
        } else {
            D_800EBB48_ovl_01[x] = -1;
            D_800EBC48_ovl_01[x] = -1;
            *p = ff;
            i++;
        }
    } while ((u32)i < 0x10);

    a = *(s32 **)(*(s32 **)(D_800C7650_ovl_01 + 0x1827C) + 0x50);
    if (a != 0) {
        if (*a != -1) {
            *(s32 *)(D_800C7650_ovl_01 + 0x18284) =
                func_8003754C_ovl_01(a, *(s32 *)(D_800C7650_ovl_01 + 0x18284), 8, ff);
        }
        arg0 = *(s32 *)(*(s32 **)(D_800C7650_ovl_01 + 0x1827C) + 0x5C);
        arg1 = *(s32 *)(*(s32 **)(D_800C7650_ovl_01 + 0x1827C) + 0x58);
        func_8003768C_ovl_01(arg0, arg1);
    }
    return 0;
}
