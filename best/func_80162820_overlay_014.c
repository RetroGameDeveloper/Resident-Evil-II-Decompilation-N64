typedef struct {
    u8 pad0[0x1A78];
    union { u32 w; u16 h[2]; } u1A78;
    u8 pad1[0x1A85 - 0x1A7C];
    u8 f1A85;
    u8 pad2[0x1C72 - 0x1A86];
    s16 f1C72;
    u8 pad3[0x1D38 - 0x1C74];
    void *f1D38[1];
} Sub;
typedef struct { u8 pad[0x18000]; Sub sub; } Big;
extern Big D_800C7650_ovl_01;
extern u8 D_800E10D0_ovl_01[];

void *func_80162820_overlay_014(u8 *p) {
    s32 r;
    u32 x;
    if (D_800C7650_ovl_01.sub.f1C72 < 0)
        return 0;
    if (p[4] == 7) {
        p[0x2B5] = 0;
        return 0;
    }
    if (*(u16 *)(p + 0x2C8) & 1) {
        p[0x2B5] = 1;
        return D_800E10D0_ovl_01;
    }
    if (p[0xD] < 2) {
        p[0x2B5] = 2;
        return D_800C7650_ovl_01.sub.f1D38[p[0xD]];
    }
    r = ((s32 (*)(s32, s32, s32, s32))func_80036764_ovl_01_510)(*(s32 *)(p + 0x28C), 0xBB8, 0x1388, 0x1B58);
    switch (r) {
    case 0:
        x = D_800C7650_ovl_01.sub.f1A85;
        break;
    case 1:
        x = D_800C7650_ovl_01.sub.u1A78.w & 0x17;
        break;
    case 2:
    case 3:
        x = D_800C7650_ovl_01.sub.u1A78.h[1] & 0x5;
        break;
    default:
        return 0;
    }
    if (!x)
        return 0;
    p[0x2B5] = 2;
    return D_800E10D0_ovl_01;
}
