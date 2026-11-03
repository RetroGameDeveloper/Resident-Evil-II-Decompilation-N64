extern volatile u8 D_800E9118_ovl_01[];
extern volatile u8 D_800C7650_ovl_01[];
extern u8 D_8010C220_ovl_01[];
extern u8 *D_8010D8E0_ovl_01;

u32 func_800276B4_ovl_01(s32 a) {
    volatile u8 *base = D_800E9118_ovl_01;
    s32 idx = a;
    volatile u8 *p = base + idx * 0x2C;
    s16 v = *(volatile s16 *)(p + 0x10);
    return (u32)v >> 31;
}

typedef struct {
    u8 f0;
    u8 f1;
    u16 f2;
    u16 f4;
    s16 f6;
    u16 f8;
} Ent52;

u8 func_80052E88_ovl_01(Ent52 *arg0) {
    u8 max = 0;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        volatile Ent52 *e = arg0 + i;
        if (e->f0 == 0) {
            continue;
        }
        if (e->f2 != 0) {
            e->f2 = e->f2 - 1;
        } else {
            if (--e->f4 == 0) {
                e->f0 = 0;
            }
            if (e->f6 != 0) {
                e->f8 = e->f8 + e->f6;
                e->f1 = e->f8 >> 7;
            }
            if (max < e->f1) {
                max = e->f1;
            }
        }
    }
    return max;
}

void func_80053290_ovl_01(s32 arg0, s16 arg1, s16 arg2, s32 arg3) {
    u8 *t0 = D_8010D8E0_ovl_01;
    u8 *v1 = t0 + 0x300;
    *(s8 *)(v1 + 0xE) = arg3;
    *(s8 *)(v1 + 0xF) = arg0;
    *(u16 *)(t0 + 0x300) = *(u16 *)(D_8010C220_ovl_01 + 0x0) + 0x30;
    *(s16 *)(v1 + 0x4) = arg1;
    *(s16 *)(v1 + 0x6) = arg2;
    *(u16 *)(v1 + 0x2) = *(u16 *)(D_8010C220_ovl_01 + 0x2) + 0x8E;
    *(s8 *)(t0 + 0x31F) = arg0;
    *(s8 *)(t0 + 0x2) = 1;
    *(s8 *)(t0 + 0x3) = 0;
    *(s8 *)(t0 + 0x2DE) = 0;
}

typedef struct {
    s32 f0;
    s16 x;
    s16 y;
    s16 w;
    s16 h;
    u8 pad[4];
} Ent53;

void func_800537D4_ovl_01(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    volatile u8 *q = D_800C7650_ovl_01 + 0x18000;
    s32 i = 3;
    s32 val = -0x100;
    s32 base = *(s32 *)D_8010D8E0_ovl_01 + ((q[0x538] << 6) + 0x52A0);
    Ent53 *p = (Ent53 *)base;
    for (; i >= 0; i--) {
        *(s32 *)((u8 *)p + i * 0x10) = val;
    }
    i = 3;
    p[0].x = arg0;
    p[0].w = arg2;
    p[1].x = arg0;
    p[1].w = arg2;
    p[2].x = arg0;
    p[2].w = arg0;
    p[3].x = arg2;
    p[3].w = arg2;
    p[0].y = arg1;
    p[0].h = arg1;
    p[1].y = arg3;
    p[1].h = arg3;
    p[2].y = arg1;
    p[2].h = arg3;
    p[3].y = arg1;
    p[3].h = arg3;
    for (; i >= 0; i--) {
    }
}
