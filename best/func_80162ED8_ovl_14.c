typedef struct { s16 vx, vy, vz, pad; } SVec;

extern SVec D_801686D8_ovl_14;
extern u8 D_800C7650_ovl_01[];

extern s32 func_8008386C_ovl_01(s16, s32, void *, void *);
extern s32 func_80066804_ovl_01(void *, s32, s32, s32);
extern s32 func_8006A45C_ovl_01(void *);

s32 func_80162ED8_ovl_14(u8 *p, s8 a1, s32 a2) {
    SVec tmp;
    s32 pos[4];
    s32 angle;
    s32 diff;
    s32 absdiff;

    tmp = D_801686D8_ovl_14;
    func_8008386C_ovl_01(*(s16 *)(p + 0x66), *(s32 *)(p + 0x70), &tmp, &tmp);
    pos[0] = *(s32 *)(p + 0x28) + tmp.vx;
    pos[2] = *(s32 *)(p + 0x30) + tmp.vz;
    func_80066804_ovl_01(pos, 0x190, 1 << p[0x1A2], 0x400);
    if (*(s32 *)(D_800C7650_ovl_01 + 0x18000 + 0x19B8) == 0) {
        p[0x2CC] = 0;
        return 0;
    }
    if (p[0x2CC] == 0) {
        angle = func_8006A45C_ovl_01(p + 0x28);
        angle = (((angle & 0xFFFF) << 10) + 0x800) & 0xFFF;
        diff = (*(u16 *)(p + 0x66) & 0xFFF) - angle;
        absdiff = diff;
        if (absdiff < 0) absdiff = -absdiff;
        if (absdiff >= 0x801) diff -= 0x1000;
        if (diff == 0) {
            p[0x2CC] = -a1;
        } else {
            p[0x2CC] = a1;
        }
        if (a2 != 0) p[0x2CC] = -p[0x2CC];
    }
    *(u16 *)(p + 0x66) = *(u16 *)(p + 0x66) + (s8)p[0x2CC];
    return 1;
}
