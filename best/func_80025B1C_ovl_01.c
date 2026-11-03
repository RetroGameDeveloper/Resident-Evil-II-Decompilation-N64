extern u8 D_800C4F20_ovl_01[];
extern volatile s32 D_800C4F10_ovl_01;
extern volatile s32 D_800C4F14_ovl_01;
extern void func_8006CE20_ovl_01(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_80025B1C_ovl_01(s32 i) {
    u8 *base = D_800C4F20_ovl_01;
    s32 *p = (s32 *)(base + i * 0x28);
    func_8006CE20_ovl_01(p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7], p[8], p[9],
                          D_800C4F10_ovl_01, D_800C4F14_ovl_01);
}
