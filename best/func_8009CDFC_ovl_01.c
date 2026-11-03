void func_8009BED4_ovl_01(void);
void func_8009C094_ovl_01(void *);

void func_8009BE98_ovl_01(void *arg0, s32 arg1) {
    void *p = arg0;
    s32 v = arg1;
    func_8009BED4_ovl_01();
    *(s32 *)((u8 *)p + 4) = v;
    func_8009C094_ovl_01(p);
}

void func_8002751C_ovl_01(s32, s32);
void func_80027530_ovl_01(s32, s32, s32, s32);
s32 func_800276B4_ovl_01(u8);

extern u8 D_801326C8_ovl_01;
extern u8 D_801326CA_ovl_01;
extern u8 D_801326CB_ovl_01;

void func_8009CDFC_ovl_01(void) {
    u8 *p = &D_801326C8_ovl_01;

    if (*p & 1) {
        if (func_800276B4_ovl_01(D_801326CB_ovl_01) != 0) {
            D_801326CA_ovl_01 = 1;
            *p ^= 1;
        }
    } else {
        func_80027530_ovl_01(D_801326CB_ovl_01 | 0x200, -0x100, 7, 1);
        D_801326CA_ovl_01 = 0;
        *p |= 1;
        func_8002751C_ovl_01(5, 0);
    }
}
