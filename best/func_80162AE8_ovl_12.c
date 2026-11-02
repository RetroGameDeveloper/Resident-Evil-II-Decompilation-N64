extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];
extern u8 D_80166C10_ovl_12[];
s32 func_80032B8C_ovl_01(void *arg0, s32 arg1);
s32 func_80032EA4_ovl_01(void *arg0, s16 arg1, s16 arg2, s32 arg3);
s32 func_80033634_ovl_01(void);
s32 func_80040BE4_ovl_01(s32 arg0);
s32 func_80065400_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_801664A8_ovl_12(void *arg0, s32 arg1, s32 arg2);
s32 func_80166510_ovl_12(void *arg0, s16 arg1);
s32 func_80166568_ovl_12(void *arg0);

typedef struct {
    s32 unk_00;
    u8 unk_04;
    s8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08[0x20];
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    u8 unk_34[0x32];
    u16 unk_66;
    u8 unk_68[0x18E];
    s16 unk_1F6;
    u8 unk_1F8[0xE];
    s8 unk_206;
    u8 unk_207[0x59];
    s16 unk_260;
    s16 unk_262;
    u8 unk_264[0x50];
    u8 unk_2B4;
    u8 unk_2B5[0xE];
    u8 unk_2C3;
    u8 unk_2C4[7];
    u8 unk_2CB;
    u8 unk_2CC;
} S_func_80162AE8_ovl_12;

void func_80162AE8_ovl_12(S_func_80162AE8_ovl_12 *p)
{
    s32 s4;
    s32 s1;
    s32 v;
    s32 t;
    s32 dx;
    s32 dy;
    void *s3;

    if (p->unk_2C3 != 0) {
        s3 = *(void **)((u8 *)D_800C7650_ovl_01 + 0x18000 + 0x1D3C);
    } else {
        s3 = (void *)D_800E10D0_ovl_01;
    }
    if (p->unk_2CB != 0) {
        p->unk_2CB = p->unk_2CB - 1;
    }
    func_801664A8_ovl_12(p, 0x28, 0xF0);
    s4 = func_80065400_ovl_01(p, 0, p->unk_2B4, 1) & 0xFF;
    s1 = func_80032EA4_ovl_01(p, p->unk_260, p->unk_262, 0x40);
    v = func_80032EA4_ovl_01(p, *(s16 *)((u8 *)s3 + 0x28), *(s16 *)((u8 *)s3 + 0x2C), 0x80);
    if (p->unk_1F6 != 0) {
        s1 = p->unk_206;
        p->unk_1F6 = p->unk_1F6 - 1;
    } else if (p->unk_2CC >= 0x10) {
        p->unk_1F6 = 0x1E;
        if (s1 != 0) {
            p->unk_206 = -s1;
        } else {
            p->unk_206 = -(v >> 1);
        }
    }
    p->unk_66 = p->unk_66 + s1;
    func_80032B8C_ovl_01(p, 0);
    func_80166510_ovl_12(p, s1);
    if (p->unk_07 == 0) {
        goto body;
    }
    if (s4 != 1) {
        goto done;
    }
    dx = p->unk_28 - p->unk_260;
    dy = p->unk_30 - p->unk_262;
    if (func_80040BE4_ovl_01(dx * dx + dy * dy) >= 0x3E8) {
        goto done;
    }
body:
    p->unk_07 = 1;
    s4 = p->unk_2B4;
    t = func_80065400_ovl_01(p, 0, 0, 0);
    p->unk_2B4 = t;
    if (s4 != (t & 0xFF)) {
        p->unk_2B4 = s4 + 1;
    }
    {
        u8 *q = *(u8 **)((u8 *)D_800C7650_ovl_01 + 0x18000 + 0x27C);
        s16 d = *(s16 *)(*(u8 **)(q + 0x38));
        p->unk_2B4 = p->unk_2B4 % d;
    }
done:
    if (p->unk_2CB == 0) {
        if (func_80166568_ovl_12(p) != 0 || s3 == 0) {
            p->unk_05 = 3;
            *(u16 *)((u8 *)p + 6) = 0;
            p->unk_2CB = D_80166C10_ovl_12[func_80033634_ovl_01() & 7] + 0x1E;
        }
    }
}
