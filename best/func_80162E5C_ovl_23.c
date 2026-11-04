typedef struct S_entry_801664AC {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s32 unk8;
} S_entry_801664AC;

extern S_entry_801664AC D_801664AC_ovl_23[];
void func_800385D4_ovl_01(s32, s32, s32, void *);

void func_80162E5C_ovl_23(void *arg0) {
    u32 i;
    s32 base;
    s32 flag;
    S_entry_801664AC *e;
    S_entry_801664AC *p;
    s32 v;
    s32 h;
    s16 a1v;
    s32 t;

    i = 0;
    flag = 0x05030000;
    e = D_801664AC_ovl_23;
    p = e;
    base = *(s32 *)((u8 *)arg0 + 0x234);
    do {
        h = e->unk6;
        v = e->unk8;
        e++;
        t = i + 0x90;
        a1v = *(s16 *)((u8 *)arg0 + 0x66);
        i++;
        func_800385D4_ovl_01(h | flag, (a1v << 16) | t,
                             base + v * 0x178 + 0x38, p);
        p = e;
    } while (i < 0xE);
}
