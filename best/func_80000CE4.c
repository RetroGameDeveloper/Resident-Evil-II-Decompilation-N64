typedef struct { void *p; s32 u4, count, base, limit; s32 *items; } X;
extern X D_80017730[];
extern char D_80012948;
s32 func_80000F50(X *q);
void func_80000F08(char *a, s32 v);
void func_80000CE4(s32 arg0) {
    s32 *p = (s32 *)((u8 *)D_80017730 + arg0);
    X *q = (X *)p[0];
    s32 a, b;
    if (!q) return;
    a = q->count;
    b = q->limit;
    if (a >= b) return;
    q->items[(q->base + a) % b] = p[1];
    q->count = a + 1;
    if (*(s32 *)q->p) func_80000F08(&D_80012948, func_80000F50(q));
}
