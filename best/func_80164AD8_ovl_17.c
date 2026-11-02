typedef void (*DispatchFn)(void *, s32, s32);
extern volatile DispatchFn D_80167E80_ovl_17[];
void func_801674BC_ovl_17(void);
void func_801620C8_ovl_17(void *, s32, s32, u8);
void func_80164D9C_ovl_17(void *, s32, s32);
void func_80164AD8_ovl_17(void *arg0, s32 arg1, s32 arg2) {
    u8 *field = (u8 *)arg0 + 0x2B4;
    if (field[0x1E] != 0) {
        func_801674BC_ovl_17();
        *(s32 *)((u8 *)arg0 + 4) = (field[0x1B] << 16) + (field[0x1C] << 8) + field[0x1D] + 0x01000000;
        func_801620C8_ovl_17(arg0, arg1, arg2, field[0x1D]);
    } else if ((*(u16 *)((u8 *)arg0 + 0x1AA) & 1) == 0) {
        D_80167E80_ovl_17[((u8 *)arg0)[6]](arg0, arg1, arg2);
    } else {
        func_80164D9C_ovl_17(arg0, arg1, arg2);
    }
}
