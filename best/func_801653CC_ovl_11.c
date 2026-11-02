extern u8 D_8016DD24_ovl_11[];
extern u8 D_800C7650_ovl_01[];
s32 func_80033634_ovl_01(void);
void func_800336B0_ovl_01(void *, s32, s32);
void func_800377B0_ovl_01(s32, s32, s32, u16 *);
void func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_80032DEC_ovl_01(void *, s32, s32, s32);

typedef struct S_8016DD24_blob { u8 b[8]; } S_8016DD24_blob;

typedef struct S_801653CC_arg0 {
    /* 0x000 */ u8 unk_00[4];
    /* 0x004 */ s16 unk_04;
    /* 0x006 */ u8 unk_06;
    /* 0x007 */ u8 unk_07[0x1AA - 0x007];
    /* 0x1AA */ u16 unk_1AA;
    /* 0x1AC */ u8 unk_1AC[0x1E8 - 0x1AC];
    /* 0x1E8 */ union {
        s32 unk_1E8;
        struct { u16 unk_1E8l; u8 unk_1EA; u8 unk_1EB; } b;
    } u1E8;
    /* 0x1EC */ u8 unk_1EC[0x214 - 0x1EC];
    /* 0x214 */ s32 *unk_214;
    /* 0x218 */ u8 unk_218[0x234 - 0x218];
    /* 0x234 */ s32 unk_234;
    /* 0x238 */ u8 unk_238[0x26F - 0x238];
    /* 0x26F */ u8 unk_26F;
    /* 0x270 */ u8 unk_270[0x2B6 - 0x270];
    /* 0x2B6 */ u16 unk_2B6;
    /* 0x2B8 */ u8 unk_2B8[0x2D0 - 0x2B8];
    /* 0x2D0 */ u8 unk_2D0;
    /* 0x2D1 */ u8 unk_2D1[0x2D5 - 0x2D1];
    /* 0x2D5 */ u8 unk_2D5;
} S_801653CC_arg0;

void func_801653CC_ovl_11(S_801653CC_arg0 *arg0, s32 arg1, s32 arg2) {
    S_8016DD24_blob tbl = *(S_8016DD24_blob *)D_8016DD24_ovl_11;
    u16 arr[3];
    s32 v;
    u8 *base;

    switch (arg0->unk_06) {
    case 0:
        arg0->unk_06 = 1;
        v = func_80033634_ovl_01();
        arg0->u1E8.unk_1E8 = (tbl.b[v & 7] << 24) + 0x700;
        arg0->unk_26F |= 0x80;
        /* fallthrough */
    case 1:
        arg0->unk_06 += func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        if (arg0->u1E8.b.unk_1EA == 0) {
            func_800336B0_ovl_01(arg0, 0, 1);
        }
        if (*(s32 *)arg0->unk_214 & 0x10000) {
            arr[0] = 0xC8;
            arr[1] = 0;
            arr[2] = 0;
            func_800377B0_ovl_01(0x13D0, (func_80033634_ovl_01() & 0xFF) << 4,
                                 arg0->unk_234 + 0xBF8, arr);
        }
        if ((arg0->unk_1AA & 0x4000) == 0) {
            arg0->unk_06 = 3;
        }
        break;
    case 2:
        v = func_80033634_ovl_01();
        arg0->unk_06 = 1;
        arg0->u1E8.unk_1E8 = (tbl.b[v & 7] << 24) + 0x30000;
        break;
    case 3:
        arg0->unk_06 = 4;
        arg0->u1E8.unk_1E8 = 0x15000F00;
        arg0->unk_2D0 = 2;
        arg0->unk_26F &= 0x7F;
        arg0->unk_2B6 |= 0x10;
        if (arg0->unk_2D5 == 0) {
            if (!(func_80033634_ovl_01() & 1)) {
                if (func_80033634_ovl_01() & 1) {
                    func_80077D48_ovl_01(0xB, arg0);
                } else if (func_80033634_ovl_01() & 1) {
                    func_80077D48_ovl_01(0xA, arg0);
                }
            }
            arg0->unk_2D5 = 0x96;
        }
        /* fallthrough */
    case 4:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
            arg0->unk_06 = 5;
            arg0->unk_2B6 &= 0xFFEF;
        }
        break;
    case 5:
        *(s32 *)((u8 *)arg0 + 4) = 0x1010000;
        arg0->unk_26F &= 0x7F;
        arg0->unk_2B6 &= 0xFFEF;
        break;
    case 6:
        arg0->unk_06 = 7;
        v = func_80033634_ovl_01();
        arg0->u1E8.unk_1E8 = 0x15000F00 + ((v & 7) << 16);
        /* fallthrough */
    case 7:
        base = D_800C7650_ovl_01 + 0x18000;
        func_80032DEC_ovl_01(arg0, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 0x10);
        arg0->unk_06 += func_80089D34_ovl_01(arg0, arg1, arg2, 0x10100);
        break;
    case 8:
        arg0->unk_06 = 0;
        break;
    }
}
