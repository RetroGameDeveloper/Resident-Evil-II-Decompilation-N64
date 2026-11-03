void func_80163AA4_ovl_27(O *arg0, s32 arg1) {
    if (!(arg1 & 0x40)) {
        arg0->p[5] = arg1;
        *(s16 *)(arg0->p + 6) = 0;
        return;
    }
    *(s32 *)(arg0->p + 4) = ((arg1 & 0xF) << 16) + 0x02000000;
}
