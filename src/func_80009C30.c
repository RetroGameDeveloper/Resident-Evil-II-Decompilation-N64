u16 func_80009C30(u8 *arg0, s32 arg1) {
    s32 sum = 0;
    s32 i;
    for (i = 0; i < arg1; i++) {
        sum += *arg0++;
        sum &= 0xFFFF;
    }
    return sum;
}
