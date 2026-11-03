typedef struct S_f11_29c {
    u8 unk_00[0x131];
    u8 unk_131;
    u16 unk_132;
} S_f11_29c;

typedef struct S_f11_e {
    s32 unk_00;
    u8 unk_04[4];
    s32 unk_08[6];
    s32 unk_20;
    u8 unk_24[0x14];
    u8 unk_38[0x140];
} S_f11_e;

typedef struct S_f11 {
    u8 unk_00[4];
    union {
        s32 unk_04;
        struct { u16 unk_04h; u8 unk_06; u8 unk_07; } unk_04b;
    } u04;
    u8 unk_08[0x20];
    union {
        s32 unk_28;
        struct { s16 unk_28h; s16 unk_2A; } unk_28b;
    } u28;
    u8 unk_2C[4];
    union {
        s32 unk_30;
        struct { s16 unk_30h; s16 unk_32; } unk_30b;
    } u30;
    u8 unk_34[0x170];
    s32 unk_1A4;
    u8 unk_1A8[0x38];
    union { volatile u16 unk_1E0; s16 unk_1E0s; } u1E0;
    s16 unk_1E2;
    s16 unk_1E4;
    u8 unk_1E6[2];
    s32 unk_1E8;
    u8 unk_1EC[8];
    union { volatile u16 unk_1F4; s16 unk_1F4s; } u1F4;
    union { u16 unk_1F6; s16 unk_1F6s; } u1F6;
    u8 unk_1F8[0x0E];
    s8 unk_206;
    u8 unk_207;
    u8 unk_208[0x10];
    s32 unk_218;
    u8 unk_21C[0x18];
    S_f11_e *unk_234;
    u8 unk_238[0x36];
    s8 unk_26E;
    u8 unk_26F[0x2D];
    S_f11_29c *unk_29C;
    u8 unk_2A0[0x14];
    u8 unk_2B4;
    u8 unk_2B5[0x20];
    u8 unk_2D5;
} S_f11;

typedef struct Mat8 { s32 m[8]; } Mat8;

extern u8 D_800C7650_ovl_01[];
extern u8 D_800E8FC8_ovl_01;

s32 func_80033634_ovl_01(void);
void func_80077D48_ovl_01(s32, void *);
s32 func_80032D44_ovl_01(s16, s16, s16, s16);
void func_800377B0_ovl_01(s32, s16, void *, s32);
void func_80040E88_ovl_01(void *, void *);
s32 func_8004279C_ovl_01(void *, void *, void *);
void func_80089D34_ovl_01(void *, s32, s32, s32);
void func_80089C1C_ovl_01(void *, void *, void *, s16);

void func_80168764_ovl_11(S_f11 *self) {
    S_f11_e *e;
    S_f11_29c *p29c;
    Mat8 mat;
    s16 vec[4];
    s32 s0;
    s32 a;
    u8 state;

    static void *const jtbl_8016DD80_ovl_11[7] = {
        &&c0, &&c1, &&c2, &&c3, &&c4, &&c5, &&c6
    };

    state = self->u04.unk_04b.unk_06;
    if (state >= 7)
        goto end;
    goto *jtbl_8016DD80_ovl_11[state];

c0:
    p29c = self->unk_29C;
    self->unk_206 = p29c->unk_131;
    if (p29c->unk_131 == 3) {
        self->unk_26E = 3;
        goto end;
    }
    if (p29c->unk_131 == 6) {
        self->unk_26E = 3;
        goto end;
    }
    self->u04.unk_04b.unk_06 = 1;
    self->u1F4.unk_1F4 = p29c->unk_132;
    e = self->unk_234;
    self->unk_1E8 = (self->unk_2B4 << 24) + 0xF00;
    e->unk_00 &= ~0x40;
    if (self->unk_2D5 == 0) {
        a = 0xD;
        if (func_80033634_ovl_01() & 1)
            a = 0xC;
        func_80077D48_ovl_01(a, self);
        self->unk_2D5 = 0x96;
    }
    {
        u8 *p = D_800C7650_ovl_01 + 0x18000;
        self->u1E0.unk_1E0 = 0x12C;
        self->unk_207 = 0x32;
        self->unk_1E2 = 0;
        self->unk_1E4 = 0;
        self->u1F6.unk_1F6 = 0;
        s0 = func_80032D44_ovl_01(self->u28.unk_28b.unk_2A,
                                  self->u30.unk_30b.unk_32,
                                  *(s16 *)(p + 0x1AAA),
                                  *(s16 *)(p + 0x1AB2));
    }
    e = (S_f11_e *)((u8 *)self->unk_234 + self->unk_206 * 376);
    func_800377B0_ovl_01((func_80033634_ovl_01() & 0xFF) * 8 + 0x1770,
                         (s16)s0, (u8 *)e + 0x38, 0);
c1:
    vec[0] = 0;
    vec[1] = self->u1F4.unk_1F4;
    vec[2] = 0;
    func_80040E88_ovl_01(vec, &mat);
    func_8004279C_ovl_01(&mat, (void *)&self->u1E0, vec);
    func_80089D34_ovl_01(self, self->unk_1A4, self->unk_218, 0x100);
    self->u28.unk_28 += vec[0];
    self->u1E0.unk_1E0 -= self->u1F6.unk_1F6;
    self->u1F6.unk_1F6 += (s8)self->unk_207;
    self->u30.unk_30 += vec[2];
    if (self->u1E0.unk_1E0s < 0)
        self->u04.unk_04b.unk_06 = 6;
    goto end;

c2:
    e = self->unk_234;
    self->u04.unk_04b.unk_06 = 3;
    self->unk_207 = (func_80033634_ovl_01() & 0x3F) + 0x1E;
    self->u1F4.unk_1F4 = 0x1000;
    self->u1F6.unk_1F6 = *(u16 *)((u8 *)e + 0x22);
c3:
    self->unk_207--;
    if ((s8)self->unk_207 == -1)
        self->u04.unk_04b.unk_06 = 4;
    func_80089D34_ovl_01(self, self->unk_1A4, self->unk_218, 0x100);
    e = self->unk_234;
    mat = *(Mat8 *)((u8 *)e + 8);
    func_80089C1C_ovl_01(&D_800E8FC8_ovl_01, &mat, (u8 *)e + 8,
                         self->u1F4.unk_1F4s);
    e->unk_20 = self->u1F6.unk_1F6s;
    if (self->u1F4.unk_1F4s >= 0x401)
        self->u1F4.unk_1F4 -= 0x200;
    goto end;

c4:
    self->u04.unk_04b.unk_06 = 5;
    self->unk_207 = 0x14;
c5:
    self->unk_207--;
    if ((s8)self->unk_207 == -1)
        self->u04.unk_04b.unk_06 = 6;
    func_80089D34_ovl_01(self, self->unk_1A4, self->unk_218, 0x100);
    e = self->unk_234;
    mat = *(Mat8 *)((u8 *)e + 8);
    func_80089C1C_ovl_01(&D_800E8FC8_ovl_01, &mat, (u8 *)e + 8,
                         self->u1F4.unk_1F4s);
    e->unk_20 = self->u1F6.unk_1F6s;
    self->u1F4.unk_1F4 += 0x99;
    goto end;

c6:
    e = self->unk_234;
    e->unk_00 &= ~0x40;
    self->u04.unk_04 = 0x1010000;
    if (func_80033634_ovl_01() & 1)
        self->u04.unk_04 = 0x1020000;
end:
    ;
}
