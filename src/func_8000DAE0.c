s32 func_8000DAE0(s32 arg0) {
    if (!(*(volatile u32 *)0xA4040010 & 1)) {
        return -1;
    }
    *(volatile u32 *)0xA4080000 = arg0;
    return 0;
}
