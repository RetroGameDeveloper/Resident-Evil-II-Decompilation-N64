typedef struct { u8 b[8]; } Blob8;
typedef struct { Blob8 blob; s32 buf[3]; } Work;

extern u8 D_800C7650_ovl_01[];
extern Blob8 func_80168640_ovl_14;

extern void func_8006A924_ovl_01(void *arg0, s32 arg1, s32 arg2, void *arg3);
extern s32 func_8006A500_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 func_8006A78C_ovl_01(s32 arg0);
extern void func_80083800_ovl_01(s32 arg0, void *arg1, void *arg2);

void func_80161DC4_overlay_014(u8 *p)
{
    Work w;
    s32 s0;
    s32 v;

    w.blob = func_80168640_ovl_14;
    v = *(volatile s32 *)(D_800C7650_ovl_01 + 0x199B8);
    if (v != 0) {
        *(s32 *)(p + 0x2BC) = v;
        w.buf[0] = *(s32 *)(p + 0x28);
        w.buf[1] = *(s32 *)(p + 0x2C);
        w.buf[2] = *(s32 *)(p + 0x30);
        func_8006A924_ovl_01(p + 0x28, *(s32 *)(p + 0x2BC), *(s32 *)(p + 0x70), w.buf);
        s0 = func_8006A500_ovl_01(p + 0x28, *(s32 *)(p + 0x2BC), *(s32 *)(p + 0x70), 0);
        func_80083800_ovl_01((s0 << 26) >> 16, &w.blob, &w.blob);
        *(u16 *)(p + 0x2D0) = *(u16 *)((u8 *)w.buf + 2) + *(u16 *)((u8 *)&w.blob + 0);
        *(u16 *)(p + 0x2C8) = (*(u16 *)(p + 0x2C8) & 0xFFEF) | 0x20;
        *(u16 *)(p + 0x2D4) = *(u16 *)((u8 *)w.buf + 0xA) + *(u16 *)((u8 *)&w.blob + 4);
    } else {
        *(u16 *)(p + 0x2D0) = *(u16 *)(p + 0x2A);
        *(u16 *)(p + 0x2D4) = *(u16 *)(p + 0x32);
        switch (func_8006A78C_ovl_01(*(s32 *)(p + 0x70))) {
        case 1: {
            s16 ang = *(s16 *)(p + 0x2D2);
            s32 cmp = *(s32 *)(p + 0x2C) < ang;
            u16 cur = *(volatile u16 *)(p + 0x2D2);
            if (cmp) {
                s0 = 1;
                *(volatile u16 *)(p + 0x2D2) = cur - 0x898;
            } else {
                s0 = 3;
                *(volatile u16 *)(p + 0x2D2) = cur + 0x898;
            }
            break;
        }
        case 2: {
            s16 ang = *(s16 *)(p + 0x2D2);
            s32 cmp = *(s32 *)(p + 0x2C) < ang;
            u16 cur = *(volatile u16 *)(p + 0x2D2);
            if (cmp) {
                s0 = 2;
                *(volatile u16 *)(p + 0x2D2) = cur - 0x898;
            } else {
                s0 = 0;
                *(volatile u16 *)(p + 0x2D2) = cur + 0x898;
            }
            break;
        }
        }
        *(u16 *)(p + 0x2C8) = (*(u16 *)(p + 0x2C8) & 0xFFDF) | 0x10;
    }
    *(u8 *)(p + 0x2B4) = s0 ^ 2;
    *(s32 *)p |= 8;
}
