extern u8 D_80158A20[];
extern u8 D_80158A40[];

void func_800B1AA8_ovl_01(u8 *arg0) {
    u8 *p;
    u8 v;
    s32 c;

    if (*(s32 *)(arg0 + 0x60) == -1) {
        return;
    }
    if (arg0[0x4A] == 0xFF) {
        return;
    }
    c = arg0[0x63];
    if (arg0[0x4B] == 0xFF) {
        p = D_80158A20 + (c & 0xFF);
        v = *p;
    } else {
        p = D_80158A40 + arg0[0x4A] + arg0[0x4B] * 16;
        v = *p;
    }
    if ((c & 0xFF) == v) {
        *p = 0xFF;
    }
}
