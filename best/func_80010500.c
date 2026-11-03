s32 *func_80010500(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp[2];
    s32 *dst = arg0;

    sp[0] = arg1 / arg2;
    sp[1] = arg1 - arg2 * sp[0];
    if (sp[0] < 0 && sp[1] > 0) {
        sp[0] = sp[0] + 1;
        sp[1] = sp[1] - arg2;
    }
    dst[0] = sp[0];
    dst[1] = sp[1];
    return dst;
}
