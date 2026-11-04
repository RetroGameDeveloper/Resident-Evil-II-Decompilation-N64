extern u8 D_801671B0_ovl_26[];
void func_80166B18_ovl_26(void *arg0, u8 arg1, s32 arg2);

void func_801653C4_ovl_26(void *arg0, s32 arg1, s32 arg2) {
    volatile u8 *tbl = D_801671B0_ovl_26;
    u32 i;
    i = func_80033634_ovl_01() & 0xF;
    func_80166B18_ovl_26(arg0, tbl[i], 0xA);
    i = func_80033634_ovl_01() & 0xF;
    func_80166B18_ovl_26(arg0, tbl[i], 0xA);
    *(s8 *)((u8 *)arg0 + 0x2D8) = 0xF;
    func_80164E08_ovl_26(arg0, arg1, arg2);
}
