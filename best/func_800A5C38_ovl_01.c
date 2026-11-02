void func_8000EFA0(void *, s32);

void func_800A5BF0_ovl_01(u8 *arg0, s32 arg1) {
    u16 *src = (u16 *)arg0;
    u16 *dst = (u16 *)(arg1 * 2 + (s32)arg0);

    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    func_8000EFA0(dst, 8);
}

extern u8 *D_80143EAC;

s32 func_800A5BA8_ovl_01(s32 arg0) {
    return *(s32 *)(D_80143EAC + arg0 * 0x68 + 0x14);
}

extern s32 (*D_80143FA4)(void);

s32 func_800A5C38_ovl_01(s32 arg0) {
    s32 v = arg0 & 0xFF000000;

    if (v == 0x80000000) {
        goto end;
    }
    if (v == 0xB0000000) {
        goto end;
    }
    arg0 = D_80143FA4();
end:
    return arg0;
}
