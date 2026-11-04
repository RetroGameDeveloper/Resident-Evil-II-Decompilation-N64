typedef struct { s16 a; s16 b; } Tbl4_791;
extern Tbl4_791 D_80167CEC_ovl_30[];
extern u8 D_800E10D0_ovl_01[];
s32 func_80033054_ovl_01(void *a, void *b, s32 c);

s32 func_8016758C_ovl_30(void *p, s32 i) {
    u8 *g = D_800E10D0_ovl_01;
    Tbl4_791 *t = D_80167CEC_ovl_30;
    s32 n = t[i].a;
    u8 *e = (u8 *)*(void **)((u8 *)p + 0x234) + n * 0x178;
    s32 d;

    if (g[0x26f] & 0x80) return 0;
    if (*(s16 *)(g + 0x1f2) < 0) return 0;
    if (func_80033054_ovl_01(g + 0x28, (u8 *)e + 0x4c, t[i].b)) {
        d = *(s32 *)((u8 *)p + 0x2c) - *(s32 *)((u8 *)e + 0x50);
        if (d < 0) d = -d;
        if (d < 0xce4) return 1;
    }
    return 0;
}
