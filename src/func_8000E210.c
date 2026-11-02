typedef struct {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[2];
    u16 unk6;
    u8 pad8[0xC];
    u16 unk14;
    u8 unk16;
    u8 unk17;
    u8 pad18[4];
    u16 unk1C;
    u16 unk1E;
    s16 unk20;
    s16 unk22;
    s16 unk24;
    s16 unk26;
} S8000E210;

void func_8000E210(S8000E210 *arg0) {
    u32 a3;
    u16 sh;

    a3 = (arg0->unk16 == 2) ? 0x100 : 0x200;
    sh = 6 - arg0->unk17;
    if (arg0->unk14 == 0x33) {
        s32 v;
        s32 x;
        u32 y;

        v = (s32)arg0->unk2 >> sh;
        arg0->unk1C = v;
        arg0->unk1E = (a3 / (u16)v) * 4;
        x = arg0->unk1C * 2;
        arg0->unk24 = x;
        arg0->unk22 = (0x7FF / arg0->unk1C) + 1;
        y = arg0->unk1E * x;
        arg0->unk26 = y;
        arg0->unk20 = ((y & 0xFFFE) >> 1) - 1;
    } else {
        s32 v;
        s32 x;

        v = ((s32)arg0->unk6 >> sh) + 1;
        arg0->unk1C = v;
        arg0->unk1E = (a3 / (u16)v) * 4;
        x = ((s32)arg0->unk2 >> sh) * 2;
        arg0->unk24 = x;
        arg0->unk20 = arg0->unk1C * 16 - 1;
        arg0->unk22 = arg0->unk1E - 1;
        arg0->unk26 = arg0->unk1E * x;
    }
}
