typedef struct S_ent_691AC {
    /*0x000*/ u32 unk00;
    /*0x004*/ union {
        s32 unk04;
        struct { u8 pad04; u8 unk05; u8 unk06; u8 pad07; } b;
    } u4;
    /*0x008*/ u8 pad08[0x5E];
    /*0x066*/ s16 unk66;
    /*0x068*/ u8 pad68[0xC4];
    /*0x12C*/ s16 unk12C;
    /*0x12E*/ s16 unk12E;
    /*0x130*/ u8 pad130[4];
    /*0x134*/ s16 unk134;
    /*0x136*/ s16 unk136;
    /*0x138*/ s16 unk138;
    /*0x13A*/ s16 unk13A;
    /*0x13C*/ u8 pad13C[0x6E];
    /*0x1AA*/ u16 unk1AA;
    /*0x1AC*/ u8 pad1AC[0x3E];
    /*0x1EA*/ u8 unk1EA;
    /*0x1EB*/ u8 pad1EB[7];
    /*0x1F2*/ s16 unk1F2;
    /*0x1F4*/ u16 unk1F4;
    /*0x1F6*/ s16 unk1F6;
    /*0x1F8*/ u8 pad1F8[0xE];
    /*0x206*/ u8 unk206;
    /*0x207*/ s8 unk207;
    /*0x208*/ u8 pad208[0x2C];
    /*0x234*/ u8 *unk234;
    /*0x238*/ u8 pad238[0x34];
    /*0x26C*/ u16 unk26C;
    /*0x26E*/ u8 unk26E;
    /*0x26F*/ u8 pad26F[0x47];
    /*0x2B6*/ u16 unk2B6;
    /*0x2B8*/ u8 pad2B8[0xC];
    /*0x2C4*/ s32 unk2C4;
    /*0x2C8*/ s32 unk2C8;
    /*0x2CC*/ u8 pad2CC[9];
    /*0x2D5*/ u8 unk2D5;
    /*0x2D6*/ u8 unk2D6;
} S_ent_691AC;

s32 func_80033634_ovl_01(void);
void func_800377B0_ovl_01(u32, s16, s32, s32 *);
void func_80040E88_ovl_01(s32 *, s32 *);
void func_80042010_ovl_01(s32, s32 *);
void func_800416EC_ovl_01(s32 *, s32 *);
void func_80040D24_ovl_01(s32 *, s32);
void func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_80167890_ovl_11(void *);
void func_80167A3C_ovl_11(void *);
void func_80167C08_ovl_11(void *);

void func_801691AC_ovl_11(S_ent_691AC *arg0, s32 arg1, s32 arg2) {
    s16 sp10[3];
    s32 sp18[8];
    s32 sp38[12];
    s32 v;
s32 __repair_phase_v;
    s32 obj;
    s32 st;
    u16 t;

    sp10[0] = 0;
    sp10[1] = 0;
    sp10[2] = 0;
    switch (arg0->u4.b.unk06) {
    case 0:
        arg0->u4.b.unk06 = 1;
        arg0->unk1F4 = 0;
        { int repair_store_value = 1; arg0->unk1F6 = repair_store_value; }
        arg0->unk206 = 0;
        if (arg0->unk26C & 0x20)
            arg0->unk1F6 = -1;
        sp10[1] = 0x12C;
        func_800377B0_ovl_01(0x17D0, arg0->unk66, (s32)(arg0->unk234 + 0xBF8), (s32 *)sp10);
        v = arg0->unk2C4;
        arg0->unk1EA = 0xF;
        if ((v & 0xFF000000) == 0x01000000)
            arg0->unk2C8 = v;
        if (arg0->unk1F2 < 0) {
            u8 *base = arg0->unk234;
            arg0->unk1F2 = 0;
            arg0->unk206 = 1;
            st = func_80033634_ovl_01();
            func_800377B0_ovl_01(0x31F40, (st & 0xFF) << 4, (s32)(base + 0xBF8), (s32 *)sp10);
            arg0->unk1EA = 0xF;
        }
        if (arg0->unk2D5 == 0) {
            func_80077D48_ovl_01(0xC, arg0);
            arg0->unk2D5 = 0x96;
        }
        st = arg0->u4.b.unk05;
        if (st == 0xA && !(arg0->unk1AA & 0x80) && arg0->unk26E < 3) {
            func_80167890_ovl_11(arg0);
            arg0->unk2B6 |= 0x800;
            st = arg0->u4.b.unk05;
        }
        arg0->unk207 = 0x18;
        if (st == 0x10) {
            if (!(arg0->unk1AA & 0x80) && arg0->unk2D6 >= 9) {
                func_80167890_ovl_11(arg0);
                arg0->unk2B6 |= 0x800;
            }
            arg0->unk207 = 2;
            arg0->unk2D6++;
        }
        st = arg0->u4.b.unk05;
        if (st == 0xF) {
            arg0->unk207 = 2;
            st = arg0->u4.b.unk05;
        } else if (st == 0x12) {
            arg0->unk207 = 2;
            st = arg0->u4.b.unk05;
        }
        if (st == 0xB && arg0->unk26E < 3)
            func_80167A3C_ovl_11(arg0);
        if (arg0->u4.b.unk05 == 0xE)
            func_80167C08_ovl_11(arg0);
        /* fallthrough */
    case 1:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) == 0) {
            obj = (s32)arg0->unk234;
            v = (s16)arg0->unk1F4 * (s8)arg0->unk207;
            sp10[2] = -(v * 8) * (s16)arg0->unk1F6;
            func_80040E88_ovl_01((s32 *)sp10, sp18);
            func_80042010_ovl_01(obj + 8, sp18);
            obj += 0x178;
            func_800416EC_ovl_01(sp18, sp38);
            func_80040D24_ovl_01(sp38, obj + 8);
            t = arg0->unk1F4;
            arg0->unk1F4 = t + 1;
            if ((s16)t >= 3) {
                arg0->u4.b.unk06 = 2;
                arg0->unk1F4 = 0x10;
            }
            break;
        }
        goto advance;
    case 2:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) == 0) {
            obj = (s32)arg0->unk234;
            __repair_phase_v = (s16)arg0->unk1F4 * (s8)arg0->unk207;
            sp10[2] = -__repair_phase_v * (s16)arg0->unk1F6;
            func_80040E88_ovl_01((s32 *)sp10, sp18);
            func_80042010_ovl_01(obj + 8, sp18);
            obj += 0x178;
            func_800416EC_ovl_01(sp18, sp38);
            func_80040D24_ovl_01(sp38, obj + 8);
            t = arg0->unk1F4 - 1;
            arg0->unk1F4 = t;
            if ((s16)t == -1)
                arg0->u4.b.unk06 = 3;
            break;
        }
        goto advance;
    case 3:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) == 0)
            break;
        goto advance;
    }
    return;
advance:
    arg0->unk136 = 0x1F4;
    arg0->unk138 = 0x1F4;
    arg0->unk12C = 0x1F4;
    arg0->unk12E = 0x1F4;
    arg0->unk134 = -0x5DC;
    arg0->unk13A = 0x5DC;
    arg0->unk2B6 &= 0xFFED;
    arg0->unk00 |= 0x0C000000;
    arg0->u4.unk04 = arg0->unk2C8;
    arg0->unk1AA &= 0xDFFF;
    arg0->u4.b.unk06++;
}
