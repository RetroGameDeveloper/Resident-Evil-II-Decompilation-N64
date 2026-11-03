void func_80166520_ovl_35(void *arg0, s32 arg1) {
    s32 t = 0x7D0;
    if (arg1 != 0) goto nonzero;
    *(s16 *)((u8 *)arg0 + 0x134) = -0x320;
    *(s16 *)((u8 *)arg0 + 0x13A) = 0x3E8;
    *(s16 *)((u8 *)arg0 + 0x12C) = 0x320;
    *(s16 *)((u8 *)arg0 + 0x12E) = 0x578;
    return;
nonzero:
    *(s16 *)((u8 *)arg0 + 0x13A) = t;
    *(s16 *)((u8 *)arg0 + 0x134) = 0;
    *(s16 *)((u8 *)arg0 + 0x12C) = 4;
    *(s16 *)((u8 *)arg0 + 0x12E) = 4;
}
