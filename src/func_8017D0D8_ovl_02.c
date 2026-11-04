extern void func_8017D194_ovl_02(void);
extern s32 func_8017BE7C_ovl_02(void);
extern void func_8017D1DC_ovl_02(void);
extern void func_8017D384_ovl_02(void);
extern void func_8017D3E0_ovl_02(void);

s32 func_8017D0D8_ovl_02(void)
{
    u32 n;
    for (;;) {
        func_8017D194_ovl_02();
        n = func_8017BE7C_ovl_02();
        switch (n) {
        case 0x1B3:
            func_8017D1DC_ovl_02();
            break;
        case 0x1B8:
            func_8017D384_ovl_02();
            break;
        case 0x100:
            func_8017D3E0_ovl_02();
            return 1;
        case 0x1B7:
            return 0;
        }
    }
}
