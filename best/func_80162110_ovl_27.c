typedef struct S_func_80162110_ovl_27_arg0 {
    u8 pad_00[6];
    u8 unk_06;
    u8 pad_07[0x250 - 0x07];
    u8 *unk_250;
    u8 pad_254[0x2C5 - 0x254];
    u8 unk_2C5;
} S_func_80162110_ovl_27_arg0;

extern void (* volatile D_80163D1C_ovl_27[])(void);
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];
void func_801636DC_ovl_27(void *, s32);

void func_80162110_ovl_27(S_func_80162110_ovl_27_arg0 *arg0) {
    u8 *p, *q;
    D_80163D1C_ovl_27[arg0->unk_06]();
    p = arg0->unk_250;
    if (p[0x2B4]) {
        union { u64 q; struct { u32 lo; u32 hi; } w; } b;
        b.q = (u64)(u32)D_800C7650_ovl_01;
        q = *(u8 **)((u8 *)(u32)b.q + 0x18000 + 0x1D3C);
    } else {
        q = D_800E10D0_ovl_01;
    }
    if (q[0x26F] & 0x80) {
        arg0->unk_2C5 = 1;
    }
    func_801636DC_ovl_27(arg0, 0);
}
