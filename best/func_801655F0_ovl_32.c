typedef void (*Fn_801655F0)(void *, void *);
extern volatile Fn_801655F0 D_80167380_ovl_32[];
void func_8006671C_ovl_01(void *, void *, s32, s32);

void func_801655F0_ovl_32(u8 *arg0, u8 *arg1) {
    D_80167380_ovl_32[arg0[0x2B4]](arg0, arg1);
    func_8006671C_ovl_01(arg0, arg1, *(s32 *)(arg1 + 0xB4), *(s32 *)(arg1 + 0x120));
}
