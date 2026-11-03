extern u8 D_800C7650_ovl_01[];
extern u8 D_800E8CA8_ovl_01[];
extern u8 D_800E8CC8_ovl_01[];

void func_80035AAC_ovl_01_108(void *arg0) {
    u32 base = (u32)D_800C7650_ovl_01;
    u32 a = base + 0x20000;
    s32 n = *(s16 *)(a + 0x15F8);

    if (n >= 3) {
        func_80083788_ovl_01((s32 *)D_800E8CC8_ovl_01, *((u8 *)arg0 + 0x26A));
    } else {
        u32 b = base + 0x18000;
        if (*(u32 *)(b + 0x1A5C) & 0x02000000)
            func_80083788_ovl_01((s32 *)D_800E8CC8_ovl_01, *((u8 *)arg0 + 0x26A));
        else
            func_80083788_ovl_01((s32 *)D_800E8CA8_ovl_01, *((u8 *)arg0 + 0x26A));
    }
}
