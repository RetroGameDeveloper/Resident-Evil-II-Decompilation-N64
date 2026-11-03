s32 func_80032F94_ovl_01_48(void *, s16, s32);
s32 func_80032F24_ovl_01(void *, s16, s16);
s32 func_80077F60_ovl_01(s32, s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);

extern u8 D_800C7650_ovl_01[];

typedef struct {
    u8 pad_00[0x214];
    s32 *unk_214;
    u8 pad_218[0x260 - 0x218];
    s16 unk_260;
    s16 unk_262;
} S_80081F7C;

s32 func_80081F7C_ovl_01(S_80081F7C *arg0, s32 arg1, s32 arg2) {
    s32 v;

    if (func_80032F94_ovl_01_48(arg0, arg0->unk_260, 0x80) == 0) {
        return 1;
    }
    func_80032F24_ovl_01(arg0, arg0->unk_260, arg0->unk_262);
    v = *arg0->unk_214;
    if (v & 0x4000) {
        func_80077F60_ovl_01(0, (((v & 0x2000) >> 13) * 3) + 4, arg0);
        *(u16 *)(D_800C7650_ovl_01 + 0x18000 + 0x1A7A) |= 2;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    return 0;
}
