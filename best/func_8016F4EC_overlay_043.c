extern volatile s32 D_80171D38_ovl_07;
extern volatile u8 D_80171D28_ovl_07;
extern volatile u8 D_80171D2B_ovl_07;
extern volatile u16 D_80171D2C_ovl_07;
extern volatile u16 D_80171D44_ovl_07;
extern volatile s32 D_80171D3C_ovl_07;
extern volatile s32 D_80171D40_ovl_07;
extern volatile u8 D_80119E10_ovl_01;
extern u8 D_80119E84_ovl_01[];
extern void *D_80119E40_ovl_01;
extern u8 D_800C7650_ovl_01[];
extern u8 D_801719FC_ovl_07[];
extern u8 D_80171DD0_ovl_07[];
extern u8 D_800E8AD0[];
extern s32 D_8010B698_ovl_01;

void func_8004CCD8_ovl_01(s32, s32);
void func_8004CDB8_ovl_01(s32);
void func_80076CB4_ovl_01(void);
void func_80077000_ovl_01(void);
void func_80077460_ovl_01(s32, s32);
void func_80077808_ovl_01(s32);
void func_8009F2C0_ovl_01(s32);
s32 func_80170814_ovl_07(void);
void func_80171188_ovl_07(s32);
void func_801711DC_ovl_07(s32, s32, s32, s32);
void func_80171488_ovl_07(void);
void func_8017001C_ovl_07(s32, s32, s32);
void func_8016EB40_ovl_07(void);
void func_8016EAE4_ovl_07(void);
void func_8016EC28_ovl_07(void);
s32 D_8009BE70(s32, s32);
void D_8009BE98(s32, s32);

typedef union U64 { u64 q; struct { u32 lo; u32 hi; } w; } U64;

#define SETB() (off = 0x18000, b.q = (u64)(u32)D_800C7650_ovl_01, (u8 *)(off + (u32)b.q))
#define SETSND() (b.q = (u64)(u32)D_80119E84_ovl_01, (u8 *)(u32)b.q)
#define A5C(p) (*(volatile s32 *)((u8 *)(p) + 0x1A5C))
#define A3C(p) (*(volatile s32 *)((u8 *)(p) + 0x1A3C))
#define C25C(p) (*(volatile u16 *)((u8 *)(p) + 0x25C))

