typedef union U16_80162178 {
    s16 s;
    u8 b[2];
} U16_80162178;

typedef struct S_func_80162178_ovl_36_arg0 {
    u8 unk_00[0x6];
    U16_80162178 unk_06;
    u8 unk_08[0x66 - 0x08];
    s16 unk_66;
    u8 unk_68[0x1E0 - 0x68];
    s16 unk_1E0;
    u8 unk_1E2[0x1F4 - 0x1E2];
    u16 unk_1F4;
    u8 unk_1F6[0x206 - 0x1F6];
    s8 unk_206;
    u8 unk_207[0x260 - 0x207];
    s16 unk_260;
    s16 unk_262;
    u8 unk_264[0x28C - 0x264];
    s32 unk_28C;
    u8 unk_290[0x2B8 - 0x290];
    u8 unk_2B8;
} S_func_80162178_ovl_36_arg0;

extern u8 D_800E10D0[];
extern u8 D_800C7650_ovl_01[];

s32 func_80032B8C_ovl_01(void *arg0, s32 arg1);
s16 func_80032EA4_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
u32 func_80033634_ovl_01(void);
s32 func_80065400_ovl_01(void *arg0, s32 *arg1, s32 arg2, s32 arg3);
s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_80162178_ovl_36(S_func_80162178_ovl_36_arg0 *s0, s32 arg1, s32 arg2, s16 arg3) {
    s32 buf[3];
    s16 var_a3;
    s32 t;
    s32 one;
    s32 v;
    u8 *base;
    u8 *d;
    u8 *q;
    u8 *p;

    var_a3 = arg3;
    one = 1;
    d = D_800E10D0;
    buf[0] = *(s32 *)(d + 0x28);
    buf[2] = *(s32 *)(d + 0x30);
    base = (u8 *)s0 + 0x2B4;
    switch (s0->unk_06.b[1]) {
    case 0:
        s0->unk_06.b[1] = one;
        s0->unk_1E0 = 2;
        t = func_80033634_ovl_01();
        s0->unk_206 = (t + 1) & 7;
        /* fallthrough */
    case 1:
        var_a3 = 0;
        if (s0->unk_206 == 0) {
            var_a3 = func_80032EA4_ovl_01(s0, buf[0], buf[2], 2);
            s0->unk_206 = 4;
        }
        break;
    case 2:
        buf[1] = 0;
        func_80065400_ovl_01(s0, buf, 0, 0);
        var_a3 = func_80032EA4_ovl_01(s0, s0->unk_260, s0->unk_262, 2);
        s0->unk_1F4 = s0->unk_1F4 - 1;
        if ((s16)s0->unk_1F4 == 0)
            s0->unk_06.b[1] = one;
        break;
    }
    *(u8 *)((u8 *)s0 + 0x206) -= 1;
    v = s0->unk_66;
    if (base[4] == 0)
        s0->unk_66 = v + var_a3;
    else
        s0->unk_66 = v - var_a3;
    func_80032B8C_ovl_01(s0, 0);
    if (base[4] == 0) {
        q = D_800C7650_ovl_01;
        p = q + 0x18000;
        if (!(*(u16 *)(p + 0x1A78) & 0x10)) {
            if (func_80032EA4_ovl_01(s0, *(s32 *)(p + 0x1AA8), *(s32 *)(p + 0x1AB0), 0x100) == 0) {
                if ((u32)s0->unk_28C < 0x708) {
                    if ((0x27E4 >> (func_80033634_ovl_01() & 0xF)) & 1) {
                        *(u16 *)(p + 0x1A78) |= 0x10;
                        base[4] = 0x5A;
                        s0->unk_06.s = 0x100;
                    }
                }
            }
        }
    }
    func_80089D34_ovl_01(s0, arg1, arg2, 0x80);
}
