extern u8 D_800C7650_ovl_01[];
s32 func_80032EA4_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_801621D0_ovl_19(void *arg0) {
    u64 b;
    u8 *p;
    s32 g1;
    s32 g2;
    u32 cnt;
    s32 ret;

    b = (u64)(u32)D_800C7650_ovl_01;
    p = (u8 *)(u32)(b & 0xFFFFFFFF);
    p += 0x18000;
    g1 = *(s32 *)(p + 0x1AA8);
    g2 = *(s32 *)(p + 0x1AB0);
    cnt = *(u32 *)((u8 *)arg0 + 0x28C);
    ret = func_80032EA4_ovl_01(arg0, g1, g2, 0x80);
    if (cnt < 0xBB8 && (ret << 16) == 0) {
        *(s32 *)((u8 *)arg0 + 4) = 0x01020000;
    }
}
