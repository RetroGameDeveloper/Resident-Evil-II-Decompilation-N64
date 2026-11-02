s32 func_80033634_ovl_01(void);
s32 func_800377B0_ovl_01(s32 arg0, s32 arg1, void *arg2, void *arg3);

typedef struct {
    u8 unk_00[0x66];
    s16 unk_66;
    u8 unk_68[0x1CC];
    u8 *unk_234;
    u8 unk_238[0x7D];
    u8 unk_2B5;
    u8 unk_2B6;
    u8 unk_2B7;
    u16 unk_2B8;
    u16 unk_2BA;
} S_a;

typedef struct {
    u8 unk_00[0x120];
    u8 *unk_120;
} S_b;

void func_80166480_ovl_32(S_a *p, S_b *arg1)
{
    s16 sp10[3];
    u8 *s2;
    s32 s4;
    s32 s0;
    s32 s1;
    u8 *v;

    switch (p->unk_2B5) {
    case 0:
        p->unk_2B5 = 1;
        p->unk_2B8 = 0;
        p->unk_2BA = 0;
        p->unk_2B7 = 0;
        v = arg1->unk_120;
        if ((s16)*(u16 *)(v + 0x18) != 0) {
            *(s16 *)(v + 0x18) = (s16)*(u16 *)(v + 0x18) >> 1;
        }
        v = arg1->unk_120;
        *(u16 *)(v + 0xC) = *(u16 *)(v + 0xC) - p->unk_2B8;
        v = arg1->unk_120;
        if (*(s16 *)(v + 0xC) < -0xFD0) {
            p->unk_2B5 = 2;
        }
        p->unk_2B8 += 0x20;
        break;
    case 1:
        s0 = func_80033634_ovl_01() & 0xFF;
        v = arg1->unk_120;
        *(u16 *)(v + 0xC) = *(u16 *)(v + 0xC) + 0x20 + s0 * 4 * (1 - (p->unk_2BA & 1) * 2);
        v = arg1->unk_120;
        if (*(s16 *)(v + 0xC) >= 0x1F41) {
            *(s16 *)(v + 0xC) = 0x1F40;
        }
        v = arg1->unk_120;
        if (*(s16 *)(v + 0xC) < -0x1388) {
            *(s16 *)(v + 0xC) = -0x1388;
        }
        p->unk_2BA++;
        if ((s16)p->unk_2BA >= 0x12D) {
            p->unk_2B5 = 3;
        }
        s4 = (s16)p->unk_2BA < 0x97 ? 0x1FA0 : 0x17D0;
        if ((s16)p->unk_2BA >= 0xFB) {
            s4 = 0xFD0;
        }
        if (p->unk_2BA & 1) {
            s2 = p->unk_234;
            sp10[0] = 0x80 - (func_80033634_ovl_01() & 0xFF);
            sp10[1] = 0x80 - (func_80033634_ovl_01() & 0xFF);
            sp10[2] = 0x80 - (func_80033634_ovl_01() & 0xFF);
            s0 = func_80033634_ovl_01();
            s1 = func_80033634_ovl_01();
            s0 = ((s0 & 1) + (s1 & 0x10)) << 16 | (s4 + (s1 & 0xFF) * 4);
            func_800377B0_ovl_01(s0, p->unk_66, s2 + 0x618, sp10);
        }
        break;
    case 2:
        v = arg1->unk_120;
        *(u16 *)(v + 0xC) = *(u16 *)(v + 0xC) + 0x40;
        v = arg1->unk_120;
        if (*(s16 *)(v + 0xC) >= 0x2EE1) {
            p->unk_2B5 = 4;
        }
        break;
    case 3:
        v = arg1->unk_120;
        *(u16 *)(v + 0xC) = *(u16 *)(v + 0xC) - 0x80;
        v = arg1->unk_120;
        if (*(s16 *)(v + 0xC) < 0) {
            p->unk_2B5 = 5;
        }
        break;
    case 4:
    case 5:
        break;
    }
}
