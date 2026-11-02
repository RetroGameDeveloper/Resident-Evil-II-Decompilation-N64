typedef struct S_s2_801661CC {
    u8 unk_00[0x2A];
    s16 unk_2A;
    u8 unk_2C[6];
    s16 unk_32;
} S_s2_801661CC;

typedef struct S_sD_801661CC {
    u8 unk_00[0x1A5C];
    s32 unk_1A5C;
    u8 unk_1A60[0x1D40 - 0x1A60];
    S_s2_801661CC *unk_1D40;
    u8 unk_1D44[0x18000 - 0x1D44];
} S_sD_801661CC;

typedef struct S_func_801661CC_ovl_33_arg0 {
    u8 unk_00[4];
    union {
        s32 w;
        struct { u8 b0; u8 b1; u8 unk_06; u8 b3; } ub;
    } u4;
    u8 unk_08[0x28 - 0x08];
    union {
        s32 w;
        struct { s16 h0; s16 unk_2A; } hw;
    } u28;
    u8 unk_2C[0x30 - 0x2C];
    union {
        s32 unk_30;
        struct { s16 h0; s16 unk_32; } hw;
    } u30;
    u8 unk_34[0x1A4 - 0x34];
    s32 unk_1A4;
    u8 unk_1A8[0x1E0 - 0x1A8];
    s16 unk_1E0;
    s16 unk_1E2;
    s16 unk_1E4;
    u8 unk_1E6[0x1E8 - 0x1E6];
    union {
        s32 w;
        struct { u8 b0; u8 unk_1E9; u8 b2; u8 b3; } ub;
    } u1E8;
    u8 unk_1EC[0x1F4 - 0x1EC];
    u16 unk_1F4;
    u8 unk_1F6[0x214 - 0x1F6];
    s32 unk_214;
    u8 unk_218[0x25C - 0x218];
    u8 unk_25C;
    u8 unk_25D[0x26F - 0x25D];
    u8 unk_26F;
} S_func_801661CC_ovl_33_arg0;

extern S_sD_801661CC D_800C7650_ovl_01[];

void func_80077B0C_ovl_01(s32 arg0, void *arg1);
u16 func_80032D44_ovl_01(s16 arg0, s16 arg1, s16 arg2, s16 arg3);
void func_80040E88_ovl_01(void *arg0, void *arg1);
void func_8004279C_ovl_01(void *arg0, void *arg1, void *arg2);
s32 func_80089D34_ovl_01(void *arg0, void *arg1, void *arg2, s32 arg3);
void func_80077F60_ovl_01(s32 arg0, s32 arg1, void *arg2);

void func_801661CC_ovl_33(S_func_801661CC_ovl_33_arg0 *s1, void *s2, void *s3) {
    static void *const jtbl_80167020_ovl_33[5] = { &&L0, &&L1, &&L2, &&L3, &&L4 };
    s16 a30[3];
    s16 a10[4];
    S_sD_801661CC *d;
    s32 state;
    u32 base;

    state = s1->u4.ub.unk_06;
    base = (u32)jtbl_80167020_ovl_33;
    if (state < 5) {
        goto *((void *const *)base)[state];
    }
    goto end;
L0:
    s1->u1E8.w = 0x05000700;
    s1->unk_26F |= 0x80;
    s1->u4.ub.unk_06 = 1;
    func_80077B0C_ovl_01(0x04020001, &s1->u28);
    s1->unk_25C |= 0x12;
    d = &D_800C7650_ovl_01[1];
    a30[1] = func_80032D44_ovl_01(s1->u28.hw.unk_2A, s1->u30.hw.unk_32, d->unk_1D40->unk_2A, d->unk_1D40->unk_32);
    a30[0] = 0;
    a30[2] = 0;
    func_80040E88_ovl_01(a30, a10);
    a30[0] = 0x258;
    a30[1] = 0;
    func_8004279C_ovl_01(a10, a30, &s1->unk_1E0);
    if (func_80089D34_ovl_01(s1, s2, s3, 0x100) != 0) {
        s1->u1E8.w = 0x03000300;
        s1->u4.ub.unk_06 = 2;
        s1->unk_1F4 = 0xF;
    }
    /* fall through */
L1:
    s1->u28.w += s1->unk_1E0;
    s1->u30.unk_30 += s1->unk_1E4;
    s1->unk_1E0 = (s16)((u16)s1->unk_1E0 >> 1);
    s1->unk_1E4 = (s16)((u16)s1->unk_1E4 >> 1);
    if (s1->u1E8.ub.unk_1E9 == 3 || s1->u1E8.ub.unk_1E9 == 0xB) {
        func_80077F60_ovl_01(2, 0, s1);
    }
    goto end;
L2:
    func_80089D34_ovl_01(s1, s2, s3, 0x400);
    s1->unk_1F4 = s1->unk_1F4 - 1;
    if ((s16)s1->unk_1F4 == -1) {
        s1->u1E8.w = 0x01000300;
        s1->u4.ub.unk_06 = 3;
    }
    goto end;
L3:
    if (func_80089D34_ovl_01(s1, s2, s3, 0x400) != 0) {
        s1->u1E8.w = 0x06000700;
        s1->u4.ub.unk_06 = 4;
        s1->u4.w &= ~3;
        s1->unk_25C = 0;
        s1->unk_26F &= 0x7F;
        d = &D_800C7650_ovl_01[1];
        d->unk_1A5C &= ~0x40;
    }
    goto end;
L4:
    if (func_80089D34_ovl_01(s1, (void *)s1->unk_1A4, *(void **)((u8 *)s1 + 0x218), 0x01020200) != 0) {
        s1->u4.w = 0x01000000;
    }
    goto end;
end:
    ;
}
