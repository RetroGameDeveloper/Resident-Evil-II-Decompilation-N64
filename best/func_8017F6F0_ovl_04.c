extern u8 D_800C7650_ovl_01[];
extern u8 D_800E91E2,D_80119E13,D_80119E14;
extern u8 D_8012BF38_ovl_01[];
extern void func_80076074_ovl_01(s32);
extern void func_800750E0_ovl_01(void);
void func_8017F6F0_ovl_04(void) {
    u8 *s0 = D_800C7650_ovl_01 + 0x20000;
    u8 *s1 = D_800C7650_ovl_01 + 0x18000;
    u32 v = *(u32 *)(s0 + 0x1494);
    *(u32 *)(s1 + 0x1A5C) = v;
    if (v & 0x04000000) *(u32 *)(s1 + 0x1A3C) |= 0x20;
    func_80076074_ovl_01(s0[0x1489]);
    D_8012BF38_ovl_01[0xA] = s0[0x1498];
    D_8012BF38_ovl_01[8] = s0[0x1499];
    *(u16 *)(s1+0x1C72)=*(u16 *)(s0+0x149A);
    s1[0x1D36]=s0[0x148F];
    *(u16 *)(s1+0x1D34)=*(u16 *)(s0+0x1490);
    D_80119E13=s0[0x148C]; D_80119E14=s0[0x148D];
    func_800750E0_ovl_01();
    s1[0x539]=s0[0x1489]; D_800E91E2=s0[0x148E];
}
