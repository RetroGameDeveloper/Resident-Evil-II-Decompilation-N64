typedef union U4_6590C { s32 w; u8 b[4]; } U4_6590C;

typedef struct S_6590C {
    s32 unk_00;
    U4_6590C unk_04;
    u8 unk_08[0x1E0];
    s32 unk_1E8;
    u8 unk_1EC[0x70];
    u8 unk_25C;
    u8 unk_25D[0x12];
    u8 unk_26F;
} S_6590C;

extern u8 D_801667C8_ovl_35[];

void func_80052C00_ovl_01(s32, s32);
void func_80052C9C_ovl_01(s32, s32, s32);
s32 func_80089D34_ovl_01(S_6590C *, s32, s32, s32);
s32 func_80033634_ovl_01(void);
void func_801661F0_ovl_35(S_6590C *, u8, s32);
void func_80077B0C_ovl_01(s32, void *);

void func_8016590C_overlay_035(S_6590C *arg0, s32 arg1, s32 arg2) {
    switch (arg0->unk_04.b[1]) {
    case 0:
        arg0->unk_04.b[1] = 1;
        arg0->unk_1E8 = 0x01000F00;
        arg0->unk_25C |= 1;
        func_80052C00_ovl_01(0xA, 0);
        func_80052C9C_ovl_01(0x1E, 0x96, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100)) {
            arg0->unk_04.b[1] = 2;
            arg0->unk_1E8 = 0x02000F00;
        }
        break;
    case 1:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        if ((func_80033634_ovl_01() & 7) == 0) {
            func_801661F0_ovl_35(arg0, D_801667C8_ovl_35[func_80033634_ovl_01() & 3], 2);
            func_80052C00_ovl_01((func_80033634_ovl_01() & 3) + 3, func_80033634_ovl_01() & 3);
            func_80052C9C_ovl_01((func_80033634_ovl_01() & 3) + 2, 0xFA, func_80033634_ovl_01() & 3);
            func_80052C00_ovl_01((func_80033634_ovl_01() & 3) + 3, (func_80033634_ovl_01() & 3) + 3);
            func_80052C9C_ovl_01((func_80033634_ovl_01() & 3) + 2, 0xFA, (func_80033634_ovl_01() & 3) + 3);
        }
        break;
    case 2:
        arg0->unk_04.b[1] = 4;
        arg0->unk_1E8 = 0x03000F00;
        func_80052C9C_ovl_01(3, 0x78, 0);
        func_80052C9C_ovl_01(0xA, 0x78, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100)) {
            arg0->unk_04.w = 0x01000000;
            arg0->unk_25C &= 0xFE;
            arg0->unk_26F &= 0x7F;
            arg0->unk_00 &= ~0x42;
        }
        break;
    case 3:
        break;
    case 4:
        break;
    }
    if (arg0->unk_04.b[2] != 0) {
        arg0->unk_04.b[2] = 0;
        func_80077B0C_ovl_01(0x04020001, (u8 *)arg0 + 0x28);
    }
}
