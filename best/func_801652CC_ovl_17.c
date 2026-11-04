typedef struct Entry017 {
    s32 unk_00;
    u8 pad[0x174];
} Entry017;

typedef struct Actor017 {
    u8 unk_00[5];
    u8 unk_05;
    u8 unk_06[0x22E];
    Entry017 *unk_234;
} Actor017;

void func_80164748_ovl_17(void *arg0, void *arg1, void *arg2);

void func_801652CC_ovl_17(Actor017 *arg0, s32 arg1, s32 arg2) {
    u32 i;
    s32 sel;

    i = 0;
    do {
        sel = (func_80033634_ovl_01() & 0xF) + 3;
        if ((arg0->unk_234[sel].unk_00 & 0x4B) == 1) {
            func_80166FBC_ovl_17(arg0, sel, 5);
        }
        i++;
    } while (i < 5U);
    arg0->unk_05 = 2;
    func_80164748_ovl_17(arg0, arg1, arg2);
}
