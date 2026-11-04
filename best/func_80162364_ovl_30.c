void func_80167B58_ovl_30(void *arg0, s32 arg1, s32 arg2, s16 arg3);

void func_80162364_ovl_30(S_func_80162BC0_ovl_13_arg0 *arg0) {
    u16 v;

    v = arg0->unk_1F4 - 0x200;
    arg0->unk_1F4 = v;
    if ((s16) v < 0) {
        arg0->unk_1F4 = 0;
    }
    func_80167B58_ovl_30(arg0, 9, 0, arg0->unk_1F4);
    func_80167B58_ovl_30(arg0, 6, 0, arg0->unk_1F4);
}
