typedef struct { u8 b[8]; } Blob;
extern Blob D_80168648_ovl_14;
extern u8 D_80168940_ovl_14[];
extern u16 D_80168CD8_ovl_14[];
extern void func_8008386C_ovl_01(s16, s32, void *, void *);
extern s32 func_8006A81C_ovl_01(s32);

void func_80162024_overlay_014(u8 *p) {
    Blob tmp;
    s32 temp;
    u8 *tbl;
    u16 *out;
    tmp = D_80168648_ovl_14;
    func_8008386C_ovl_01(*(s16 *)(p + 0x66), *(s32 *)(p + 0x70), &tmp, &tmp);
    *(s32 *)(p + 0x28) = *(s16 *)(p + 0x2D0) + *(s16 *)(tmp.b + 0);
    *(s32 *)(p + 0x2C) = *(s32 *)(p + 0x2C) + *(s16 *)(tmp.b + 2);
    *(s32 *)(p + 0x30) = *(s16 *)(p + 0x2D4) + *(s16 *)(tmp.b + 4);
    temp = func_8006A81C_ovl_01(*(s32 *)(p + 0x70));
    tbl = D_80168940_ovl_14;
    out = D_80168CD8_ovl_14;
    out[0] = *(u16 *)(tbl + p[0x2B4] * 6 + temp * 24);
    out[1] = *(u16 *)(tbl + p[0x2B4] * 6 + temp * 24 + 2);
    out[2] = *(u16 *)(tbl + p[0x2B4] * 6 + temp * 24 + 4);
    *(s32 *)p &= ~8;
}
