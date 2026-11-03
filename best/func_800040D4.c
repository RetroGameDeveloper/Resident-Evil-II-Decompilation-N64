extern s32 D_80013EC0;

s32 func_800040D4(s32 *a, s32 b) {
    s32 t;
    s32 *p = &t;
    *a -= b;
    (void)p;
    return (s32)&D_80013EC0 + *a * 8;
}
