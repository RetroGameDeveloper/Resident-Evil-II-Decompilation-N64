extern u8 D_800C7650_ovl_01[];
extern s8 D_80167F40_ovl_20;
extern s8 D_80167F41_ovl_20;
extern s16 D_80167F42_ovl_20;
extern s16 D_80167F44_ovl_20;
extern s16 D_80167F46_ovl_20;
extern s16 D_80167F48_ovl_20;
extern s8 D_80167F4A_ovl_20;
extern s8 D_80167F4B_ovl_20;

void func_8016778C_ovl_20(void);
void func_80167A64_ovl_20(void);
void func_80162034_ovl_20(void);

s32 func_80033634_ovl_01(void);
void func_80033A0C_ovl_01(void *, s32, u32, s32, void *);
void func_800662B8_ovl_01(void *, void *);
void func_80066584_ovl_01(void *, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80035DEC_ovl_01(void *, s32);

#define F16(o) (*(s16 *)((u8*)arg0 + (o)))
#define F8(o)  (*(u8 *)((u8*)arg0 + (o)))

void func_80162050_ovl_20(u8 *arg0, s32 arg1, s32 arg2)
{
    u8 *base;
    u8 *p;
    u8 *q;
    u8 *blk;
    u32 v;

    F16(0x1F2) = 0x258;
    base = D_800C7650_ovl_01 + 0x18000;
    *(u32 *)(arg0 + 0x4) = 0x01000000;
    F16(0x26C) = 0;
    F16(0x268) = 0;
    F16(0x264) = 0;
    F8(0x26F) = 0;
    if (*(u32 *)(base + 0x1A3C) & 0x20) {
        F16(0x1F2) = 0x1C2;
    }
    q = *(u8 **)(arg0 + 0x234);
    F8(0x1ED) = -0x7E;
    F8(0x1EE) = -0x7E;
    F8(0x1EF) = -0x7E;
    F8(0x25D) = 4;
    F8(0x25C) = 0;
    p = q + 0x5E0;
    *(u32 *)(arg0 + 0x0) |= 0x04000000;
    *(s16 *)(p + 0x134) = 0x20;
    *(s16 *)(p + 0x136) = 0x20;
    *(s16 *)(p + 0x138) = 0x32C;
    *(s16 *)(p + 0x13A) = 0x138;
    *(s16 *)(p + 0x130) = 0;
    *(s16 *)(p + 0x132) = 0;
    F16(0x2B4) = 0xA;
    F16(0x2B6) = 0;
    v = func_80033634_ovl_01();
    F8(0x2B8) = ((v & 0xFF) >> 1) + 0x78;
    F8(0x2BC) = 6;
    D_80167F40_ovl_20 = 0;
    F8(0x2B9) = 0;
    F8(0x2BD) = 0;
    F8(0x2BE) = 0;
    F8(0x2BF) = 0;
    F8(0x2C4) = 0;
    D_80167F41_ovl_20 = 0;
    D_80167F42_ovl_20 = 0;
    D_80167F44_ovl_20 = 0;
    D_80167F46_ovl_20 = 0;
    D_80167F48_ovl_20 = 0;
    D_80167F4A_ovl_20 = 0;
    D_80167F4B_ovl_20 = 0;
    *(u32 *)(arg0 + 0x284) = 3;
    F16(0x136) = 0x514;
    F16(0x138) = 0x514;
    F16(0x12C) = 0x514;
    F16(0x12E) = 0x514;
    F16(0x2BA) = 0;
    F16(0x130) = 0;
    F16(0x134) = -0x5DC;
    F16(0x132) = 0;
    F16(0x13A) = 0x5DC;
    F16(0x156) = 0x320;
    F16(0x15A) = 0x5DC;
    F16(0x158) = 0x320;
    F16(0x14C) = 0x320;
    F16(0x14E) = 0x320;
    F16(0x150) = 0;
    F16(0x154) = -0x5DC;
    F16(0x152) = 0;
    F16(0x176) = 0x320;
    F16(0x178) = 0x320;
    F16(0x16C) = 0x320;
    F16(0x16E) = 0x320;
    F16(0x28A) = 0x320;
    *(u32 *)(arg0 + 0x1E8) = 0x01000000;
    F16(0x17A) = 0x5DC;
    F16(0x170) = 0;
    F16(0x174) = -0x5DC;
    F16(0x172) = 0;
    *(u32 *)(arg0 + 0x0) |= 0x0C000000;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);

    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x05140514, 0, arg0 + 0x28);

    v = F8(8);
    *(u32 *)(base + 0x298 + (v - 0x10) * 4) = (u32)func_8016778C_ovl_20;
    v = F8(8);
    *(u32 *)(base + 0x398 + (v - 0x10) * 4) = (u32)func_80167A64_ovl_20;

    *(u32 *)(arg0 + 0x0) |= 4;
    q = *(u8 **)(arg0 + 0x234);

    p = q + 0xD38;
    *(u32 *)p &= ~0x40;
    *(u32 *)p &= ~0x2000;
    *(u32 *)(p + 0x60) = 0x808080;
    *(s16 *)(p + 0x124) = 0x1000;
    *(s16 *)(p + 0x126) = 0x1000;
    *(s16 *)(p + 0x128) = 0x1000;

    p = q + 0xEB0;
    *(u32 *)p &= ~0x200;
    *(u32 *)p &= ~0x2000;
    *(u32 *)(p + 0x60) = 0x808080;
    *(s16 *)(p + 0x124) = 0x1000;
    *(s16 *)(p + 0x126) = 0x1000;
    *(s16 *)(p + 0x128) = 0x1000;

    p = q + 0x1028;
    *(u32 *)p &= ~0x200;
    *(u32 *)p &= ~0x2000;
    *(u32 *)(p + 0x60) = 0x808080;
    *(s16 *)(p + 0x124) = 0x1000;
    *(s16 *)(p + 0x126) = 0x1000;
    *(s16 *)(p + 0x128) = 0x1000;

    p = q + 0x11A0;
    *(u32 *)p &= ~0x200;
    *(u32 *)p &= ~0x2000;
    *(u32 *)(p + 0x60) = 0x808080;
    *(s16 *)(p + 0x124) = 0x1000;
    *(s16 *)(p + 0x126) = 0x1000;
    *(s16 *)(p + 0x128) = 0x1000;

    q = *(u8 **)(arg0 + 0x234);
    *(u32 *)(q + 0x2F0) |= 0x4000;

    *(u32 *)(base + 0x284) = func_80035DEC_ovl_01(arg0, *(s32 *)(base + 0x284));

    *(u32 *)(arg0 + 0x2A4) = (u32)func_80162034_ovl_20;

    if ((F16(0x1AA) & 0xFFF) == 1) {
        F8(0x5) = 1;
        F16(0x1AA) = 0;
        F16(0x2BA) |= 0x100;
        return;
    }
    F16(0x1AA) |= 0x4000;
    blk = *(u8 **)(arg0 + 0x234) + 0x178;
    *(s16 *)(*(u32 *)(blk + 0x120) + 0xC) = 0x1000;
    *(s16 *)(*(u32 *)(blk + 0x120) + 0x10) = 0;
    func_800662B8_ovl_01(arg0, blk);
    func_80066584_ovl_01(arg0, blk);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x01010000);
    *(u32 *)(arg0 + 0x1E8) = 0x0C000000;
    F8(0x5) = 8;

