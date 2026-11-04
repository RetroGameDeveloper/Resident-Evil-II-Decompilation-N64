extern void func_80035AAC_ovl_01_108(void);
extern void func_80077D48_ovl_01(s32, void *);
extern void func_80164D10_ovl_12(void *, s32, s32);

void func_80165AB8_ovl_12(void *arg0, s32 arg1, s32 arg2) {
    u32 temp;

    func_80035AAC_ovl_01_108();
    temp = *(u8 *)((u8 *)arg0 + 0x2BF) & 0x3F;
    *(u8 *)((u8 *)arg0 + 0x2BF) = 0;
    func_80164D10_ovl_12(arg0, arg1, arg2);
    if (*(u8 *)((u8 *)arg0 + 0x2CD) == 0) {
        func_80077D48_ovl_01(7, arg0);
    }
    if (temp == 2) {
        *(s16 *)((u8 *)arg0 + 0x1E0) = 0;
    }
}
