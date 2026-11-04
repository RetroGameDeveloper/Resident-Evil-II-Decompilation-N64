typedef union U64_80161C70 {
    u64 q;
    struct { u32 hi; u32 lo; } w;
} U64_80161C70;

typedef struct S_func_80161C70_ovl_18_arg0 {
    /* 0x000 */ s32 unk_00;
    /* 0x004 */ u8 unk_04;
    /* 0x005 */ u8 unk_05[0x27];
    /* 0x02C */ s32 unk_2C;
    /* 0x030 */ u8 unk_30[0x172];
    /* 0x1A2 */ s8 unk_1A2;
    /* 0x1A3 */ u8 unk_1A3[1];
    /* 0x1A4 */ s32 unk_1A4;
    /* 0x1A8 */ u8 unk_1A8[0x70];
    /* 0x218 */ s32 unk_218;
    /* 0x21C */ u8 unk_21C[0x53];
    /* 0x26F */ u8 unk_26F;
} S_func_80161C70_ovl_18_arg0;

typedef void (*S_fn_80161C70)(void *, s32, s32);

extern u8 D_800C7650_ovl_01;
extern S_fn_80161C70 D_80162C90_ovl_18[];
void func_8004DB8C_ovl_01(void *);
void func_8004DCE8_ovl_01(void *, s32);

void func_80161C70_ovl_18(S_func_80161C70_ovl_18_arg0 *arg0) {
    U64_80161C70 b;
    u8 v;
    S_fn_80161C70 fn;
    volatile S_fn_80161C70 *tbl;
    u8 *base;

    b.w.lo = 0x18000;
    b.w.hi = (u32)&D_800C7650_ovl_01;
    base = (u8 *)(b.w.hi + b.w.lo);
    if (!(*(u32 *)(base + 0x1A60) & 0x20000000)) {
        v = arg0->unk_26F;
        if (v & 0x7F) {
            arg0->unk_26F = v - 1;
        }
        tbl = D_80162C90_ovl_18;
        fn = tbl[arg0->unk_04];
        fn(arg0, arg0->unk_1A4, arg0->unk_218);
        arg0->unk_1A2 = (-arg0->unk_2C) / 1800;
        if (arg0->unk_00 != 0) {
            func_8004DB8C_ovl_01(arg0);
            func_8004DCE8_ovl_01(arg0, 0x400);
        }
    }
}
