extern s32 *D_80129D68_ovl_01;
extern s32 *D_80129D6C_ovl_01;
extern s32 *func_80005F4C(s32 id, s32 *buf);

typedef struct {
    u8 pad0[0x18000];
    u8 at18000[0x8000];
    u8 at20000[0x2000];
} Big;

extern Big D_800C7650_ovl_01;

void func_800359DC_ovl_01(void) {
    u8 *hi = D_800C7650_ovl_01.at18000;
    u8 *lo = D_800C7650_ovl_01.at20000;
    s32 *table;
    u32 entry;
    s32 *node;
    s32 *buf;
    s16 i;
    s16 j;
    u16 id;

    if (*(s32 *)(hi + 0x1A5C) < 0) {
        table = D_80129D6C_ovl_01;
    } else {
        table = D_80129D68_ovl_01;
    }
    i = *(s16 *)(lo + 0x15F8);
    j = *(s16 *)(lo + 0x15FA);
    entry = (u32)table[i];
    id = *(u16 *)((u8 *)entry + j * 2);
    if (id != 0xFFFF) {
        node = *(s32 **)(hi + 0x27C);
        buf = *(s32 **)(hi + 0x284);
        *(s32 **)((u8 *)node + 0x60) = buf;
        i = *(s16 *)(lo + 0x15F8);
        j = *(s16 *)(lo + 0x15FA);
        entry = (u32)table[i];
        id = *(u16 *)((u8 *)entry + j * 2);
        *(s32 **)(hi + 0x284) = func_80005F4C(id, buf);
    }
}
