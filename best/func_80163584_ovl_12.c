typedef struct S_func_80163584_ovl_12_arg0 {
    u8 unk_00[0x5];
    u8 unk_05;
    union { s16 w; struct { u8 lo; u8 hi; } b; } unk_06;
    u8 unk_08[0x1E0];
    s32 unk_1E8;
    u8 unk_1EC[0x8];
    u16 unk_1F4;
} S_func_80163584_ovl_12_arg0;

extern u8 D_80166C08_ovl_12[];
void func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, u32 arg3);
void func_80166458_ovl_12(void *arg0);

void func_80163584_ovl_12(S_func_80163584_ovl_12_arg0 *arg0, s32 arg1, s32 arg2) {
    u32 ret;
    u32 b;
    u8 idx;
    volatile u8 *base;
    s16 v;

    if (arg0->unk_06.b.hi == 0) {
        arg0->unk_06.b.hi = 1;
        ret = func_80033634_ovl_01();
        base = D_80166C08_ovl_12;
        idx = ret & 7;
        b = base[idx];
        arg0->unk_1E8 = 0x1F00;
        arg0->unk_1F4 = b;
    }
    v = arg0->unk_1F4 - 1;
    arg0->unk_1F4 = v;
    if (v == 0) {
        arg0->unk_1E8 = 0x01000F00;
        arg0->unk_05 = 1;
        arg0->unk_06.w = 0;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
    func_80166458_ovl_12(arg0);
}
