extern volatile u8 D_800C7650_ovl_01[];
extern volatile u32 D_80163864_ovl_21[];

void func_801632B8_ovl_21(void) {
    u32 v = D_800C7650_ovl_01[0x1A88 + 0x18000];
    u32 idx = (v ^ 0xF) == 0;
    ((void (*)(void))D_80163864_ovl_21[idx])();
}
