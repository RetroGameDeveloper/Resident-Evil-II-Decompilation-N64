u16 func_80009C30(u8 *arg0, s32 arg1) {
    u16 sum = 0;
    s32 i = 0;

    while (i < arg1) {
        sum += *arg0;
        arg0++;
        i++;
    }
    return sum;
}
