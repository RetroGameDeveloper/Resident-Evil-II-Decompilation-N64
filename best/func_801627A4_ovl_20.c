extern s32 func_80032EA4_ovl_01(void *, s32, s32, s32);
extern u8 D_800C7650_ovl_01[];
void func_801627A4_ovl_20(void *arg0) {
    u64 b = (u64)(u32)D_800C7650_ovl_01;
    u8 *p = (u8 *)(u32)(b & 0xFFFFFFFF) + 0x18000;
    func_80032EA4_ovl_01(arg0, *(s32 *)(p + 0x1AA8), *(s32 *)(p + 0x1AB0), 0x400);
    func_80032EA4_ovl_01(arg0, *(s32 *)(p + 0x1AA8), *(s32 *)(p + 0x1AB0), 0x320);
    *(s32 *)((u8 *)arg0 + 4) = 0x01010000;
}
