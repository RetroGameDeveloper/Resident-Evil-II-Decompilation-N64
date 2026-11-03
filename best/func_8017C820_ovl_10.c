extern s32 D_800C527C_ovl_01;
extern s16 D_800E10C4_ovl_01;
extern void *D_8017E860_ovl_10;
extern void func_8017C96C_ovl_10(void);
extern void func_8017CC6C_ovl_10(void);

void func_8017C820_ovl_10(void) {
    u8 *p = (u8 *)(D_800C527C_ovl_01 + 0x47A60);
    D_800E10C4_ovl_01 = 0x1F15;
    D_8017E860_ovl_10 = p;
    *(s16 *)p = 0;
    *(s16 *)(p + 6) = 0;
    func_8017C96C_ovl_10();
    func_8017CC6C_ovl_10();
}
