extern s16 D_800F9DE0_ovl_01;

void func_80162F64_ovl_23(void) {
    u32 i = 0;
    s16 *p = &D_800F9DE0_ovl_01;

    do {
        *p *= 6;
        p++;
        i++;
    } while (i < 0x1E);
}
