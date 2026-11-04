extern s16 D_80166630_ovl_22[];
void func_800377B0_ovl_01(s32, s16, s32, void *);

void func_80162890_ovl_22(u8 *arg0) {
    u8 *tbl = (u8 *)D_80166630_ovl_22;
    u8 *rec = tbl + 6;
    u32 i = 0;
    s32 base = *(s32 *)(arg0 + 0x234);
    s32 idx;

    do {
        idx = *(s32 *)(rec + 2);
        func_800377B0_ovl_01(*(s16 *)rec | 0x05040000, *(s16 *)(arg0 + 0x66),
                             base + idx * 0x178 + 0x38, tbl);
        rec += 12;
        tbl += 12;
        i++;
    } while (i < 7);
}
