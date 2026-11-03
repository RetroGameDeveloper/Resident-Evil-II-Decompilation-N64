void func_80164E08_ovl_26(void);
s32 func_80033634_ovl_01(void);
void func_80165290_ovl_26(void *arg0, s32 arg1, s32 arg2);

typedef struct S_func_8016537C_ovl_26_arg0 {
    u8 pad_00[0x2C1];
    u8 unk_2C1;
    u8 pad_2C2[1];
    u8 unk_2C3;
} S_func_8016537C_ovl_26_arg0;

void func_8016537C_ovl_26(S_func_8016537C_ovl_26_arg0 *arg0) {
    func_80164E08_ovl_26();
    arg0->unk_2C1 = 0xC5;
    arg0->unk_2C3 = func_80033634_ovl_01() & 3;
    func_80165290_ovl_26(arg0, 7, 2);
}
