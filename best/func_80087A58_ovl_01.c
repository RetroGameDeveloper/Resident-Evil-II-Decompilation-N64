extern u8 D_8013A1D0[];
extern u8 D_80129E34_ovl_01[];
extern u8 D_80129FD4_ovl_01[];
extern u8 D_8013A290[];
void func_8000CB60(void *, s32, s32);
void func_80011390(void);
s32 func_800082D0(void *, void *, s32);

typedef struct S_arg0_8797C {
    u8 unk_00[0xB8];
    s32 *unk_B8;
    s32 *unk_BC;
    u8 unk_C0[0xD4 - 0xC0];
    s16 unk_D4;
    s16 unk_D6;
} S_arg0_8797C;

typedef struct S_arg1_8797C {
    u8 unk_00[0xA8];
    s32 *unk_A8;
    s32 *unk_AC;
} S_arg1_8797C;

typedef struct S_arg0_8792C {
    u8 unk_00[0x40];
    s32 *unk_40;
    s32 *unk_44;
    u8 unk_48[0x5C - 0x48];
    s16 unk_5C;
    s16 unk_5E;
} S_arg0_8792C;

typedef struct S_80087A58_arg0 {
    s32 unk_00;
    s32 *unk_04;
    s32 unk_08;
} S_80087A58_arg0;

void func_800879D0_ovl_01(s32 arg0) {
    func_8000CB60(D_8013A1D0, arg0, 0);
    func_80011390();
}

void func_8008797C_ovl_01(S_arg0_8797C *arg0, S_arg1_8797C *arg1, s32 arg2) {
    if (arg2 < arg0->unk_D6) {
        arg1->unk_A8 = arg0->unk_B8 + arg2 * arg0->unk_D4;
        arg1->unk_AC = arg0->unk_BC + arg2 * arg0->unk_D4;
    }
}

void func_80087A58_ovl_01(S_80087A58_arg0 *arg0) {
    *arg0->unk_04 = func_800082D0(D_8013A290, &D_80129E34_ovl_01[arg0->unk_00 * 0x68], arg0->unk_00);
    if (*arg0->unk_04 == 0) {
        D_80129FD4_ovl_01[arg0->unk_00] = 2;
    } else {
        D_80129FD4_ovl_01[arg0->unk_00] = 0;
    }
    if (arg0->unk_08 != 0) {
        func_8000CB60((void *)arg0->unk_08, 0, 0);
    }
}

void func_8008792C_ovl_01(S_arg0_8792C *arg0, S_arg1_8797C *arg1, s32 arg2) {
    if (arg2 < arg0->unk_5E) {
        arg1->unk_A8 = arg0->unk_40 + arg2 * arg0->unk_5C;
        arg1->unk_AC = arg0->unk_44 + arg2 * arg0->unk_5C;
    }
}
