extern u8 D_801247F8_ovl_01[];
s32 func_800072E0(void);
void func_80007300(s32);
s32 func_80085194_ovl_01(s32 arg0) {
    u8 *base;
    s32 idx;
    s32 tmp;
    u8 *slot;
    base = D_801247F8_ovl_01;
    tmp = func_800072E0();
    idx = *(s32 *)(base + 4);
    if (idx >= 0) {
        *(s32 *)(base + 4) = *(s32 *)(base + idx * 16 + 0x28);
    }
    func_80007300(tmp);
    *(s32 *)(base + (idx >> 5) * 4 + 0x14) |= 1 << (idx & 0x1F);
    slot = base + idx * 16;
    *(s32 *)(slot + 0x28) = arg0;
    *(s32 *)(slot + 0x30) = 0;
    *(s32 *)(slot + 0x2C) = 0;
    *(s32 *)(slot + 0x24) = idx | (*(s32 *)D_801247F8_ovl_01 << 8);
    *(s32 *)D_801247F8_ovl_01 = *(s32 *)D_801247F8_ovl_01 + 1;
    *(s32 *)(D_801247F8_ovl_01 + 0x10) = *(s32 *)(D_801247F8_ovl_01 + 0x10) + 1;
    return *(s32 *)(slot + 0x24);
}
