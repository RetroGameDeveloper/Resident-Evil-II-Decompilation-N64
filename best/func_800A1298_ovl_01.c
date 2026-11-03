extern u8 D_8013BC30[];

void func_800A1298_ovl_01(u32 arg0, s32 arg1, s32 arg2) {
    u32 i = 0;
    u32 key = arg0 & 0x7FFFFFFF;
    u8 *p = D_8013BC30;
    u8 *q;
    s32 idx;
    u8 v;

    for (; i < 8; i++) {
        if (p[0xFC1] == 0 && *(u32 *)p == key) {
            i |= arg0 & 0x80000000;
            goto found;
        }
        p += 0xFF8;
    }
    i = -1;
found:
    idx = i;
    if (idx == -1) {
        return;
    }
    if (idx >= 0) {
        q = D_8013BC30 + idx * 0xFF8;
        *(s32 *)(q + 0x110) = arg1;
        *(s32 *)(q + 0x114) = arg2;
        return;
    }
    idx &= 0x7FFFFFFF;
    q = D_8013BC30 + idx * 0xFF8;
    v = *(u8 *)(q + 0xFEE);
    *(s32 *)(q + 0xFE4) = arg1;
    *(s32 *)(q + 0xFE8) = arg2;
    *(u8 *)(q + 0xFEE) = v | 0x10;
}
