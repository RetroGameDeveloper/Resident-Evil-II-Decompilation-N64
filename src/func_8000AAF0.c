/* identical to __osPfsRequestOneChannel in Resident Evil II (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in func_8000AAF0 in V-RALLY-PAL (matched), with its names changed by decompdecomp */
extern s32 D_800164AC;
extern s8 D_80014FE0;

typedef struct {
    s8 a;
    s8 b;
    s8 c;
    s8 d;
    s8 e;
    s8 f;
} Pack6;

void func_8000AAF0(s32 arg0) {
    s32 i;
    Pack6 buf;
    Pack6 *p;
    s32 *q;
    u8 k;
    s8 pad[8];

    q = &D_800164AC;
    p = (Pack6 *)((s8 *)q - 0x3C);
    i = 0;
    *q = 1;
    buf.a = 1;
    buf.b = 3;
    D_80014FE0 = 0;
    buf.c = 0;
    k = 0xFF;
    buf.d = k;
    buf.e = k;
    buf.f = k;
    if (arg0 > 0) {
        do {
            *(s8 *)p = 0;
            i++;
            p = (Pack6 *)((s8 *)p + 1);
        } while (i < arg0);
    }
    *p = buf;
    ((u8 *)p)[6] = 0xFE;
}
