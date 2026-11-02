typedef struct { u8 pad[0x1A78]; u16 unk_1A78; } Sub7650;
typedef struct { u8 pad[0x18000]; Sub7650 sub; } Big7650;

extern Big7650 D_800C7650_ovl_01;
extern u8 D_800E10D0_ovl_01[];

s32 func_80032EA4_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s16 func_80032D44_ovl_01(s16 arg0, s16 arg1, s16 arg2, s16 arg3);
void func_80032B8C_ovl_01(void *arg0, s32 arg1);
void func_80077D48_ovl_01(s32 arg0, void *arg1, s32 arg2);
s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_801639F0_ovl_26(u8 *p, s32 arg1, s32 arg2) {
    u8 *d;
    s16 mode;
    s32 v;

    d = D_800E10D0_ovl_01;
    mode = 0;
    if (p[7] == 0) {
        p[7] = 1;
        p[0x2C1] = 5;
        p[0x2C3] = 3;
        *(s32 *)p |= 2;
        p[0x25C] |= 2;
        *(s32 *)(p + 0x1E8) = (p[0x2CD] * 13 << 24) + 0x3F00;
        D_800C7650_ovl_01.sub.unk_1A78 |= 0x40;
        *(s32 *)p &= ~4;
        *(u8 **)(d + 0x250) = p;
        *(s32 *)(d + 4) = 0x6000000;
        *(s32 *)(d + 0x224) = *(s32 *)(p + 0x224);
        *(s32 *)(d + 0x228) = *(s32 *)(p + 0x228);
        d[0x26F] |= 0x80;
        *(s32 *)d |= 0x42;
        *(s16 *)(d + 0x1E0) = 0x64;
        *(s16 *)(d + 0x1E4) = 0;
        func_80077D48_ovl_01(0xC, p, *(s32 *)(p + 0x228));
    }
    func_80089D34_ovl_01(p, arg1, arg2, 0x40);
    v = func_80032EA4_ovl_01(d, *(s32 *)(p + 0x28), *(s32 *)(p + 0x30), 0x100);
    if ((v << 16) == 0) {
        mode = 1;
    } else {
        *(u16 *)(d + 0x66) = *(u16 *)(d + 0x66) + v;
    }
    if (*(u32 *)(p + 0x28C) < 0x5DD) {
        mode |= 2;
    } else {
        func_80032B8C_ovl_01(d,
                             func_80032D44_ovl_01(*(s16 *)(d + 0x2A), *(s16 *)(d + 0x32),
                                                  *(s16 *)(p + 0x2A), *(s16 *)(p + 0x32)) -
                                 *(s16 *)(d + 0x66));
    }
    if (mode == 3) {
        *(s16 *)(p + 6) = 0x100;
        p[0x2C3] = 0xFF;
    }
}
