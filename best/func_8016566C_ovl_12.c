typedef struct S_func_8016566C_ovl_12_arg0 {
    u8 unk_00[5];
    s8 unk_05;
    u8 unk_06[0x26E - 0x06];
    u8 unk_26E;
    u8 unk_26F[0x2BB - 0x26F];
    u8 unk_2BB;
} S_func_8016566C_ovl_12_arg0;

void func_8016566C_ovl_12(S_func_8016566C_ovl_12_arg0 *arg0, s32 arg1, s32 arg2) {
    u32 x;
    u8 n;
    u32 i;

    x = arg0->unk_26E;
    n = 2 - x / 3;
    arg0->unk_2BB = n;
    if (n != 0) {
        i = 0;
        do {
            i++;
            func_80166900_ovl_12(arg0, func_80033634_ovl_01() & 0xF, 8);
        } while (i < arg0->unk_2BB);
    }
    arg0->unk_05 = 1;
    func_80164CDC_ovl_12(arg0, arg1, arg2);
}
