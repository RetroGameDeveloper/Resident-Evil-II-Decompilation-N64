extern u8 D_800E10D0_ovl_01[];
extern u8 D_800E8FC8_ovl_01[];
s32 func_80032B8C_ovl_01(void *arg0, s32 arg1);
s32 func_80032DEC_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80032EA4_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80033174_ovl_01(void *arg0, void *arg1);
s32 func_800334F8_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_800377B0_ovl_01(s32 arg0, s32 arg1, void *arg2, void *arg3);
s32 func_80052C00_ovl_01(s32 arg0, s32 arg1);
s32 func_80052D40_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80059E30_ovl_01(s32 arg0, s32 arg1);
s32 func_8008A974_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80036BB4(void *arg0, s32 arg1, s32 arg2, s32 arg3);

typedef struct {
    u8 unk_00[4];
    s32 unk_04;
    u8 unk_08[0x1E0];
    s32 unk_1E8;
    u8 unk_1EC[8];
    s16 unk_1F4;
    u8 unk_1F6[0x3E];
    u8 *unk_234;
    u8 unk_238[0x54];
    s32 unk_28C;
    u8 unk_290[0x34];
    u8 *unk_2C4;
    u16 unk_2C8;
    u8 unk_2CA;
    u8 unk_2CB[3];
    u8 unk_2CE;
} S_main;

void func_80163B5C_ovl_16(S_main *p, s32 arg1, s32 arg2)
{
    u8 *s1;
    u8 a0v;
    u16 sp10[3];

    s1 = p->unk_234 + 0x1318;
    switch (*(u8 *)((u8 *)p + 6)) {
    case 0:
        *(u8 *)((u8 *)p + 7) = 0;
        if (!(p->unk_2C8 & 2)) {
            a0v = func_80036BB4(p, 6, 0xF, 0);
            *(u8 *)((u8 *)p + 6) = *(u8 *)((u8 *)p + 6) + a0v;
            break;
        }
        *(u8 *)((u8 *)p + 6) = *(u8 *)((u8 *)p + 6) + 1;
    case 1:
        p->unk_1E8 = 0x0F000300;
        p->unk_2CE = 4;
        p->unk_1F4 = 0;
        p->unk_2C8 |= 2;
        *(u8 *)((u8 *)p + 6) = *(u8 *)((u8 *)p + 6) + 1;
    case 2:
        func_800334F8_ovl_01(p, arg1, arg2, 0);
        func_80032DEC_ovl_01(p, *(s32 *)(p->unk_2C4 + 0x28), *(s32 *)(p->unk_2C4 + 0x30), 8);
        if (func_8008A974_ovl_01(p, arg1, arg2, 0x400) != 0) {
            p->unk_04 = 0x010F0000;
        }
        func_80032B8C_ovl_01(p, 0);
        a0v = *(u8 *)((u8 *)p + 7);
        *(u8 *)((u8 *)p + 7) = a0v + 1;
        if (p->unk_2C4[0x26F] == 0 && p->unk_1F4 == 0 && ((u32)((a0v - 1) & 0xFF) < 5) &&
            (func_80032EA4_ovl_01(p, *(s32 *)(p->unk_2C4 + 0x28), *(s32 *)(p->unk_2C4 + 0x30), 0x154) << 16) == 0 &&
            (u32)p->unk_28C < 0xAF0) {
            if (*(s16 *)(p->unk_2C4 + 0x1F2) >= 0) {
                *(u8 **)(p->unk_2C4 + 0x250) = (u8 *)p;
                *(s32 *)(p->unk_2C4 + 4) = 0x02000000;
                p->unk_2C4[5] = p->unk_2C4[5] + func_80033174_ovl_01(p, D_800E10D0_ovl_01);
                sp10[0] = *(u16 *)(s1 + 0x4E);
                sp10[1] = *(u16 *)(s1 + 0x52) + 0xC8;
                sp10[2] = *(u16 *)(s1 + 0x56);
                func_800377B0_ovl_01(0x2400, 0, D_800E8FC8_ovl_01, sp10);
                func_80052C00_ovl_01(5, 0);
                func_80052D40_ovl_01(0xB, 0xC8, 0x28, 3);
                if (func_80059E30_ovl_01(0xF, 0) & 2) {
                    *(s32 *)(D_800E10D0_ovl_01 + 4) = 0x03000000;
                }
                p->unk_2CA = 0x28;
                p->unk_1F4 = 1;
            }
        }
        break;
    }
}
