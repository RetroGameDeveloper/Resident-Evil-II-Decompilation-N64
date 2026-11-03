extern u8 D_800C7650_ovl_01[];
s32 func_80032EA4_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80165BE8_ovl_13(void *arg0, s32 arg1);
void func_80165F00_ovl_13(void *arg0);

void func_80163860_ovl_13(void *arg0) {
    u64 b;
    u8 *p;
    s32 g1;
    s32 g2;

    b = (u64)(u32)D_800C7650_ovl_01;
    p = (u8 *)(u32)(b & 0xFFFFFFFF);
    p += 0x18000;
    g1 = *(s32 *)(p + 0x1AA8);
    g2 = *(s32 *)(p + 0x1AB0);
    if (func_80032EA4_ovl_01(arg0, g1, g2, 0x60) != 0 || (*(u16 *)((u8 *)arg0 + 0x2C6) & 2) == 0) {
        func_80165BE8_ovl_13(arg0, 4);
    }
    func_80165F00_ovl_13(arg0);
}
