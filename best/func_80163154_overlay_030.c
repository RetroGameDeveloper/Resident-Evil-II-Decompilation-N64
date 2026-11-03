typedef struct S_80163154_arg0 {
    u8 pad0[5];
    u8 unk_5;
    u16 unk_6;
    u8 pad1[0x28C - 8];
    u32 unk_28C;
    u8 pad2[0x2C0 - 0x290];
    u8 unk_2C0;
} S_80163154_arg0;

extern u8 D_800C7650_ovl_01[];
extern s32 func_80032EA4_ovl_01(void *, void *, void *, s32);
extern s32 func_80033634_ovl_01(void);

void func_80163154_overlay_030(S_80163154_arg0 *a) {
    union { u64 q; struct { u32 lo; u32 hi; } w; } b;
    u32 off;
    u32 base;

    if (a->unk_28C < 0x1194) {
        off = 0x18000;
        b.w.lo = (u32)D_800C7650_ovl_01;
        base = off + b.w.lo;
        if (*(s16 *)(base + 0x1C72) >= 0) {
            if (func_80032EA4_ovl_01(a, *(void **)(base + 0x1AA8), *(void **)(base + 0x1AB0), 0x400) != 0) {
                if (((0x1558 >> (func_80033634_ovl_01() & 0xF)) & 1) || a->unk_2C0 != 0) {
                    a->unk_5 = 3;
                    a->unk_6 = 0;
                }
            }
        }
    }
}
