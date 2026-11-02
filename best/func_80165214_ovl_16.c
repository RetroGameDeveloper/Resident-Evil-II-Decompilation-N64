typedef struct S_arg_80165214 {
    u8 unk_00[4];
    union { s32 w; struct { u8 b0; u8 b1; u8 unk_06; u8 b3; } ub; } u4;
    u8 unk_08[0x2C - 0x08];
    s32 unk_2C;
    u8 unk_30[0x66 - 0x30];
    s16 unk_66;
    u8 unk_68[0x70 - 0x68];
    s32 unk_70;
    u8 unk_74[0x1AA - 0x74];
    u16 unk_1AA;
    u8 unk_1AC[0x1E2 - 0x1AC];
    u16 unk_1E2;
    u8 unk_1E4[0x1E8 - 0x1E4];
    s32 unk_1E8;
    u8 unk_1EC[0x1F4 - 0x1EC];
    u16 unk_1F4;
    u8 unk_1F6[0x270 - 0x1F6];
    s16 unk_270;
    u8 unk_272[0x288 - 0x272];
    s32 unk_288;
    u8 unk_28C[0x2B5 - 0x28C];
    u8 unk_2B5;
    u8 unk_2B6[0x2BC - 0x2B6];
    s32 unk_2BC;
    u8 unk_2C0[0x2C4 - 0x2C0];
    s32 unk_2C4;
    u16 unk_2C8;
    u8 unk_2CA[0x2CE - 0x2CA];
    u8 unk_2CE;
} S_arg_80165214;

extern u8 D_800C7650_ovl_01[];
extern u8 D_80166F8C_ovl_16[];

s32 func_80032D44_ovl_01(s32 a0, s32 a1, s16 a2, s16 a3);
s32 func_8008386C_ovl_01(s16 a0, s32 a1);
s32 func_8008A974_ovl_01(void *a0, void *a1, void *a2, s32 a3);
s32 func_801626E8_ovl_16(void *a0);

void func_80165214_ovl_16(S_arg_80165214 *s0, void *s1, void *s2) {
    static void *const jtbl_80167010_ovl_16[6] = { &&L0, &&L1, &&L2, &&L3, &&L4, &&L5 };
    s16 v[4];
    s32 t;
    u32 state;
    u32 base;

    state = s0->u4.ub.unk_06;
    base = (u32)jtbl_80167010_ovl_16;
    if (state < 6) { goto *((void *const *)base)[state]; }
    goto tail;
L0:
    s0->unk_1E8 = 0x03000000;
    s0->unk_2BC = 0;
    s0->unk_2CE = 0;
    s0->unk_1E2 = 0;
    s0->unk_2C8 |= 2;
    s0->u4.ub.unk_06 = s0->u4.ub.unk_06 + 1;
    func_8008A974_ovl_01(s0, s1, s2, 0x1000);
    if ((s0->unk_1AA & 0xF) == 1) {
        if (s0->unk_270 != 0) {
            s0->unk_2CE = 5;
            s0->unk_1E8 = 0x0C000000;
            s0->unk_1F4 = 0xFFFF;
            s0->u4.ub.unk_06 = s0->u4.ub.unk_06 + 1;
        }
        goto tail;
    }
    if (s0->unk_2B5 == 2) {
        s0->unk_2CE = 5;
        s0->unk_1E8 = 0x0C000000;
        s0->unk_1F4 = 0xFFFF;
        s0->u4.ub.unk_06 = s0->u4.ub.unk_06 + 1;
        goto tail;
    }
    t = func_801626E8_ovl_16(s0);
    if (t == 0) { goto tail; }
    s0->unk_2C4 = t;
    s0->unk_2CE = 5;
    s0->unk_1E8 = 0x0C000000;
    s0->unk_1F4 = 0xFFFF;
    s0->u4.ub.unk_06 = s0->u4.ub.unk_06 + 1;
    goto tail;
L1:
    s0->unk_1E2 = s0->unk_1E2 + 0x48;
    s0->unk_2C += (s16)s0->unk_1E2;
    if (func_8008A974_ovl_01(s0, s1, s2, 0x1000) != 0) {
        s0->unk_1E8 = 0x0D000000;
        s0->u4.ub.unk_06 = s0->u4.ub.unk_06 + 1;
    }
    goto tail;
L2:
    v[0] = *(s16 *)(D_80166F8C_ovl_16 + 0);
    v[2] = *(s16 *)(D_80166F8C_ovl_16 + 4);
    s0->unk_2C += 0xA8C;
    s0->unk_2C = func_8008386C_ovl_01(s0->unk_66, s0->unk_70);
    t = func_80032D44_ovl_01(0, 0, v[0], v[2]);
    t = (t + 0x100) & 0xC00;
    s0->unk_288 = 0;
    s0->u4.ub.unk_06 = s0->u4.ub.unk_06 + 1;
    goto tail;
L3:
    s0->unk_1E2 = s0->unk_1E2 + 0x48;
    s0->unk_2C += (s16)s0->unk_1E2;
    s0->unk_1E8 = 0x0D000000;
    func_8008A974_ovl_01(s0, s1, s2, 0x1000);
    if (!(s0->unk_2C + (s16)s0->unk_1E2 + 0x48 < 0)) {
        s0->unk_1E8 = 0x0D000000;
        s0->u4.ub.unk_06 = s0->u4.ub.unk_06 + 1;
    }
    goto tail;
L4:
    s0->unk_2CE = 4;
    func_8008A974_ovl_01(s0, s1, s2, 0x1000);
    s0->unk_2C = 0;
    if (func_8008A974_ovl_01(s0, s1, s2, 0x1000) != 0) {
        s0->u4.w = 0x01000000;
    }
    goto tail;
L5:
tail:
    s0->unk_1F4 = s0->unk_1F4 + 1;
}
