extern void *D_800E1008[];
extern void func_8008386C_ovl_01(s16, s32, s32, s16 *);
extern s16 func_80032D44_ovl_01(s16, s16, s16, s16);
extern void func_80066804_ovl_01(s32 *, s32, s32, s32);
extern s32 func_8006A45C_ovl_01(s32 *);
extern s32 func_8006A8B0_ovl_01(s32);

s32 func_80162144_overlay_014(u8 *p, s32 a1) {
    s16 tmp[4];
    s32 v[4];
    void **i;
    s32 h;
    s32 r;
    s32 b;

    func_8008386C_ovl_01(*(s16 *)(p + 0x66), *(s32 *)(p + 0x70), a1, tmp);
    p[0x206] = (((s16)func_80032D44_ovl_01(0, 0, tmp[0], tmp[2]) + 0x100) & 0xC00) >> 10;
    v[0] = *(s32 *)(p + 0x28) + tmp[0];
    v[1] = tmp[1];
    v[2] = *(s32 *)(p + 0x30) + tmp[2];
    b = 1 << (*(s32 *)(p + 0x2C) / -1800);
    func_80066804_ovl_01(v, 10, b, 0x200);
    r = 0x80000000;
    if (D_800E1008[0] == 0) return 0x40000000;
    func_80066804_ovl_01(v, 10, b, 0x600);
    for (i = D_800E1008; *i != 0; i++) {
        if (!(*(u16 *)((u8 *)*i + 8) & 0x200)) {
            r |= 0x20000000;
            continue;
        }
        h = func_8006A45C_ovl_01(v);
        if (*i == *(void **)(p + 0x2BC)) {
            if (p[0x207] & 1) {
                *(s32 *)(p + 0x30) = func_8006A8B0_ovl_01(p[0x207]);
            } else {
                *(s32 *)(p + 0x28) = func_8006A8B0_ovl_01(p[0x207]);
            }
        } else if ((h ^ p[0x207]) & 1) {
            *(void **)(p + 0x2BC) = *i;
            *(void **)(p + 0x2BC) = *i;
            return h & 0xFF;
        }
    }
    return r;
}
