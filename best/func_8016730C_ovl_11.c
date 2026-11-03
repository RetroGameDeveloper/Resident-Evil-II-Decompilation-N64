typedef struct S_obj_11 {
    u8 pad0[4];
    /*0x004*/ union {
        s32 unk4;
        struct { u8 pad4; u8 unk5; u8 unk6; u8 pad7; } b;
    } u4;
    u8 pad8[0x5E];
    /*0x066*/ u16 unk66;
    u8 pad68[0x142];
    /*0x1AA*/ u16 unk1AA;
    u8 pad1AC[0x34];
    /*0x1E0*/ u16 unk1E0;
    /*0x1E2*/ u16 unk1E2;
    /*0x1E4*/ u16 unk1E4;
    u8 pad1E6[2];
    /*0x1E8*/ s32 unk1E8;
    u8 pad1EC[0xA];
    /*0x1F6*/ u16 unk1F6;
    u8 pad1F8[0xE];
    /*0x206*/ s8 unk206;
    u8 pad207[0x2D];
    /*0x234*/ void *unk234;
    u8 pad238[0x28];
    /*0x260*/ s16 unk260;
    /*0x262*/ s16 unk262;
    u8 pad264[8];
    /*0x26C*/ u16 unk26C;
    /*0x26E*/ u8 unk26E;
    u8 pad26F[0x1D];
    /*0x28C*/ u32 unk28C;
    u8 pad290[0x26];
    /*0x2B6*/ u16 unk2B6;
    u8 pad2B8[6];
    /*0x2BE*/ u8 unk2BE;
    /*0x2BF*/ s8 unk2BF;
    u8 pad2C0[0x15];
    /*0x2D5*/ u8 unk2D5;
} S_obj_11;

extern u8 D_800C7650_ovl_01[];

void func_80032B8C_ovl_01(void *, s32);
void func_80032DEC_ovl_01(void *, s16, s16, s32);
s32 func_80032EA4_ovl_01(void *, s32, s32, s32);
void func_800334F8_ovl_01(void *, void *, void *, s32);
s32 func_80033634_ovl_01(void);
void func_800377B0_ovl_01(s32, s16, void *, void *);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, void *, void *, s32);
void func_80167890_ovl_11(void *);
void func_80167A3C_ovl_11(void *);

