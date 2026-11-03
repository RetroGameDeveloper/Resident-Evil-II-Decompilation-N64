extern u8 D_80014FE0;
extern s32 D_800164AC;

typedef struct {
    u8 b0;
    u8 b1;
    u8 b2;
    s8 b3;
    s8 b4;
    s8 b5;
} Hdr;

void func_8000AAF0(s32 n)
{
    Hdr h;
    s32 i;
    s32 *base = &D_800164AC;
    u8 *p = (u8 *)base - 0x3C;
    u8 ff = 0xFF;

    i = 0;
    *base = 1;
    h.b0 = 1;
    h.b1 = 3;
    D_80014FE0 = 0;
    h.b2 = 0;
    h.b3 = ff;
    h.b4 = ff;
    h.b5 = ff;
    for (; i < n; i++) {
        *p++ = 0;
    }
    *(Hdr *)p = h;
    p[6] = 0xFE;
}
