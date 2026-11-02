extern u8 D_800C7650_ovl_01[];
s32 func_80032EA4_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80033634_ovl_01(s32 arg0);

typedef struct {
    u8 unk_00[4];
    s32 unk_04;
    u8 unk_08[0x1A2];
    s16 unk_1AA;
    u8 unk_1AC[0x46];
    s16 unk_1F2;
    s16 unk_1F4;
    u8 unk_1F6[0x96];
    s32 unk_28C;
    u8 unk_290[0x26];
    u8 unk_2B6;
    u8 unk_2B7[9];
    u16 unk_2C0;
    u8 unk_2C2[2];
    u8 unk_2C4;
} S_arg;

void func_801627A0_ovl_29(S_arg *arg0)
{
    u8 *base;
    u32 s2;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 s3;
    s32 v;

    s3 = 0;
    base = (u8 *)D_800C7650_ovl_01 + 0x18000;
    s2 = arg0->unk_28C;
    t1 = func_80032EA4_ovl_01(arg0, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 0x4C8);
    t2 = func_80032EA4_ovl_01(arg0, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 0x270);
    t3 = func_80032EA4_ovl_01(arg0, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 0x400);

    if (arg0->unk_2C0 == 0 || arg0->unk_1F2 < 0x64) {
        arg0->unk_1AA = 1;
        arg0->unk_04 = 0x01060000;
        return;
    }
    if ((t3 << 16) == 0) {
        if (s2 < 0x5DC) {
            arg0->unk_04 = 0x01050000;
            arg0->unk_1F4 = 0x28;
            return;
        }
    }
    if (arg0->unk_2B6 == 0) {
        if (base[0x1CEF] == 0) {
            if ((t3 << 16) == 0) {
                if (s2 < 0xD48) {
                    if (s2 >= 0x9C5) {
                        arg0->unk_04 = 0x01020000;
                        s3 = 1;
                    }
                }
            }
        }
    }
    if (s2 < 0x9C4) {
        if ((t1 << 16) == 0) {
            if (base[0x1CEF] == 0) {
                if (arg0->unk_2B6 < 0xA) {
                    arg0->unk_04 = 0x01040000;
                    s3 = 1;
                }
            }
        }
    }
    if (arg0->unk_2B6 != 0) {
        if (base[0x1CEF] == 0) {
            if ((t2 << 16) == 0) {
                if (s2 < 0xD48) {
                    if (*(u16 *)(base + 0x1A7A) & 4) {
                        if ((func_80033634_ovl_01(t3) & 3) == 0) {
                            arg0->unk_04 = 0x01080000;
                            s3 = 1;
                        }
                    }
                }
            }
        }
    }
    if (*(s16 *)(base + 0x1C72) != 0) {
        if (*(s16 *)(base + 0x1C72) < 0x3C) {
            if (s3 == 1) {
                v = arg0->unk_2C4 + 1;
                arg0->unk_2C4 = v;
                if ((u8)v < 3) {
                    arg0->unk_04 = 0x01030000;
                    return;
                }
                arg0->unk_2C4 = 0;
            }
        }
    }
}
