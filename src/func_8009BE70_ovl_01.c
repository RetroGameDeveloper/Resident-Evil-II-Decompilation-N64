typedef struct S_800EBB34 { u8 unk_00[4]; u16 unk_04; } S_800EBB34;
extern S_800EBB34 *D_800EBB34_ovl_01;

void func_8003AF28(void) {
    D_800EBB34_ovl_01->unk_04 += 0x100;
}

void func_8009BED4_ovl_01(void);
void func_8009C094_ovl_01(void *);

s32 func_8009BE70_ovl_01(void *arg0) {
    func_8009BED4_ovl_01();
    return *(s32 *)((u8 *)arg0 + 4);
}

void func_8009BE98_ovl_01(void *arg0, s32 arg1) {
    func_8009BED4_ovl_01();
    *(s32 *)((u8 *)arg0 + 4) = arg1;
    func_8009C094_ovl_01(arg0);
}

void func_8002751C_ovl_01(s32, s32);
void func_80027530_ovl_01(s32, s32, s32, s32);
s32 func_800276B4_ovl_01(u8);

extern u8 D_801326C8_ovl_01;
extern u8 D_801326CA_ovl_01;
extern u8 D_801326CB_ovl_01;

void func_8009CDFC_ovl_01(void) {
    if (D_801326C8_ovl_01 & 1) {
        if (func_800276B4_ovl_01(D_801326CB_ovl_01) != 0) {
            D_801326CA_ovl_01 = 1;
            D_801326C8_ovl_01 ^= 1;
        }
    } else {
        func_80027530_ovl_01(D_801326CB_ovl_01 | 0x200, -0x100, 7, 1);
        D_801326CA_ovl_01 = 0;
        D_801326C8_ovl_01 |= 1;
        func_8002751C_ovl_01(5, 0);
    }
}
