typedef struct S_a1_80036764 {
    s32 unk_00;
    u8 unk_04[0x34];
    s32 unk_38;
    s32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4C;
    s32 unk_50;
    s32 unk_54;
    u8 unk_58[0xD0 - 0x58];
    u8 unk_D0[0x124 - 0xD0];
    s16 unk_124;
    s16 unk_126;
    s16 unk_128;
} S_a1_80036764;

typedef struct S_a0_80036764 {
    s32 unk_00;
    u8 unk_04[0x24];
    u8 unk_28[0x50];
    u8 unk_78[0x234 - 0x78];
    void *unk_234;
} S_a0_80036764;

extern s32 D_800C7650_ovl_01[];
extern s32 D_800E8FC8_ovl_01[];

void func_80083778_ovl_01(void *a0);
void func_80042484_ovl_01(void *a0, void *a1);
void func_80040D5C_ovl_01(void *a0, void *a1);
void func_800416EC_ovl_01(void *a0, void *a1);
void func_8004251C_ovl_01(void *a0, void *a1, void *a2, s32 a3);
s32 func_80083D5C_ovl_01(void *a0, s32 a1);
void func_800411E8_ovl_01(void *a0, void *a1);
void func_800854BC_ovl_01(void *a0, void *a1, s32 a2);

void func_80036764_ovl_01(S_a0_80036764 *a0, S_a1_80036764 *a1) {
    s32 sp10[4];
    s32 sp50[8];
    s32 sp70[8];
    s32 sp90[8];
    s32 spF0[3];

    if (a1->unk_00 & 1) {
        func_80083778_ovl_01((u8 *)a0->unk_234 + 0x4C);
        func_80042484_ovl_01(D_800E8FC8_ovl_01, sp10);
        if (a1->unk_00 & 0x400) {
            sp50[0] = a1->unk_38; sp50[1] = a1->unk_3C; sp50[2] = a1->unk_40; sp50[3] = a1->unk_44;
            sp50[4] = a1->unk_48; sp50[5] = a1->unk_4C; sp50[6] = a1->unk_50; sp50[7] = a1->unk_54;
            spF0[0] = a1->unk_124; spF0[1] = a1->unk_126; spF0[2] = a1->unk_128;
            func_80040D5C_ovl_01(sp50, spF0);
            func_800416EC_ovl_01(&a1->unk_38, sp70);
            sp90[0] = D_800E8FC8_ovl_01[0]; sp90[1] = D_800E8FC8_ovl_01[1]; sp90[2] = D_800E8FC8_ovl_01[2]; sp90[3] = D_800E8FC8_ovl_01[3];
            sp90[4] = D_800E8FC8_ovl_01[4]; sp90[5] = D_800E8FC8_ovl_01[5]; sp90[6] = D_800E8FC8_ovl_01[6]; sp90[7] = D_800E8FC8_ovl_01[7];
            sp90[5] = -sp50[5]; sp90[7] = -sp50[7]; sp90[6] = -sp50[6];
            func_8004251C_ovl_01(sp70, sp90, sp70, D_800E8FC8_ovl_01[6]);
            func_8004251C_ovl_01(sp50, sp70, sp50, D_800E8FC8_ovl_01[6]);
            func_80042484_ovl_01(sp50, sp10);
        }
        if (a1->unk_00 & 0x2000) {
            sp50[0] = D_800E8FC8_ovl_01[0]; sp50[1] = D_800E8FC8_ovl_01[1]; sp50[2] = D_800E8FC8_ovl_01[2]; sp50[3] = D_800E8FC8_ovl_01[3];
            sp50[4] = D_800E8FC8_ovl_01[4]; sp50[5] = D_800E8FC8_ovl_01[5]; sp50[6] = D_800E8FC8_ovl_01[6]; sp50[7] = D_800E8FC8_ovl_01[7];
            sp50[5] = a1->unk_4C; sp50[6] = a1->unk_50; sp50[7] = a1->unk_54;
            spF0[0] = a1->unk_124; spF0[1] = a1->unk_126; spF0[2] = a1->unk_128;
            func_80040D5C_ovl_01(sp50, spF0);
            sp70[0] = D_800E8FC8_ovl_01[0]; sp70[1] = D_800E8FC8_ovl_01[1]; sp70[2] = D_800E8FC8_ovl_01[2]; sp70[3] = D_800E8FC8_ovl_01[3];
            sp70[4] = D_800E8FC8_ovl_01[4]; sp70[5] = D_800E8FC8_ovl_01[5]; sp70[6] = D_800E8FC8_ovl_01[6]; sp70[7] = D_800E8FC8_ovl_01[7];
            sp70[5] = -sp50[5]; sp70[7] = -sp50[7]; sp70[6] = -sp50[6];
            func_8004251C_ovl_01(sp50, sp70, sp50, D_800E8FC8_ovl_01[6]);
            func_80042484_ovl_01(sp50, sp10);
        }
        if (func_80083D5C_ovl_01(a0->unk_28, D_800C7650_ovl_01[0x18000/4 + 0x18290/4]) != 0 && !(a0->unk_00 & 0x80000)) {
            func_800411E8_ovl_01(sp10, &a1->unk_D0);
            func_800854BC_ovl_01(a1, a0->unk_78, 0);
        }
    }
}
