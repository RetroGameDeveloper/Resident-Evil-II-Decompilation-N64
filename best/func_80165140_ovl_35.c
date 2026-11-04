extern u8 D_80166700_ovl_35[];
void func_801661F0_ovl_35(void *, s32, s32);
void func_80077D48_ovl_01(s32, void *);
void func_80165248_ovl_35(void *, s32, s32);
void func_80166520_ovl_35(void *, s32);
void func_8016472C_ovl_35(void *, s32, s32);

void func_80165140_ovl_35(void *arg0, s32 arg1, s32 arg2) {
    u32 idx = *(u8 *)((u8 *)arg0 + 5);
    volatile u8 *base = D_80166700_ovl_35;
    func_801661F0_ovl_35(arg0, 0, base[idx - 1]);
    func_80077D48_ovl_01(6, arg0);
    if (*(u8 *)((u8 *)arg0 + 0x2BC) == 0) {
        *(s16 *)((u8 *)arg0 + 6) = 0x200;
        func_80165248_ovl_35(arg0, arg1, arg2);
    } else {
        if (*(u8 *)((u8 *)arg0 + 0x2C5) != 0) {
            *(s16 *)((u8 *)arg0 + 0x68) = 0;
            func_80166520_ovl_35(arg0, 0);
        }
        *(s16 *)((u8 *)arg0 + 6) = 0x100;
        func_8016472C_ovl_35(arg0, arg1, arg2);
    }
}
