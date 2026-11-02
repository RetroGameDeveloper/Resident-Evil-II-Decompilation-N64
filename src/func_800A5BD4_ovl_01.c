void func_8000EFA0(void *, s32);

void func_800A5BD4_ovl_01(s32 arg0, s32 arg1) {
    func_8000EFA0((void *)arg0, arg1 * 2);
}

void func_800A5BF0_ovl_01(u8 *arg0, s32 arg1) {
    u16 *src = (u16 *)arg0;
    u16 *dst = (u16 *)(arg0 + arg1 * 2);

    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    func_8000EFA0(dst, 8);
}

typedef struct {
    u8 pad[0x14];
    s32 field;
    u8 tail[0x68 - 0x18];
} S68;

extern S68 *D_80143EAC;

s32 func_800A5BA8_ovl_01(s32 arg0) {
    return D_80143EAC[arg0].field;
}

extern s32 (*D_80143FA4)(void);

s32 func_800A5C38_ovl_01(s32 arg0) {
    s32 v = arg0 & 0xFF000000;

    if (v != 0x80000000 && v != 0xB0000000) {
        arg0 = D_80143FA4();
    }
    return arg0;
}
