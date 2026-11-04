extern u8 D_80166260_ovl_23[];
s32 func_80033634_ovl_01(void);
void func_800377B0_ovl_01(s32, s32, void *, s16 *);

typedef struct S_ovl23_entry {
    u16 idx;
    u8 pad[0x10];
    s16 cond;
} S_ovl23_entry;

void func_801620C0_ovl_23(S_func_80162870_ovl_23_arg0 *arg0) {
    volatile s16 sp10;
    volatile s16 sp12;
    volatile s16 sp14;
    S_ovl23_entry *e;
    u8 *obj;
    u16 idx;
    s16 cond;
    u32 i;

    i = 0;
    e = (S_ovl23_entry *)D_80166260_ovl_23;
    do {
        idx = e->idx;
        cond = e->cond;
        obj = (u8 *)arg0->unk_234 + idx * 0x178;
        if (cond != 0) {
            sp14 = 0;
            sp12 = 0;
            sp10 = 0;
            func_800377B0_ovl_01(0x040E2000, (func_80033634_ovl_01() & 0xFF) * 0x10, obj + 0x38, (s16 *)&sp10);
        }
        i++;
        e++;
    } while (i < 0xF);
}
