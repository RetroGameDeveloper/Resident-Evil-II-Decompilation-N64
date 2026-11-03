typedef struct {
    void (*unk0)(void *);
    void (*unk4)(void *, s32);
    u8 pad8[0xC];
    s32 unk14;
} S80028DF0_obj;

typedef struct {
    void *unk0;
    s32 unk4;
    u8 pad8[0x14];
    s32 unk1C;
    u8 *unk20;
    s32 unk24;
} S80028DF0_work;

typedef struct {
    S80028DF0_obj *unk0;
    u8 pad4[0x10];
    S80028DF0_work *unk14;
} S80028DF0_arg;

extern u8 D_800B6AD0_ovl_01[];

s32 func_80004CFC(s32 arg0, void *arg1, s32 arg2, void *arg3);

s32 func_80028DF0_ovl_01(S80028DF0_arg *arg0) {
    S80028DF0_work *s0;
    s32 ret;

    s0 = arg0->unk14;
    ret = func_80004CFC(s0->unk1C, s0->unk20, 0, D_800B6AD0_ovl_01);
    if (ret == 0) {
        if (s0->unk24 != 0) {
            arg0->unk0->unk14 = 0x24;
            arg0->unk0->unk0(arg0);
        }
        arg0->unk0->unk14 = 0x6A;
        arg0->unk0->unk4(arg0, -1);
        ret = 2;
        s0->unk20[0] = 0xFF;
        s0->unk20[1] = 0xD9;
    }
    s0->unk4 = ret;
    s0->unk24 = 0;
    s0->unk0 = s0->unk20;
    return 1;
}
