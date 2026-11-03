extern s32 func_800439B8_ovl_01(s32, void *, s32, s32);
extern u8 D_800DF650_ovl_01[];
extern u8 D_80160B9C_ovl_03[];

typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;
typedef struct { u8 b[0x28]; } Rec;

void func_8015FAA0_ovl_03(s8 x)
{
    U64 b;
    u8 *dp;
    Rec *p = (Rec *)D_80160B9C_ovl_03;
    u8 *q = D_80160B9C_ovl_03 + 0x1C;
    s32 i = 0;
    s32 v;

    b.w.lo = (u32)D_800DF650_ovl_01;
    dp = (u8 *)b.w.lo;

    do {
        void *a = q;
        q += 0x28;
        p->b[0x1E] = x;
        p->b[0x1D] = x;
        p->b[0x1C] = x;
        p++;
        i++;
        v = func_800439B8_ovl_01(*(s32 *)(dp + 0x204), a, 0, 0);
        *(s32 *)(dp + 0x204) = v;
    } while (i == 0);
}
