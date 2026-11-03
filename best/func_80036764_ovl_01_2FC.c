typedef struct S_80036764_2FC_pos {
    s32 x;
    s32 pad4;
    s32 y;
    s32 padC;
} S_80036764_2FC_pos;

s32 func_80032D44_ovl_01(s16 a, s16 b, s16 c, s16 d);
void func_80083800_ovl_01(s16 a, s16 *b, s16 *c);

s32 func_80036764_ovl_01_2FC(S_80036764_2FC_pos *p, S_80036764_2FC_pos *q, s16 z) {
    u32 sign = 0x80000000;
    s16 out[3];
    u32 d;

    out[0] = z;
    out[2] = 0;
    out[1] = 0;

    d = ((p->x - q->x) & sign) | (((p->y - q->y) & sign) >> 1);

    func_80083800_ovl_01((s16)func_80032D44_ovl_01(
        *(s16 *)((u8 *)p + 2), *(s16 *)((u8 *)p + 0xA),
        *(s16 *)((u8 *)q + 2), *(s16 *)((u8 *)q + 0xA)), out, out);

    p->x += out[0];
    p->y += out[2];

    if ((d ^ ((p->x - q->x) & sign)) != (((p->y - q->y) & sign) >> 1)) {
        p->x = q->x;
        p->y = q->y;
        return 1;
    }
    return 0;
}