void func_8016F4EC_overlay_043(void) {
    volatile u16 local[5];
    U64 b;
    u32 off;
    u8 *p;
    u8 *snd;
    s32 v;
    s32 r;
    u32 *s;
    u32 *d;
    s32 i;
    u8 *e;

    local[0] = 0x258;
    local[1] = 0x4B0;

    switch (D_80171D2B_ovl_07) {
    case 0:
        if (D_80119E10_ovl_01 == 0) {
            p = SETB();
            v = A5C(p);
            if (v & 0x40000000) {
                func_8009F2C0_ovl_01(0xE);
            }
            local[4] = 0x26FF;
            D_80119E40_ovl_01 = (void *)&local[4];
            snd = SETSND();
            snd[1] = 0;
            *(u16 *)(snd + 4) = 0x64;
            *(u16 *)(snd + 6) = 0x64;
            func_80076CB4_ovl_01();
            func_80077808_ovl_01(0x01000000);
            D_80171D2B_ovl_07 = 1;
            D_80171D38_ovl_07 = 0;
        }
        break;

    case 1:
        if (D_80171D38_ovl_07 == 0x12C) {
            func_80171488_ovl_07();
            D_80171D2B_ovl_07 = 3;
            D_80171D38_ovl_07 = 0;
        }
        break;

    case 2:
        break;

    case 3:
        p = SETB();
        if (!(A3C(p) & 0x200)) {
            if (!(A5C(p) & 0x40000000)) {
                func_80077460_ovl_01(0xB4, 0x18);
                D_80171D44_ovl_07 |= 0x800;
            }
            D_80171D2B_ovl_07 = 4;
            D_80171D38_ovl_07 = 0;
        }
        break;

    case 4:
        if (D_80119E10_ovl_01 == 0) {
            p = SETB();
            if (!(A5C(p) & 0x40000000)) {
                local[4] = 0xFFFF;
                D_80119E40_ovl_01 = (void *)&local[4];
                snd = SETSND();
                snd[1] = 0;
                *(u16 *)(snd + 4) = 0x64;
                *(u16 *)(snd + 6) = 0x64;
                func_80076CB4_ovl_01();
            }
            v = A5C(p);
            func_80171188_ovl_07(v < 0);
            func_801711DC_ovl_07(0, 0, 1, 0);
            D_80171D44_ovl_07 |= 0x800;
            func_8016EB40_ovl_07();
            local[4] = 0x26FF;
            D_80119E40_ovl_01 = (void *)&local[4];
            snd = SETSND();
            snd[1] = 0;
            *(u16 *)(snd + 4) = 0x64;
            *(u16 *)(snd + 6) = 0x64;
            func_80076CB4_ovl_01();
            func_80077808_ovl_01(0x01000000);
            D_80171D2B_ovl_07 = 5;
            D_80171D38_ovl_07 = 0;
            D_80171D28_ovl_07 = 0;
        }
        break;

    case 5:
        p = SETB();
        if (C25C(p) & 0x800) {
            if (D_80171D38_ovl_07 < 0x12C) {
                if (D_80171D28_ovl_07 == 0) {
                    D_80171D38_ovl_07 = 0x1E0;
                }
            } else if (D_80171D28_ovl_07 == 0) {
                D_80171D38_ovl_07 = 0x1E0;
            } else if (D_80171D28_ovl_07 == 1) {
                D_80171D38_ovl_07 = 0x4B1;
            }
        }
        if (D_80171D38_ovl_07 == 0x1E0 && D_80171D28_ovl_07 == 0) {
            e = D_801719FC_ovl_07 + (D_80171D2C_ovl_07 + 4) * 12;
            e[0] = 5;
            v = A5C(p);
            if (v & 0x40000000) {
                if (v >= 0) {
                    e[0x84] = 5;
                } else {
                    e[0x90] = 5;
                }
            } else {
                if (v >= 0) {
                    e[0x6C] = 5;
                } else {
                    e[0x78] = 5;
                }
            }
            func_8017001C_ovl_07(0x3E000, 5, 0);
            D_80171D40_ovl_07 = 0x10101000;
            D_80171D28_ovl_07 = 1;
            D_80171D38_ovl_07 = 0;
        }
        if (D_80171D38_ovl_07 >= 0x4B1) {
            if (D_80171D44_ovl_07 & 0x80) {
                D_80171D44_ovl_07 |= 0x3000;
                D_80171D3C_ovl_07 = 0x1BC0000;
                D_80171D2B_ovl_07 = 6;
            } else {
                func_80077460_ovl_01(0xB4, 0x18);
                D_80171D2B_ovl_07 = 7;
                D_80171D44_ovl_07 |= 0x2008;
            }
            func_8016EC28_ovl_07();
            D_80171D38_ovl_07 = 0;
        }
        break;

    case 6:
        if (D_80171D38_ovl_07 >= 0x12D && (C25C(SETB()) & 0x800)) {
            D_80171D38_ovl_07 = 0x385;
        }
        if (D_80171D38_ovl_07 >= 0x385) {
            func_80077460_ovl_01(0xB4, 0x18);
            D_80171D44_ovl_07 |= 0x2008;
            func_8016EC28_ovl_07();
            D_80171D2B_ovl_07 = 7;
            D_80171D38_ovl_07 = 0;
        }
        break;

    case 7:
        if (D_80119E10_ovl_01 == 0) {
            p = SETB();
            v = A5C(p);
            if (v & 0x40000000) {
                A5C(p) = v & 0xBFFFFFFF;
                r = D_8009BE70(D_8010B698_ovl_01, v);
                D_8009BE98(D_8010B698_ovl_01, r | 1);
            } else {
                A5C(p) = v | 0x40000000;
            }

            p = SETB();
            v = A5C(p);
            if (v < 0) {
                v &= 0x7FFFFFFF;
            } else {
                v |= 0x80000000;
            }
            func_80170814_ovl_07();
            A5C(p) = v;

            p = SETB();
            v = A3C(p) & 0xFFFBFFFF;
            func_8004CCD8_ovl_01(1, 2);
            A3C(p) = v;
            func_8004CDB8_ovl_01(1);

            v = A5C(p);
            if (v & 0x40000000) {
                v &= 0xBFFFFFFF;
            } else {
                v |= 0x40000000;
            }
            A5C(p) = v;

            p = SETB();
            v = A5C(p);
            if (v < 0) {
                v &= 0x7FFFFFFF;
            } else {
                v |= 0x80000000;
            }
            A5C(p) = v;

            if (A5C(p) & 0x40000000) {
                snd = SETSND();
                local[4] = 0xFFFF;
                D_80119E40_ovl_01 = (void *)&local[4];
                snd[1] = 0;
                *(u16 *)(snd + 4) = 0x64;
                *(u16 *)(snd + 6) = 0x64;
                func_80076CB4_ovl_01();

                local[4] = 0xFF33;
                D_80119E40_ovl_01 = (void *)&local[4];
                snd[9] = 0;
                *(u16 *)(snd + 0xC) = 0x64;
                *(u16 *)(snd + 0xE) = 0x64;
                snd[0x11] = 0;
                *(u16 *)(snd + 0x14) = 0x64;
                *(u16 *)(snd + 0x16) = 0x64;
                func_80076CB4_ovl_01();
                func_80077000_ovl_01();

                D_80171D2B_ovl_07 = 8;
                D_80171D38_ovl_07 = 0;
            } else {
                func_8016EAE4_ovl_07();
            }
        }
        break;

    case 8:
        if (D_80171D44_ovl_07 & 0x100) {
            func_80171188_ovl_07(2);
            func_801711DC_ovl_07(0, 0, 1, 0);
            D_80171D44_ovl_07 |= 0x800;
            func_8016EB40_ovl_07();
            func_80077808_ovl_01(0x11000000);
            D_80171D2B_ovl_07 = 9;
        } else {
            D_80171D2B_ovl_07 = 0xB;
        }
        D_80171D38_ovl_07 = 0;
        D_80171D28_ovl_07 = 1;
        break;

    case 9:
        if (C25C(SETB()) & 0x800) {
            if (D_80171D38_ovl_07 >= 0xB5 && D_80171D28_ovl_07 == 1) {
                D_80171D38_ovl_07 = 0x155;
            }
        }
        if (D_80171D38_ovl_07 == 0x28 && D_80171D28_ovl_07 == 0) {
            func_8017001C_ovl_07(0x2000000, 1, 0);
            D_80171D28_ovl_07 = 1;
        }
        if (D_80171D38_ovl_07 >= 0x155) {
            func_8017001C_ovl_07(0x2000000, 0, 0);
            D_80171D44_ovl_07 |= 0x2008;
            func_8016EC28_ovl_07();
            D_80171D2B_ovl_07 = 0xA;
            D_80171D38_ovl_07 = 0;
        }
        break;

    case 10:
        if (D_80171D38_ovl_07 == 0x3C) {
            s = (u32 *)D_80171DD0_ovl_07;
            d = (u32 *)D_800E8AD0;
            for (i = 0; i < 0x4E; i++) {
                d[0] = s[0];
                d[1] = s[1];
                d[2] = s[2];
                d[3] = s[3];
                s += 4;
                d += 4;
            }
            d[0] = s[0];
            d[1] = s[1];
            d[2] = s[2];

            p = SETB();
            A3C(p) |= 8;
            func_80170814_ovl_07();
            v = A3C(p) & 0xFFFBFFFF;
            func_8004CCD8_ovl_01(1, 2);
            A3C(p) = v;
            func_8004CDB8_ovl_01(1);
            D_80171D2B_ovl_07 = 0xB;
            D_80171D38_ovl_07 = 0;
            A3C(p) &= ~8;
        }
        break;

    case 11:
        if (D_80171D44_ovl_07 & 0x200) {
            func_80171188_ovl_07(4);
            func_801711DC_ovl_07(0, 0, 1, 0);
            D_80171D44_ovl_07 |= 0x800;
            func_8016EB40_ovl_07();
            func_80077808_ovl_01(0x11000000);
            D_80171D2B_ovl_07 = 0xC;
        } else {
            D_80171D2B_ovl_07 = 0xE;
        }
        D_80171D38_ovl_07 = 0;
        D_80171D28_ovl_07 = 1;
        break;

    case 12:
        if (C25C(SETB()) & 0x800) {
            if (D_80171D38_ovl_07 >= 0xB5 && D_80171D28_ovl_07 == 1) {
                D_80171D38_ovl_07 = 0x155;
            }
        }
        if (D_80171D38_ovl_07 == 0x28 && D_80171D28_ovl_07 == 0) {
            func_8017001C_ovl_07(0x4000000, 1, 0);
            D_80171D28_ovl_07 = 1;
            D_80171D38_ovl_07 = 0;
        }
        if (D_80171D38_ovl_07 >= 0x155) {
            func_8017001C_ovl_07(0x4000000, 0, 0);
            D_80171D44_ovl_07 |= 0x2008;
            func_8016EC28_ovl_07();
            D_80171D2B_ovl_07 = 0xD;
            D_80171D38_ovl_07 = 0;
        }
        break;

    case 13:
        if (D_80171D38_ovl_07 == 0x3C) {
            s = (u32 *)D_80171DD0_ovl_07;
            d = (u32 *)D_800E8AD0;
            for (i = 0; i < 0x4E; i++) {
                d[0] = s[0];
                d[1] = s[1];
                d[2] = s[2];
                d[3] = s[3];
                s += 4;
                d += 4;
            }
            d[0] = s[0];
            d[1] = s[1];
            d[2] = s[2];

            p = SETB();
            A3C(p) |= 9;
            func_80170814_ovl_07();
            v = A3C(p) & 0xFFFBFFFF;
            func_8004CCD8_ovl_01(1, 2);
            A3C(p) = v;
            func_8004CDB8_ovl_01(1);
            D_80171D2B_ovl_07 = 0xE;
            D_80171D38_ovl_07 = 0;
            A3C(p) &= ~8;
            A3C(p) &= ~1;
        }
        break;

    case 14:
        if (D_80171D44_ovl_07 & 0x400) {
            func_80171188_ovl_07(3);
            func_801711DC_ovl_07(0, 0, 1, 0);
            D_80171D44_ovl_07 |= 0x800;
            func_8016EB40_ovl_07();
            func_80077808_ovl_01(0x21000000);
            D_80171D2B_ovl_07 = 0xF;
            D_80171D38_ovl_07 = 0;
            D_80171D28_ovl_07 = 1;
        } else {
            func_8016EAE4_ovl_07();
        }
        break;

    case 15:
        if (D_80171D38_ovl_07 == 0x28 && D_80171D28_ovl_07 == 0) {
            func_8017001C_ovl_07(0x8000000, 5, 0);
        }
        if (D_80171D38_ovl_07 == 0x3C) {
            func_8017001C_ovl_07(0x20000000, 1, 0);
        }
        if (D_80171D38_ovl_07 == 0xF0) {
            func_8017001C_ovl_07(0x28000000, 0, 0);
            func_8017001C_ovl_07(0x10000000, 5, 0);
        }
        if (D_80171D38_ovl_07 == 0x104) {
            func_8017001C_ovl_07(0x40000000, 1, 0);
        }
        if (D_80171D38_ovl_07 >= 0x1B9) {
            func_8017001C_ovl_07(0x40000000, 0, 0);
            D_80171D44_ovl_07 |= 0x2008;
            func_8016EC28_ovl_07();
            D_80171D2B_ovl_07 = 0x10;
            D_80171D38_ovl_07 = 0;
        }
        break;

    case 16:
        if (D_80171D38_ovl_07 == 0x1E) {
            func_8017001C_ovl_07(0x50000000, 0, 0);
            func_8016EAE4_ovl_07();
        }
        break;

    case 17:
        if (D_80119E10_ovl_01 == 0) {
            local[4] = 0x30FF;
            D_80119E40_ovl_01 = (void *)&local[4];
            snd = SETSND();
            snd[1] = 0;
            *(u16 *)(snd + 4) = 0x64;
            *(u16 *)(snd + 6) = 0x64;
            func_80076CB4_ovl_01();
            func_80077808_ovl_01(0x01000000);
            func_8016EB40_ovl_07();
            D_80171D40_ovl_07 = 0x10101000;
            D_80171D2B_ovl_07 = 0x12;
            D_80171D38_ovl_07 = 0;
        }
        break;

    case 18:
        if (D_80171D38_ovl_07 == 0xB4) {
            func_8017001C_ovl_07(1, 5, 0);
        }
        break;
    }
}
