typedef struct { u8 pad[0xC]; s32 unkC; s32 unk10; } S_work;
typedef struct {
    u8 pad0[0x170];
    S_work *unk170;
    u8 pad174[0xC];
    void *unk180;
    void *unk188;
} S_arg;
typedef void (*Cb1)(void *, s32, s32, void *, s32, s32 *, s32);
typedef void (*Cb2)(void *, s32, s32, s32);

void func_8002E670(S_arg *a, s32 b, s32 c, s32 d, volatile s32 e, s32 *f, s32 g) {
    S_work *w = a->unk170;
    s32 tmp;
    s32 lim;

    lim = g - *f;
    if (w->unk10 < lim) {
        lim = w->unk10;
    }
    tmp = 0;
    (*(Cb1 *)((u8 *)a->unk180 + 4))(a, b, c, a->unk180, w->unkC, &tmp, lim);
    (*(Cb2 *)((u8 *)a->unk188 + 4))(a, w->unkC, e + *f * 4, tmp);
    *f += tmp;
}