#define BLOCK(off, mask, s0v, s1v, s2v) \
    do { \
        p = *(u8 **)(arg0 + 0x234) + (off); \
        *(u32 *)p |= (mask); \
        *(s16 *)(p + 0x124) = (s0v); \
        *(s16 *)(p + 0x126) = (s1v); \
        *(s16 *)(p + 0x128) = (s2v); \
    } while (0)

    BLOCK(0x2F0, 0x400, 0, 0x1000, 0x1000);
    BLOCK(0x468, 0xC00, 0, 0x1000, 0x1000);
    BLOCK(0x5E0, 0xC00, 0, 0x1000, 0x1000);
    BLOCK(0xD38, 0x400, 0x1000, 0, 0x1000);
    BLOCK(0xEB0, 0xC00, 0x1000, 0, 0x1000);
    BLOCK(0x1028, 0xC00, 0x1000, 0, 0x1000);
    BLOCK(0x11A0, 0xC00, 0x1000, 0, 0x1000);
    BLOCK(0x1318, 0x400, 0x1000, 0, 0x1000);
    BLOCK(0x1490, 0xC00, 0x1000, 0, 0x1000);
    BLOCK(0x1608, 0xC00, 0x1000, 0, 0x1000);
    BLOCK(0x1780, 0x400, 0x400, 0xC00, 0x400);
    BLOCK(0x18F8, 0xC00, 0x400, 0xC00, 0x400);
    BLOCK(0x1A70, 0xC00, 0x800, 0xC00, 0x800);
    BLOCK(0x1BE8, 0xC00, 0x800, 0xC00, 0x800);
    BLOCK(0x1D60, 0xC00, 0x800, 0xC00, 0x800);
    BLOCK(0x1ED8, 0xC00, 0x800, 0xC00, 0x800);
    BLOCK(0x2050, 0xC00, 0x800, 0xC00, 0x800);
#undef BLOCK

    F8(0x25C) |= 2;
}
