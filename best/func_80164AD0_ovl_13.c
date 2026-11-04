typedef union U64 { u64 q; struct { u32 lo; u32 hi; } w; } U64;
extern u8 D_800C7650_ovl_01[];
s32 func_80033634_ovl_01(void);

typedef struct S_func_80164AD0_ovl_13_arg0 {
    s32 unk_00;
    u8 unk_04[0x24];
    s16 unk_28;
    s16 unk_2A;
    s16 unk_2C;
    s16 unk_2E;
    s16 unk_30;
    s16 unk_32;
    u8 unk_34[0x111 - 0x34];
    s8 unk_111;
    u8 unk_112[0x11E - 0x112];
    s16 unk_11E;
} S_func_80164AD0_ovl_13_arg0;

void func_80164AD0_ovl_13(S_func_80164AD0_ovl_13_arg0 *arg0, s32 arg1) {
    U64 b;
    u8 *p;

    b.w.lo = (u32)D_800C7650_ovl_01;
    b.w.hi = 0x20000;
    p = (u8 *)(b.w.lo + b.w.hi);

    if (p[0x1962] & 8) {
        arg0->unk_00 |= 0x1062;
    } else {
        arg0->unk_00 = 0;
    }
    arg0->unk_28 = arg1 + (func_80033634_ovl_01() & 0xFF) * 4;
    arg0->unk_11E = 0;
    arg0->unk_2C = (func_80033634_ovl_01() & 0x7F) + 0x64;
    arg0->unk_2A = 0;
    arg0->unk_111 = 0x14;
    arg0->unk_2E = 0;
    arg0->unk_30 = (func_80033634_ovl_01() & 0xFF) * 16;
    arg0->unk_32 = 0;
}
