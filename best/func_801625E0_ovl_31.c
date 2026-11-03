extern u8 D_800C7650_ovl_01[];
void func_80032EA4_ovl_01(s32, s32, s32, s32);
void func_801625E0_ovl_31(s32 arg0) {
    u8 *p = D_800C7650_ovl_01 + 0x18000;
    func_80032EA4_ovl_01(arg0, *(s32 *)(p + 0x1AA8), *(s32 *)(p + 0x1AB0), 0x400);
    func_80032EA4_ovl_01(arg0, *(s32 *)(p + 0x1AA8), *(s32 *)(p + 0x1AB0), 0x320);
}
