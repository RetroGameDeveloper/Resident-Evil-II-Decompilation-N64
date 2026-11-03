s32 func_80001510(s32, void *, void *);

s32 func_80002F80(s32 *arg0) {
    s32 *t;
    s32 sp10;
    if (arg0 == 0) return -2;
    if (arg0[7] == 0) return -2;
    t = &arg0[7];
    arg0[5] = 0;
    arg0[2] = 0;
    arg0[6] = 0;
    t[0] = 0;
    if (t[3] != 0) t[0] = 7;
    func_80001510(t[5], arg0, &sp10);
    return 0;
}
