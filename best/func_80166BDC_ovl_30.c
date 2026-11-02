typedef struct S_func_80166BDC_ovl_30_arg0 {
    u8 unk_00[5];
    u8 unk_05;
    u8 unk_06[2];
    u8 unk_08;
    u8 unk_09[0x66 - 0x09];
    u16 unk_66;
    u8 unk_68[0x1E8 - 0x68];
    s32 unk_1E8;
    u8 unk_1EC[0x1F2 - 0x1EC];
    s16 unk_1F2;
    u8 unk_1F4[0x214 - 0x1F4];
    void *unk_214;
    u8 unk_218[0x234 - 0x218];
    void *unk_234;
    u8 unk_238[0x250 - 0x238];
    void *unk_250;
    u8 unk_254[0x25C - 0x254];
    u8 unk_25C;
} S_func_80166BDC_ovl_30_arg0;

void func_8003334C_ovl_01(void *arg0, void *arg1, void *arg2, s32 arg3);
void func_80052C00_ovl_01(s32 arg0, s32 arg1);
void func_80052C9C_ovl_01(s32 arg0, s32 arg1, s32 arg2);
void func_80052D40_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80089D34_ovl_01(void *arg0, void *arg1, void *arg2, s32 arg3);
void func_801672F4_ovl_30(void *arg0, s32 arg1, s32 arg2);

void func_80166BDC_ovl_30(S_func_80166BDC_ovl_30_arg0 *arg0, void *arg1, void *arg2) {
    u8 *p;
    u8 *p250;
    s32 i;
    s32 off;

    p250 = (u8 *)arg0->unk_250;

    switch (arg0->unk_05) {
    case 0:
        arg0->unk_05 = 1;
        arg0->unk_1F2 = -1;
        arg0->unk_25C |= 1;
        arg0->unk_1E8 = ((p250[0x1E9] - 1) << 16) + 0x06000F00;
        func_80052C00_ovl_01(8, 0);
        func_80052C9C_ovl_01(0x14, 0xFA, 4);
        func_80052D40_ovl_01(0x23, 0xFA, 0x3C, 0x18);
        func_80052C00_ovl_01(3, 0x1E);
        func_80052C00_ovl_01(2, 0x28);
        func_80052C00_ovl_01(3, 0x3C);
        func_80052C9C_ovl_01(8, 0xFA, 0x3C);
        func_80052C9C_ovl_01(0x23, 0x50, 0x44);
        func_80052C00_ovl_01(2, 0x44);
        func_80052C00_ovl_01(2, 0x4B);
        func_80052C00_ovl_01(3, 0x50);
        func_80052C00_ovl_01(3, 0x64);
        func_80052C9C_ovl_01(6, 0xFA, 0x64);
        func_80052C00_ovl_01(2, 0x6A);
        func_80052C9C_ovl_01(8, 0xFA, 0x6E);
        func_80052D40_ovl_01(0x3C, 0xFA, 0, 0x76);
        /* fall through */
    case 1:
        arg0->unk_66 = arg0->unk_66 + 0x800;
        func_8003334C_ovl_01(arg0, arg1, arg2, 0);
        arg0->unk_66 = arg0->unk_66 - 0x800;
        arg0->unk_05 = arg0->unk_05 + func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        break;
    }

    if ((*(s32 *)((u8 *)arg0->unk_214) & 0x10000) != 0) {
        func_801672F4_ovl_30(arg0, 8, 0);
        p = (u8 *)arg0->unk_234;
        *(s32 *)(p + 0xBC0) &= ~1;
        if (arg0->unk_08 & 1) {
            i = 0xF;
            off = 0x1608;
            do {
                i++;
                *(s32 *)((u8 *)arg0->unk_234 + off) &= ~1;
                off += 0x178;
            } while (i < 0x13);
        }
        p = (u8 *)arg0->unk_234;
        *(s32 *)(p + 0x0) |= 0x80;
        *(s32 *)(p + 0x130) = 0x40;
        *(s32 *)(p + 0x134) = 0x0101020;
        p = (u8 *)arg0->unk_234 + 0xD38;
        *(s32 *)(p + 0x0) |= 0x80;
        *(s32 *)(p + 0x130) = 0x40;
        *(s32 *)(p + 0x134) = 0x0101020;
        p = (u8 *)arg0->unk_234 + 0x1318;
        *(s32 *)(p + 0x0) |= 0x80;
        *(s32 *)(p + 0x130) = 0x40;
        *(s32 *)(p + 0x134) = 0x0101020;
    }
}
