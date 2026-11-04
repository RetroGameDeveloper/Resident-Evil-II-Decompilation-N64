typedef union U4_80163498 {
    s32 w;
    u8 b[4];
} U4_80163498;

typedef struct Blob16_80163498 {
    u32 w[4];
} Blob16_80163498;

typedef struct S_func_80163498_ovl_17_arg0 {
    u8 unk_00[4];
    U4_80163498 unk_04;
    u8 unk_08[0x2C - 0x08];
    s32 unk_2C;
    u8 unk_30[0x66 - 0x30];
    u16 unk_66;
    u8 unk_68[0x120 - 0x68];
    s32 unk_120;
    s32 unk_124;
    s32 unk_128;
    s32 unk_12C;
    s32 unk_130;
    s32 unk_134;
    s32 unk_138;
    s32 unk_13C;
    u8 unk_140[0x1E0 - 0x140];
    s16 unk_1E0;
    u8 unk_1E2[0x1E4 - 0x1E2];
    s16 unk_1E4;
    u8 unk_1E6[0x1E8 - 0x1E6];
    s32 unk_1E8;
    u8 unk_1EC[0x1F4 - 0x1EC];
    s16 unk_1F4;
    u16 unk_1F6;
    u8 unk_1F8[0x2B6 - 0x1F8];
    s16 unk_2B6;
    u8 unk_2B8[0x2BE - 0x2B8];
    s8 unk_2BE;
    u8 unk_2BF[0x2C2 - 0x2BF];
    u16 unk_2C2;
    u8 unk_2C4[0x2C8 - 0x2C4];
    s32 unk_2C8;
    u8 unk_2CC[0x2D2 - 0x2CC];
    u8 unk_2D2;
} S_func_80163498_ovl_17_arg0;

extern u8 D_800C7650_ovl_01[];
extern u8 D_80167C90_ovl_17[];

s32 func_80032B8C_ovl_01(void *arg0, s32 arg1);
s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80163888_ovl_17(void *arg0, s32 arg1, s32 arg2);
void func_801678B8_ovl_17(void *arg0);

void func_80163498_ovl_17(S_func_80163498_ovl_17_arg0 *s0, s32 arg1, s32 arg2) {
    u16 a0;
    s32 v0;
s32 __repair_phase_v0;
    u8 *p;

    switch (s0->unk_04.b[2]) {
    case 0:
        s0->unk_04.b[2] = 1;
        a0 = s0->unk_66 & 0xFFF;
        v0 = (s0->unk_2C2 - a0) & 0xFFF;
        s0->unk_1F4 = v0;
        s0->unk_1F6 = 0x18;
        s0->unk_66 = a0;
        if (v0 & 0x800) {
            s0->unk_1F4 = (a0 - s0->unk_2C2) & 0xFFF;
            s0->unk_1F6 = -s0->unk_1F6;
        }
        s0->unk_1E8 = 0x03000300;
        /* fallthrough */
    case 1:
        if (s0->unk_1F4 > 0) {
            s0->unk_66 = s0->unk_66 + s0->unk_1F6;
            s0->unk_1F4 = s0->unk_1F4 - 0x18;
        } else {
            s0->unk_04.b[2] = 2;
            s0->unk_66 = s0->unk_2C2;
        }
        func_80089D34_ovl_01(s0, arg1, arg2, 0x400);
        break;
    case 2:
        s0->unk_04.b[2] = 3;
        s0->unk_1E0 = 0x19;
        s0->unk_1E4 = 0;
        *(Blob16_80163498 *)((u8 *)s0 + 0x120) = *(Blob16_80163498 *)(D_80167C90_ovl_17 + 0x20);
        *(Blob16_80163498 *)((u8 *)s0 + 0x130) = *(Blob16_80163498 *)(D_80167C90_ovl_17 + 0x30);
        s0->unk_1E8 = 0x0E000300;
        /* fallthrough */
    case 3:
        func_80032B8C_ovl_01(s0, s0->unk_2B6);
        if (func_80089D34_ovl_01(s0, arg1, arg2, 0x400) != 0) {
            s0->unk_04.w = 0x01000000;
            s0->unk_2BE = 2;
            s0->unk_1E0 = 0x1C2;
            func_80032B8C_ovl_01(s0, s0->unk_2B6);
            s0->unk_2D2 = 0;
            __repair_phase_v0 = s0->unk_2C + 0x4E2;
            s0->unk_2C = __repair_phase_v0;
            s0->unk_2C8 = __repair_phase_v0;
            p = D_800C7650_ovl_01 + 0x18000;
            *(u16 *)(p + 0x1A78) &= 0xFFDF;
            func_80163888_ovl_17(s0, arg1, arg2);
        }
        break;
    }
    func_801678B8_ovl_17(s0);
}
