extern u8 D_80167D30_ovl_30[];
void func_80165430_ovl_30(void *arg0) {
    u8 type;
    s32 phase, i, count;
    u8 *table;
    type = *((u8*)arg0 + 5);
    if (type == 16 && *((u8*)arg0 + 0x2BF) != 0) return;
    if (type == 16) *((u8*)arg0 + 0x2BF) = 30;
    phase = ((((u8*)arg0)[0x26E] % 3) != 0) * 4;
    if (type == 10) count = 6; else if (type == 16) count = 6; else count = 3;
    i = 0;
    if (count == 0) return;
    table = D_80167D30_ovl_30;
    do {
        u32 idx;
        i++;
        idx = (phase + (func_80033634_ovl_01() & 255)) & 7;
        func_801672F4_ovl_30(arg0, table[idx], 2);
    } while ((u32)i < (u32)count);
}
