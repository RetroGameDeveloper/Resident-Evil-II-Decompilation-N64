typedef struct S_func_80165D58 {
    u8 unk_00[6];
    u8 unk_06;
    u8 unk_07[0x1A4 - 0x07];
    s32 unk_1A4;
    u8 unk_1A8[0x1E0 - 0x1A8];
    u16 unk_1E0;
    u16 unk_1E2;
    u16 unk_1E4;
    u8 unk_1E6[2];
    s32 unk_1E8;
    u8 unk_1EC[0x1F6 - 0x1EC];
    u16 unk_1F6;
    u8 unk_1F8[0x206 - 0x1F8];
    s8 unk_206;
    u8 unk_207[0x218 - 0x207];
    s32 unk_218;
    u8 unk_21C[0x224 - 0x21C];
    s32 unk_224;
    s32 unk_228;
    u8 unk_22C[0x250 - 0x22C];
    u8 *unk_250;
    u8 unk_254[0x25C - 0x254];
    u8 unk_25C;
    u8 unk_25D[0x26F - 0x25D];
    u8 unk_26F;
} S_func_80165D58;

s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80077B0C_ovl_01(s32 arg0, void *arg1);
void func_801630D4_ovl_23(void *arg0, s16 arg1);
void func_80032F24_ovl_01(void *arg0, s16 arg1, s32 arg2);

void func_80165D58_ovl_23(S_func_80165D58 *s1) {
    static void *jtbl_80166060_ovl_23[5] = { &&L0, &&L1, &&L2, &&L3, &&L4 };
    u8 st = s1->unk_06;
    u16 s2;
    s32 s0;
    void **tbl;

    s2 = *(u16 *)(s1->unk_250 + 0x66);
    if (st >= 5)
        goto end;
    tbl = jtbl_80166060_ovl_23;
    goto *tbl[st];
L0:
    func_80077B0C_ovl_01(0x04020001, (u8 *)s1 + 0x28);
    s1->unk_1E8 = 0x06000300;
    s1->unk_1F6 = 10;
    s1->unk_1E0 = 300;
    s1->unk_06 = 1;
    s1->unk_206 = 1;
    s1->unk_1E4 = 0;
    s1->unk_26F |= 0x80;
    s1->unk_25C |= 0x12;
    func_801630D4_ovl_23(s1, s2);
    s1->unk_06 += func_80089D34_ovl_01(s1, s1->unk_224, s1->unk_228, 0x400);
    s1->unk_1F6 = s1->unk_1F6 - 1;
    if ((s16)s1->unk_1F6 > 0)
        s1->unk_1E0 = s1->unk_1E0 - 15;
    else
        s1->unk_1E0 = s1->unk_1E0 - 25;
    if ((s16)s1->unk_1E0 < 0)
        s1->unk_1E0 = 0;
    goto end;
L1:
    s1->unk_1E8 = 0x02000300;
    s1->unk_206 = 0;
    s1->unk_26F = 0;
    s1->unk_06++;
    s0 = func_80089D34_ovl_01(s1, s1->unk_224, s1->unk_228, 0x400);
    s0 += func_80089D34_ovl_01(s1, s1->unk_224, s1->unk_228, 0x400);
    if (s0 != 0) {
        s1->unk_1E8 = 0x06000300;
        s1->unk_06++;
    }
    goto end;
L2:
    if (func_80089D34_ovl_01(s1, s1->unk_1A4, s1->unk_218, 0x10400) != 0 ||
        func_80089D34_ovl_01(s1, s1->unk_1A4, s1->unk_218, 0x10400) != 0) {
        *(s32 *)((u8 *)s1 + 4) = 0x01000000;
        s1->unk_26F = 0;
        s1->unk_25C &= 0xED;
    }
    goto end;
L3:
    goto end;
L4:
end:
    if (s1->unk_206 != 0)
        func_80032F24_ovl_01(s1, s2, 0x20);
}
