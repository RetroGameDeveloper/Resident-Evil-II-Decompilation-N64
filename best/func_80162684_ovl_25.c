typedef union U64_80162684 { u64 q; struct { u32 hi; u32 lo; } w; } U64_80162684;

extern u8 D_800C7650[];

typedef struct {
    u8 unk_00[4];
    union { s32 unk_04; struct { u8 unk_04b[2]; u8 unk_06; u8 unk_07; } b; } u04;
    u8 unk_08[0x1E0];
    s32 unk_1E8;
} S_80162684;

void func_80032DEC_ovl_01(void *, s32, s32, s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);

void func_80162684_ovl_25(S_80162684 *arg0, s32 arg1, s32 arg2) {
    U64_80162684 b;
    u8 state = arg0->u04.b.unk_06;
    u8 *p;

    switch (state) {
    case 0:
        arg0->unk_1E8 = 0x03000F00;
        arg0->u04.b.unk_06 = 1;
        /* fallthrough */
    case 1:
        b.w.lo = 0x18000;
        b.w.hi = (u32)D_800C7650;
        p = (u8 *)(b.w.hi + b.w.lo);
        func_80032DEC_ovl_01(arg0, *(s32 *)(p + 0x1AA8),
                             *(s32 *)(p + 0x1AB0), 0x30);
        arg0->u04.b.unk_06 = arg0->u04.b.unk_06 + func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        break;
    case 2:
        arg0->u04.unk_04 = 0x01050000;
        break;
    }
}
