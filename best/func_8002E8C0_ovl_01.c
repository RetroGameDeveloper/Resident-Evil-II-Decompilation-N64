extern u8 D_800C7650_ovl_01[];
void func_80027530_ovl_01(s32, s32, s32, s32);
void func_800275F8_ovl_01(s32, s32, s32, s32);
void func_8002E838_ovl_01(void);

void func_8006D8C0_ovl_01(void) {
    if (*(u32 *)(D_800C7650_ovl_01 + 0x19A5C) & 0x80000) {
        func_80027530_ovl_01(0x102, -0x8000, 2, 7);
        func_800275F8_ovl_01(2, 0x1800, 0, 0);
    }
}

void func_8002E8C0_ovl_01(void **arg0) __attribute__((noreturn));
void func_8002E8C0_ovl_01(void **arg0) {
    arg0[0] = (void *)((u8 *)func_8002E838_ovl_01 + 0x8);
    arg0[1] = (void *)((u8 *)func_8002E838_ovl_01 + 0x64);
}
