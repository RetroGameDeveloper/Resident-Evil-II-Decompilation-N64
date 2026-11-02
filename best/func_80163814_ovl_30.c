typedef union U16_80163814 {
    s16 s;
    u8 b[2];
} U16_80163814;

typedef struct S_func_80163814_ovl_30_arg0 {
    u8 unk_00[4];
    u8 unk_04;
    s8 unk_05;
    U16_80163814 unk_06;
    u8 unk_08[0x66 - 0x08];
    u16 unk_66;
    u8 unk_68[0x1E8 - 0x68];
    s32 unk_1E8;
    u8 unk_1EC[0x214 - 0x1EC];
    u32 *unk_214;
    u8 unk_218[0x25C - 0x218];
    u8 unk_25C;
    u8 unk_25D[0x2B4 - 0x25D];
    u8 unk_2B4;
    u8 unk_2B5;
    u16 unk_2B6;
    u8 unk_2B8;
    u8 unk_2B9[0x2CD - 0x2B9];
    u8 unk_2CD;
} S_func_80163814_ovl_30_arg0;

extern u8 D_800C7650_ovl_01[];

void func_800334F8_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
u16 func_80032EA4_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80032B8C_ovl_01(void *arg0, s32 arg1);
s32 func_80167730_ovl_30(void *arg0, s32 arg1);
void func_80077D48_ovl_01(s32 arg0, void *arg1);
void func_80033678_ovl_01(void *arg0);

void func_80163814_ovl_30(S_func_80163814_ovl_30_arg0 *s0, s32 arg1, s32 arg2) {
    s32 state;
    s32 one;
    u8 *p;

    state = s0->unk_06.b[1];
    one = 1;
    switch (state) {
    case 0:
        s0->unk_06.b[1] = one;
        s0->unk_1E8 = 0x09000F00;
        func_800334F8_ovl_01(s0, arg1, arg2, 0);
        func_80089D34_ovl_01(s0, arg1, arg2, 0x100);
        p = D_800C7650_ovl_01 + 0x18000;
        s0->unk_2B6 = func_80032EA4_ovl_01(s0, *(s32 *)(p + 0x1AA8), *(s32 *)(p + 0x1AB0), 0x20);
        s0->unk_2CD = 0;
        s0->unk_25C |= 1;
        break;
    case 1:
        func_800334F8_ovl_01(s0, arg1, arg2, 0);
        func_80089D34_ovl_01(s0, arg1, arg2, 0x100);
        func_80032B8C_ovl_01(s0, 0);
        s0->unk_66 += s0->unk_2B6;
        if ((*s0->unk_214 & 0x00070000) && func_80167730_ovl_30(s0, 3) != 0) {
            func_80077D48_ovl_01(0xD, s0);
            s0->unk_06.s = 0x100;
        } else if (*s0->unk_214 & 0x00080000) {
            s0->unk_06.b[1] = 2;
            s0->unk_1E8 = 0x0C000F00;
            func_800334F8_ovl_01(s0, arg1, arg2, 0);
            func_80089D34_ovl_01(s0, arg1, arg2, 0x100);
        }
        break;
    case 2:
        func_800334F8_ovl_01(s0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(s0, arg1, arg2, 0x100) != 0) {
            s0->unk_05 = state;
            s0->unk_06.s = 0;
            s0->unk_2B4 = 0;
            s0->unk_2B8 = 0x1E;
            func_80077D48_ovl_01(0xA, s0);
        }
        func_80032B8C_ovl_01(s0, 0);
        break;
    }
    func_80033678_ovl_01(s0);
}
