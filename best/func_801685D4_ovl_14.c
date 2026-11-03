extern s32 func_80032D44_ovl_01(s16, s16, s16, s16);
extern u8 D_800E10D0_ovl_01[];
s16 func_801685D4_ovl_14(u8 *arg0) {
    u64 base = (u64)(u32)D_800E10D0_ovl_01;
    s16 *g = (s16 *)(u32)(base & 0xFFFFFFFF);
    u16 temp;
    s32 var;
    temp = (func_80032D44_ovl_01(*(s16 *)(arg0 + 0x2A), *(s16 *)(arg0 + 0x32), g[0x15], g[0x19]) - *(u16 *)(arg0 + 0x66)) & 0xFFF;
    var = temp;
    if ((s16)temp >= 0x801) {
        var = temp | 0xF000;
    }
    return var;
}
