typedef struct S_func_8016D2C8_ovl_11_arg0 {
    u8 unk_00[0x66];
    s16 unk_66;
    u8 unk_68[0x1CC];
    void *unk_234;
    u8 unk_238[0x24];
    u8 unk_25C;
    u8 unk_25D[0x59];
    u16 unk_2B6;
} S_func_8016D2C8_ovl_11_arg0;

typedef struct S_D_800E8FC8 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} S_D_800E8FC8;

typedef struct S_Outer {
    u8 unk_00[0xBC0];
    s32 unk_BC0;
    u8 unk_BC4[0x24];
    s16 unk_BE8;
    s16 unk_BEA;
    s16 unk_BEC;
    u8 unk_BEE[0x1E];
    s32 unk_C0C;
    s32 unk_C10;
    s32 unk_C14;
    s32 unk_C18;
    u8 unk_C1C[0x55];
    u8 unk_CD1;
} S_Outer;

typedef struct S_Inner {
    s32 unk_00;
    u8 unk_04[0x24];
    s16 unk_28;
    s16 unk_2A;
    s16 unk_2C;
    u8 unk_2E[0x20];
    s32 unk_4C;
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
    u8 unk_5C[0x55];
    u8 unk_111;
} S_Inner;

u32 func_80033634_ovl_01(s32 arg0);
void func_800377B0_ovl_01(s32 arg0, s32 arg1, void *arg2, s32 arg3);
void func_80038EC8_ovl_01(s32 arg0, s32 arg1, void *arg2);
void func_80041350_ovl_01(s32 arg0, S_D_800E8FC8 *arg1);
void func_80041484_ovl_01(s32 arg0, S_D_800E8FC8 *arg1);
void func_800415B8_ovl_01(s32 arg0, S_D_800E8FC8 *arg1);
void func_8004251C_ovl_01(void *arg0, S_D_800E8FC8 *arg1, void *arg2);
void func_8004279C_ovl_01(S_D_800E8FC8 *arg0, S_D_800E8FC8 *arg1, void *arg2);
s32 func_80066804_ovl_01(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);
s16 func_80069F4C_ovl_01(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80077D48_ovl_01(s32 arg0, void *arg1);
extern u64 D_8016DEEC_ovl_11;
extern S_D_800E8FC8 D_800E8FC8_ovl_01;

void func_8016D2C8_ovl_11(S_func_8016D2C8_ovl_11_arg0 *p)
{
    S_Outer *s2 = p->unk_234;
    S_Inner *s1 = (S_Inner *)((u8 *)s2 + 0xBC0);
    S_D_800E8FC8 sp10;
    s32 sp38, sp3C, sp40, sp44;
    s32 s5;
    u32 s6 = 0x91A2B3C5U;
    u32 s7 = 1U;
    void *s0_ptr;
    void *a2_ptr;
    u8 v0_temp;

    if ((p->unk_2B6 & 0x180) == 0) {
        return;
    }

    if (p->unk_2B6 & 0x80) {
        p->unk_25C = 1;
        s1->unk_00 |= 0x8040;
        p->unk_2B6 = (p->unk_2B6 & 0xFF7F) | 0x100;

        sp10 = D_800E8FC8_ovl_01;
        func_80041484_ovl_01(p->unk_66 + 0x800, &sp10);
        func_8004279C_ovl_01(&sp10, (S_D_800E8FC8 *)&D_8016DEEC_ovl_11, (u8 *)s2 + 0xBE8);
        s1->unk_111 = 2;
    }

    sp10 = D_800E8FC8_ovl_01;
    func_800415B8_ovl_01(0x80, &sp10);
    func_80041350_ovl_01(0x40, &sp10);

    func_8004251C_ovl_01((u8 *)s2 + 0xBF8, &sp10, (u8 *)s2 + 0xBF8);

    sp38 = s1->unk_4C;
    sp3C = s1->unk_50;
    sp40 = s1->unk_54;
    sp44 = s1->unk_58;

    s1->unk_4C += s1->unk_28;
    s1->unk_50 += s1->unk_2A;
    s1->unk_54 += s1->unk_2C;

    s5 = func_80069F4C_ovl_01(&sp38, 0x64, 0x2000, 1);

    s0_ptr = (u8 *)s2 + 0xC0C;

    if (func_80066804_ovl_01(s0_ptr, 0x64, 1 << (s1->unk_50 / -1800), 0x2000) != 0) {
        s1->unk_4C = sp38;
        s1->unk_50 = sp3C;
        s1->unk_54 = sp40;
        s1->unk_58 = sp44;

        s5 = func_80069F4C_ovl_01(s0_ptr, 0x64, 0x2000, 1);
        s1->unk_28 = -s1->unk_28;
        s1->unk_2C = -s1->unk_2C;

        func_800377B0_ovl_01(0x3E8, (u32)(func_80033634_ovl_01((s32)(u32)s0_ptr) & 0xFF) * 16, (u8 *)s2 + 0xBE8, 0);

        v0_temp = s1->unk_111 - 1;
        s1->unk_111 = v0_temp;
        if ((s8)v0_temp == -1) {
            a2_ptr = (u8 *)s2 + 0xBE8;
            p->unk_2B6 &= 0xFEFF;
            s1->unk_00 = 0;
            goto block_11;
        }

        if (func_80066804_ovl_01(s0_ptr, 0x64, 1 << (s1->unk_50 / -1800), 0x2000) != 0) {
            a2_ptr = (u8 *)s2 + 0xBE8;
            p->unk_2B6 &= 0xFEFF;
            s1->unk_00 = 0;
            goto block_11;
        }
        goto block_8;
    }

block_8:
    s1->unk_2A += 0x32;
    {
        s32 a0 = s5 - 0xC8;
        if (a0 < s1->unk_50) {
            s1->unk_50 = a0;
            s1->unk_28 = (s1->unk_28 << 16) >> 17;
            s1->unk_2C = (s1->unk_2C << 16) >> 17;
            s1->unk_2A = -((s1->unk_2A << 16) >> 18);

            s0_ptr = (u8 *)s1 + 0x38;
            func_800377B0_ovl_01(0x3E8, (u32)(func_80033634_ovl_01(a0) & 0xFF) * 16, s0_ptr, 0);
            func_80077D48_ovl_01(7, p);

            v0_temp = s1->unk_111 - 1;
            s1->unk_111 = v0_temp;
            if ((s8)v0_temp == -1) {
                a2_ptr = s0_ptr;
                p->unk_2B6 &= 0xFEFF;
                s1->unk_00 = 0;
                goto block_11;
            }
        }
    }

block_11:
    func_80038EC8_ovl_01(5, 3, a2_ptr);
}
