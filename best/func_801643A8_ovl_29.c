extern s32 func_80032EA4_ovl_01(s32, s32, s32, s32);
extern u8 D_800C7650_ovl_01[];
void func_801643A8_ovl_29(void *arg0) {
    u8 tmp[0x38];
    u32 t;
    u64 b;
    u8 *p;
    tmp[0];
    t = *(u32 *)((u8 *)arg0 + 0x28C);
    b = (u64)(u32)D_800C7650_ovl_01;
    p = (u8 *)(u32)(b & 0xFFFFFFFF);
    p += 0x18000;
    if ((func_80032EA4_ovl_01((s32)arg0, *(s32 *)(p + 0x1AA8), *(s32 *)(p + 0x1AB0), 0x400) << 16) == 0 && t >= 0x9C5) {
        *(s32 *)((u8 *)arg0 + 4) = 0x01010000;
    }
}
