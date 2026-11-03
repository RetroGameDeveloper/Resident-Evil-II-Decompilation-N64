typedef struct S_func_801646B4_ovl_17_arg0 {
    u8 pad_00[4];
    union {
        s32 unk_04;
        struct { u8 pad_04b; u8 unk_05; u8 unk_06; u8 pad_07; } b;
    } u04;
    u8 pad_08[0x28 - 0x08];
    s32 unk_28;
    u8 pad_2C[0x30 - 0x2C];
    s32 unk_30;
    u8 pad_34[0x1A8 - 0x34];
    s16 unk_1A8;
    u8 pad_1AA[0x2D8 - 0x1AA];
    u8 unk_2D8;
} S_func_801646B4_ovl_17_arg0;

typedef void (*F801646B4)(void *, s32, s32);

s16 func_80074D94_ovl_01(s32, s32);
extern F801646B4 volatile D_80167E0C_ovl_17[];

void func_801646B4_ovl_17(S_func_801646B4_ovl_17_arg0 *arg0, s32 arg1, s32 arg2) {
    F801646B4 volatile *tbl;
    s32 idx;
    if (arg0->u04.b.unk_06 == 0) {
        arg0->unk_2D8 = arg0->u04.b.unk_05;
    }
    if (arg0->unk_1A8 == 0) {
        arg0->unk_1A8 = func_80074D94_ovl_01(arg0->unk_28, arg0->unk_30);
    }
    idx = arg0->u04.b.unk_05 - 1;
    tbl = D_80167E0C_ovl_17;
    tbl[idx](arg0, arg1, arg2);
}
