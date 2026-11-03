u8 *func_8000DE40(u8 *p, s32 ch) {
    u8 c = ch;
    u8 v = *p;
    if (v != c) {
        do {
            if (v == 0) {
                return 0;
            }
            p++;
            v = *p;
        } while (v != c);
    }
    return p;
}
