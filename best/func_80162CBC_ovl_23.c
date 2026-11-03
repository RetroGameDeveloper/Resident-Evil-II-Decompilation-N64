typedef struct S_func_80162CBC_ovl_23_arg0 {
    u8 pad_00[0x66];
    s16 unk_66;
    u8 pad_68[0x224 - 0x68];
    s32 unk_224;
    s32 unk_228;
} S_func_80162CBC_ovl_23_arg0;

typedef struct S_func_80162CBC_ovl_23 {
    u8 pad_00[4];
    union {
        s32 unk_04;
        struct { u8 pad_04b; u8 unk_05; u8 pad_06[2]; } b;
    } u04;
    u8 pad_08[0x224 - 0x08];
    s32 unk_224;
    s32 unk_228;
    u8 pad_22C[0x250 - 0x22C];
    void *unk_250;
} S_func_80162CBC_ovl_23;

s32 func_80033174_ovl_01(S_func_80162CBC_ovl_23_arg0 *, S_func_80162CBC_ovl_23 *);
void func_80032F24_ovl_01(S_func_80162CBC_ovl_23 *, s16, s32);
extern S_func_80162CBC_ovl_23 D_800E10D0_ovl_01;

void func_80162CBC_ovl_23(S_func_80162CBC_ovl_23_arg0 *arg0) {
    union { u64 q; S_func_80162CBC_ovl_23 *w; } b;
    S_func_80162CBC_ovl_23 *p;
    b.q = (u64)(u32)&D_800E10D0_ovl_01;
    p = (S_func_80162CBC_ovl_23 *)(u32)b.q;
    p->u04.unk_04 = 0x05010000;
    if (func_80033174_ovl_01(arg0, p) & 0xFF) {
        func_80032F24_ovl_01(p, arg0->unk_66, 0x200);
        p->u04.b.unk_05++;
    } else {
        func_80032F24_ovl_01(p, (s16)((u16)arg0->unk_66 - 0x800), 0x200);
    }
    p->unk_250 = arg0;
    p->unk_224 = arg0->unk_224;
    p->unk_228 = arg0->unk_228;
}
