typedef struct S_28A50 S_28A50;
typedef struct S_sub28A50 S_sub28A50;
typedef struct S_sub8_28A50 S_sub8_28A50;
typedef struct S_sub168_28A50 S_sub168_28A50;

struct S_sub28A50 {
    void (*unk_00)(void);
    void (*unk_04)(S_28A50 *, s32);
    u8 unk_08[0xC];
    s32 unk_14;
    s32 unk_18;
};

struct S_sub8_28A50 {
    void (*unk_00)(S_28A50 *);
    s32 unk_04;
    s32 unk_08;
};

struct S_sub168_28A50 {
    u8 unk_00[4];
    s32 (*unk_04)(S_28A50 *, s32, s32 *, s32);
};

struct S_28A50 {
    S_sub28A50 *unk_00;
    u8 unk_04[4];
    S_sub8_28A50 *unk_08;
    u8 unk_0C[4];
    s32 unk_10;
    u8 unk_14[0x4C];
    s32 unk_60;
    u8 unk_64[0x14];
    s32 unk_78;
    u8 unk_7C[0xEC];
    S_sub168_28A50 *unk_168;
};

void func_80028A50_ovl_01(S_28A50 *arg0, s32 arg1, s32 arg2) {
    s32 sp10;

    if (arg0->unk_10 != 0xCB) {
        arg0->unk_00->unk_14 = 0xE;
        arg0->unk_00->unk_18 = arg0->unk_10;
        arg0->unk_00->unk_00();
    }
    if ((u32)arg0->unk_78 >= (u32)arg0->unk_60) {
        arg0->unk_00->unk_14 = 0x6D;
        arg0->unk_00->unk_04(arg0, -1);
    }
    if (arg0->unk_08 != NULL) {
        arg0->unk_08->unk_04 = arg0->unk_78;
        arg0->unk_08->unk_08 = arg0->unk_60;
        arg0->unk_08->unk_00(arg0);
    }
    sp10 = 0;
    arg0->unk_168->unk_04(arg0, arg1, &sp10, arg2);
    arg0->unk_78 += sp10;
}
