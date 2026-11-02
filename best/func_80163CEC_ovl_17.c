extern u8 D_800C7650_ovl_01[];
extern u16 D_80167DDC_ovl_17[];
void func_80033634_ovl_01(void);
void func_80089D34_ovl_01(void *, s32, s32, s32);
void func_80166BF0_ovl_17(void *, s32);
void func_80166C3C_ovl_17(void *, s32, s32, s32);
void func_801678B8_ovl_17(void *);

void func_80163CEC_ovl_17(u8 *arg0, s32 arg1, s32 arg2) {
    switch (arg0[6]) {
    case 0: arg0[6] = 1; break;
    case 1: arg0[6] = 2; break;
    case 2: arg0[6] = 3; break;
    case 3: arg0[6] = 4; break;
    case 4: arg0[6] = 5; break;
    case 5: arg0[6] = 6; break;
    case 6: arg0[6] = 0; break;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
    func_801678B8_ovl_17(arg0);
}
