typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[0x16];
    u16 unk_18;
    u8 pad_1A[2];
    u8 unk_1C;
    u8 pad_1D[1];
    u8 unk_1E;
    u8 pad_1F[0x4D];
    s32 unk_6C;
    u8 pad_70[0xC];
} S800EBD48;

extern S800EBD48 D_800EBD48_ovl_01[];

s32 func_80038EC8_ovl_01(u32 arg0, u32 arg1, u32 arg2) {
    S800EBD48 *p;
    u32 i = 0;

    if (arg2 != 0) {
        arg0 &= 0xFF;
        arg1 &= 0xFF;
        p = D_800EBD48_ovl_01;
        do {
            if (p->unk_1C == arg0 && p->unk_1E == arg1 && p->unk_6C == arg2) {
                p->unk_01 = 0;
                p->unk_00 = 0;
                p->unk_18 = 0;
            }
            i++;
            p++;
        } while (i < 0x60);
        return 0;
    }
    arg0 &= 0xFF;
    arg1 &= 0xFF;
    p = D_800EBD48_ovl_01;
    do {
        if (p->unk_1C == arg0 && p->unk_1E == arg1) {
            p->unk_01 = 0;
            p->unk_00 = 0;
            p->unk_18 = 0;
        }
        i++;
        p++;
    } while (i < 0x60);
    return 0;
}
