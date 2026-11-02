extern f64 D_80011D00;
extern void *D_800129D0;
extern void *D_800129D4;
extern s32 D_A4400000;
s32 func_8000E800(s32);
typedef struct { u16 flags; u8 pad2[2]; s32 unk4; void *unk8; s32 unkC; u8 pad10[0xC]; s32 unk1C; s32 unk20; f32 unk24; u16 unk28h; u8 pad2A[2]; s32 unk2C; } Obj;
typedef struct { u8 pad0[8]; s32 unk8; s32 unkC; s32 unk10; s32 unk14; s32 unk18; s32 unk1C; s32 unk20; u8 pad24[4]; s32 unk28; s32 unk2C; s32 unk30; s32 unk34; s32 unk38; } Config;
void func_8000ECB0(void) {
    Obj *s0;
    Config *s1;
    s32 s2, a1, flags, s3, v, x;
    f64 d;
    f32 scaled;
    Config *c;
    void *dst, *src, *limit;
    s0 = D_800129D4;
    s1 = s0->unk8;
    s2 = *(vu32 *)0xA4400010 & 1;
    a1 = func_8000E800(s0->unk4) + *(s32 *)((u8 *)s1 + s2 * 0x14 + 0x28);
    if (s0->flags & 2) s0->unk20 |= s1->unk20 & ~0xFFF;
    else s0->unk20 = s1->unk20;
    if (s0->flags & 4) {
        v = *(s32 *)((u8 *)s1 + s2 * 0x14 + 0x2C) & 0xFFF;
        d = (f64)v;
        if (v < 0) d += D_80011D00;
        scaled = s0->unk24 * (f32)d;
        if (scaled >= 2147483648.0f) { x = (s32)(scaled - 2147483648.0f); x |= 0x80000000; }
        else x = (s32)scaled;
        s0->unk2C = x;
        s0->unk2C = x | (*(s32 *)((u8 *)s1 + s2 * 0x14 + 0x2C) & ~0xFFF);
    } else s0->unk2C = *(s32 *)((u8 *)s1 + s2 * 0x14 + 0x2C);
    flags = s0->flags;
    s3 = s1->unk1C & -((flags & 0x20) == 0);
    if (flags & 0x40) { s0->unk2C = 0; a1 = func_8000E800(s0->unk4); }
    if (flags & 0x80) { s0->unk2C = (s0->unk28h << 16) & 0x03FF0000; a1 = func_8000E800(s0->unk4); }
    *(vu32 *)0xA4400004 = a1;
    *(vu32 *)0xA4400008 = s1->unk8;
    *(vu32 *)0xA4400014 = s1->unkC;
    *(vu32 *)0xA4400018 = s1->unk10;
    *(vu32 *)0xA440001C = s1->unk14;
    *(vu32 *)0xA4400020 = s1->unk18;
    c = (Config *)((u8 *)s1 + s2 * 0x14);
    *(vu32 *)0xA4400024 = s3;
    *(vu32 *)0xA4400028 = c->unk30;
    *(vu32 *)0xA440002C = c->unk34;
    *(vu32 *)0xA440000C = c->unk38;
    *(vu32 *)0xA4400030 = s0->unk20;
    *(vu32 *)0xA4400034 = s0->unk2C;
    dst = D_800129D0;
    src = s0;
    limit = (u8 *)src + 0x30;
    D_800129D0 = src;
    D_800129D4 = dst;
    D_A4400000 = s0->unkC;
    do {
        *(s32 *)dst = *(s32 *)src;
        *(s32 *)((u8 *)dst+4) = *(s32 *)((u8 *)src+4);
        *(s32 *)((u8 *)dst+8) = *(s32 *)((u8 *)src+8);
        *(s32 *)((u8 *)dst+12) = *(s32 *)((u8 *)src+12);
        src = (u8 *)src + 16;
        dst = (u8 *)dst + 16;
    } while (src != limit);
}