void func_8016730C_ovl_11(S_obj_11 *arg0, void *arg1, void *arg2)
{
    s16 stk[8];
    u8 *s3;
    s32 t0;
    s32 n;

    stk[0] = -0x1C2;
    stk[1] = 0;

    switch (arg0->u4.b.unk6) {
    case 0:
        arg0->unk1F6 = 0xA;
        arg0->u4.b.unk6 = 1;
        n = (arg0->unk26C & 0x20) != 0;
        arg0->unk1E8 = ((4 - n) << 24) + 0x300;
        arg0->unk1E4 = 0;
        arg0->unk1E0 = *(u16 *)((u8 *)stk + ((arg0->unk26C >> 4) & 2));
        func_80032B8C_ovl_01(arg0, 0);
        func_80032DEC_ovl_01(arg0, arg0->unk260, arg0->unk262, 0x10);
        t0 = 0;
        if (arg0->unk2D5 == 0) {
            s32 a = 0xD;
            if (func_80033634_ovl_01() & 1) {
                a = 0xC;
            }
            func_80077D48_ovl_01(a, arg0);
            arg0->unk2D5 = 0x96;
            t0 = 0;
        }
        arg0->unk206 = 1;
        if (arg0->unk26C & 0x20) {
            t0 = 0x800;
            arg0->unk206 = -1;
        }
        if ((arg0->unk26E % 3) & 0xFF) {
            s3 = (u8 *)arg0->unk234 + 0xBC0;
            stk[4] = *(u16 *)(s3 + 0x1E) - (arg0->unk206 * 0x64);
            stk[5] = *(u16 *)(s3 + 0x22) + 0x12C;
            stk[6] = *(u16 *)(s3 + 0x26);
            func_800377B0_ovl_01(0x17D0, (s16)(arg0->unk66 - t0),
                                 (u8 *)arg0->unk234 + 0x38, &stk[4]);
        } else {
            stk[4] = 0;
            stk[5] = 0x320;
            stk[6] = 0;
            func_800377B0_ovl_01(0x17D0, (s16)(arg0->unk66 - t0),
                                 (u8 *)arg0->unk234 + 0x1B0, &stk[4]);
            arg0->unk206 = 0;
        }
        if ((arg0->u4.b.unk5 == 0xA) && !(arg0->unk1AA & 0x80)) {
            func_80167890_ovl_11(arg0);
            arg0->unk2B6 |= 0x800;
        }
        if (arg0->u4.b.unk5 == 0xB) {
            if (!(arg0->unk2B6 & 0x1000) && !(func_80033634_ovl_01() & 1)) {
                s32 r1 = func_80033634_ovl_01();
                s32 r2 = func_80033634_ovl_01();
                s32 bit = ((r1 & 0xFF) >> (r2 & 3)) & 1;
                u16 v = arg0->unk2B6 | 0x20;
                arg0->unk2B6 = v;
                if (bit != 0) {
                    arg0->unk2B6 = (v & 0xFFDF) | 0x40;
                }
                s3 = (u8 *)arg0->unk234 + (bit * 0x468) + 0xEB0;
                *(s16 *)(s3 + 0x130) = 0;
                *(s16 *)(s3 + 0x132) = 0;
                *(s16 *)(s3 + 0x136) = -0x7FCE;
                *(u8 *)(s3 + 0x134) = 5;
                *(u8 *)(s3 + 0x135) = 5;
                *(u32 *)(s3 + 0x60) = 0x304040;
                *(u32 *)s3 |= 0x10;
                func_800377B0_ovl_01(0x040F0BB8, (s16)arg0->unk66, s3 + 0x38, NULL);
                s3 += 0x178;
                *(s16 *)(s3 + 0x130) = 0;
                *(s16 *)(s3 + 0x132) = 0;
                *(s16 *)(s3 + 0x136) = -0x7FCE;
                *(u8 *)(s3 + 0x134) = 5;
                *(u8 *)(s3 + 0x135) = 5;
                *(u32 *)(s3 + 0x60) = 0x304040;
                *(u32 *)s3 |= 0x10;
                func_800377B0_ovl_01(0x040F07D0, (s16)arg0->unk66, s3 + 0x38, NULL);
            }
            func_80167A3C_ovl_11(arg0);
        }
        /* fallthrough */
    case 1:
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        arg0->u4.b.unk6 = arg0->u4.b.unk6 + func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        func_80032B8C_ovl_01(arg0, 0);
        if (((s16)arg0->unk1F6 != 0) && (arg0->unk206 != 0)) {
            if (!(arg0->unk1F6 & 1)) {
                s3 = (u8 *)arg0->unk234;
                if (arg0->unk2BE == 0) {
                    s32 r1 = func_80033634_ovl_01();
                    s32 r2;
                    s32 off = (r1 & 0xFF) << 4;
                    r2 = func_80033634_ovl_01();
                    func_800377B0_ovl_01(0x1F40, (s16)((arg0->unk66 + off) - ((r2 & 0xFF) << 4)),
                                         s3 + 0x38, (void *)&arg0->unk1E0);
                } else {
                    s32 r1;
                    s32 r2;
                    s32 off;
                    arg0->unk1E2 = arg0->unk1E2 - 0x1F4;
                    r1 = func_80033634_ovl_01();
                    off = (r1 & 0xFF) << 4;
                    r2 = func_80033634_ovl_01();
                    func_800377B0_ovl_01(0x13E8, (s16)((arg0->unk66 + off) - ((r2 & 0xFF) << 4)),
                                         s3 + 0x38, (void *)&arg0->unk1E0);
                }
            }
            arg0->unk1F6 = arg0->unk1F6 - 1;
        }
        break;
    case 2:
        arg0->u4.unk4 = 0x01010000;
        if (arg0->unk2BF <= 0) {
            arg0->unk2BF = (func_80033634_ovl_01() & 0x10) + 0xF;
            arg0->unk2BE = 0;
        }
        {
            u8 *base = D_800C7650_ovl_01 + 0x18000;
            s32 hit = 0;
            if ((func_80032EA4_ovl_01(arg0, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 0x200) == 0) &&
                (arg0->unk28C < 0xFA0) && !(*(u8 *)(base + 0x1CEF) & 0x80)) {
                hit = (func_80033634_ovl_01() & 3) == 0;
            }
            if (hit != 0) {
                arg0->u4.unk4 = 0x010B0000;
                break;
            }
            {
                s32 hit2 = 0;
                if ((arg0->unk28C < 0xBB8) &&
                    (func_80032EA4_ovl_01(arg0, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 0x384) != 0)) {
                    hit2 = func_80033634_ovl_01() & 1;
                }
                if (hit2 != 0) {
                    arg0->u4.unk4 = 0x010C0000;
                    break;
                }
                if (func_80033634_ovl_01() & 1) {
                    arg0->u4.unk4 = 0x01020000;
                }
            }
        }
        break;
    }
}
