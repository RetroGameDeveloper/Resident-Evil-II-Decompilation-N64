typedef struct { u8 pad[8]; u16 idx; u16 flags; } Entry;
extern Entry *D_80168CD0_ovl_14;
extern u8 D_80168A90_ovl_14[];
extern s32 func_80033634_ovl_01(void);
extern void func_800377B0_ovl_01(s32, s32, s32, Entry *);

void func_80162C84_ovl_14(void *a) {
    s32 base = *(s32 *)((u8 *)a + 0x234);
    Entry *e;
    u8 *bp;
    if (*(u8 *)((u8 *)a + 0x2CF) == 0) {
        D_80168CD0_ovl_14 = (Entry *)D_80168A90_ovl_14;
        *(void **)((u8 *)a + 0x2D8) = func_80162C84_ovl_14;
        (*(u8 *)((u8 *)a + 0x2CF))++;
        return;
    }
    bp = (u8 *)0x80170000;
    do {
        Entry *cur = *(Entry **)(bp - 0x7330);
        if (!(cur->flags & 2)) {
            s32 addr = base + cur->idx * 0x178;
            func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) << 1) + 0x1000) | 0x06000000, 0, addr + 0x38, *(Entry **)(bp - 0x7330));
        }
        e = *(Entry **)(bp - 0x7330);
        *(Entry **)(bp - 0x7330) = (Entry *)((u8 *)e + 0xC);
    } while (e->flags & 1);
    if (*(u8 *)((u8 *)a + 0x2CF) == 0x10)
        *(void **)((u8 *)a + 0x2D8) = 0;
    (*(u8 *)((u8 *)a + 0x2CF))++;
}
