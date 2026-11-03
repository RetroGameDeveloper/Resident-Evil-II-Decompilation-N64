s32 func_800042F4(s32 *arg0, void *arg1) {
    s32 *prev = 0;
    s32 *p = arg0;

    while (p != 0) {
        s32 *t = *(s32 **)((u8 *)p - 4);
        *(s32 **)((u8 *)p - 4) = prev;
        prev = p;
        p = t;
    }
    if (prev != 0) {
        void (*fn)(s32, s32 *);
        s32 a;

        do {
            prev = (s32 *)((u8 *)prev - 8);
            fn = *(void (**)(s32, s32 *))((u8 *)arg1 + 0x24);
            a = *(s32 *)((u8 *)arg1 + 0x28);
            p = *(s32 **)((u8 *)prev + 4);
            fn(a, prev);
            prev = p;
        } while (prev != 0);
    }
    return 0;
}
