extern u8 D_800DF650_ovl_01[];
extern u8 D_80160B9C_ovl_03[];
extern u8 D_80160BB8_ovl_03[];
extern u8 D_801610B8_ovl_03[];
s32 func_800439B8_ovl_01(s32, u8 *, s32, s32);

void func_8015F4C8_ovl_03(s32 arg0) {
    u32 i;
    u32 j;
    s32 sel;
    u8 v;
    u8 *p;
    u8 *hdr;

    hdr = &D_80160BB8_ovl_03[-0x1C];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 1; j++) {
            p = &D_80160BB8_ovl_03[(0x20 + i * 2 + j) * 0x28];
            v = hdr[0xB];
            p[2] = v;
            p[1] = v;
            p[0] = v;
        }
    }

    for (j = 0; j < 1; j++) {
        if (arg0 == 0) {
            if (D_800DF650_ovl_01[0x539] != 0) {
                *(s16 *)&D_80160B9C_ovl_03[D_800DF650_ovl_01[0x538] * 0x14 + 0x500 + j * 0x28 + 0x26] = 0x100;
                if (j == 0) {
                    *(s16 *)&D_80160B9C_ovl_03[D_800DF650_ovl_01[0x538] * 0x14 + 0x576] = 0;
                } else {
                    *(s16 *)&D_80160B9C_ovl_03[D_800DF650_ovl_01[0x538] * 0x14 + 0x550 + j * 0x28 + 0x26] = 0;
                }
                sel = 1;
            } else {
                if (j == 0) {
                    *(s16 *)&D_80160B9C_ovl_03[D_800DF650_ovl_01[0x538] * 0x14 + 0x526] = 0;
                } else {
                    *(s16 *)&D_80160B9C_ovl_03[D_800DF650_ovl_01[0x538] * 0x14 + 0x500 + j * 0x28 + 0x26] = 0;
                }
                sel = 0;
                *(s16 *)&D_80160B9C_ovl_03[D_800DF650_ovl_01[0x538] * 0x14 + 0x550 + j * 0x28 + 0x26] = 0x100;
            }
            *(s16 *)&D_80160B9C_ovl_03[D_800DF650_ovl_01[0x538] * 0x14 + 0x5A0 + j * 0x28 + 0x26] = 0x100;
        } else {
            *(s16 *)&D_80160B9C_ovl_03[D_800DF650_ovl_01[0x538] * 0x14 + 0x500 + j * 0x28 + 0x26] = 0x100;
            *(s16 *)&D_80160B9C_ovl_03[D_800DF650_ovl_01[0x538] * 0x14 + 0x550 + j * 0x28 + 0x26] = 0x100;
            if (j == 0) {
                *(s16 *)&D_80160B9C_ovl_03[D_800DF650_ovl_01[0x538] * 0x14 + 0x5C6] = 0;
            } else {
                *(s16 *)&D_80160B9C_ovl_03[D_800DF650_ovl_01[0x538] * 0x14 + 0x5A0 + j * 0x28 + 0x26] = 0x100;
            }
            sel = 2;
        }
    }

    p = &D_801610B8_ovl_03[sel * 0x50];
    hdr = &D_801610B8_ovl_03[-0x51C];
    v = hdr[0xB] + hdr[0x7];
    p[2] = v;
    p[1] = v;
    p[0] = v;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 1; j++) {
            *(s32 *)&D_800DF650_ovl_01[0x204] = func_800439B8_ovl_01(*(s32 *)&D_800DF650_ovl_01[0x204],
                                                                    &D_80160BB8_ovl_03[(0x20 + i * 2 + j) * 0x28], 0, 0);
        }
    }
}
