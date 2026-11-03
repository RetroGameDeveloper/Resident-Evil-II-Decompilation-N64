void func_801648EC_ovl_14(S_func_80162870_ovl_23_arg0 *arg0) {
    extern void *D_800C7650_ovl_01;
    extern void *D_800E10D0_ovl_01;
    extern u32 D_800E8C80_ovl_01;
    extern u16 D_800E8FC8_ovl_01[];
    extern u16 D_801688D0_ovl_14[];
    extern u16 D_801688F0_ovl_14[];
    extern s16 D_80168CD8_ovl_14;
    extern s32 D_80168CE0_ovl_14;
    extern void *D_80168B68_ovl_14;
    extern void *func_80168B64_ovl_14;
    extern s32 jtbl_80168720_ovl_14[];
    extern void *func_801624FC_ovl_14;
    extern void func_801683C8_ovl_14(void);

    u32 v0;
    u32 v1;
    s32 a2;
    s32 *t4;
    s32 t1, t2, t3;

    arg0->unk_26C = 0;
    arg0->unk_26F = 0;
    arg0->unk_268 = 0;
    arg0->unk_264 = 0;

    *(void **)((u8 *)D_800C7650_ovl_01 + 0x18000 + 0x2E0) = func_801683C8_ovl_14;

    arg0->unk_1E8 = 0x1000000;
    func_8008A974_ovl_01();
    arg0->unk_25D = 8;
    v0 = arg0->unk_00;
    arg0->unk_25C = 0;
    v1 = (u32)arg0->unk_234;
    a2 = v1 + 0xBC0;
    v0 |= 0x2000000;
    arg0->unk_00 = v0;
    *(s16 *)(a2 + 0x134) = 0x60;
    *(s16 *)(a2 + 0x136) = 0x60;
    *(s16 *)(a2 + 0x138) = 0x200;
    *(s16 *)(a2 + 0x130) = 0;
    *(s16 *)(a2 + 0x132) = 0;
    *(s16 *)(a2 + 0x13A) = 0x138;

    a2 = (s32)arg0->unk_234 + 0x2050;
    *(s32 *)a2 = 0;
    v0 = (u32)arg0->unk_234 + 0xBF8;
    *(s32 *)(a2 + 0x64) = v0;
    v1 = (u32)arg0->unk_234 + 0xBC0;
    *(s32 *)(a2 + 0x1C) = 0;
    *(s32 *)(a2 + 0x20) = 0;
    *(s32 *)(a2 + 0x24) = 0;
    *(s16 *)(a2 + 0x58) = 0x400;
    *(s16 *)(a2 + 0x5A) = 0;
    *(s16 *)(a2 + 0x5C) = 0x400;
    func_80040E88_ovl_01();
    *(s32 *)(a2 + 0x12C) = v1;

    v0 = *(u32 *)((u8 *)D_800C7650_ovl_01 + 0x18000 + 0x1A3C);
    v0 &= 0x20;
    if (v0 != 0) {
        D_80168CE0_ovl_14 = 0;
        func_80033634_ovl_01();
        v0 = D_800E8C80_ovl_01;
        v0 &= 0xF;
        v0 <<= 1;
        v0 = D_801688F0_ovl_14[v0];
        func_800837DC_ovl_01(v0, 0xA4);
        arg0->unk_1F2 = v0;
        if (v0 == 0) {
            v0 = D_800E8FC8_ovl_01[0];
            arg0->unk_1F2 = v0;
        } else {
            arg0->unk_1F2 = v0 - 0x14;
        }
    } else {
        func_80033634_ovl_01();
        v0 = D_800E8C80_ovl_01;
        v0 &= 0xF;
        v0 <<= 1;
        v0 = D_801688D0_ovl_14[v0];
        func_800837DC_ovl_01(v0, 0xA4);
        arg0->unk_1F2 = v0;
        if (v0 != 0) {
            arg0->unk_1F2 = v0 - 0xA;
        }
    }

    arg0->unk_1DC = 0;
    arg0->unk_1DA = 0;
    arg0->unk_1D8 = 0;

    t4 = (s32 *)&D_800E8FC8_ovl_01[0];
    t1 = t4[0];
    t2 = t4[1];
    t3 = t4[2];
    arg0->unk_1B8 = t1;
    arg0->unk_1BC = t2;
    arg0->unk_1C0 = t3;
    t1 = t4[3];
    t2 = t4[4];
    t3 = t4[5];
    arg0->unk_1C4 = t1;
    arg0->unk_1C8 = t2;
    arg0->unk_1CC = t3;
    t1 = t4[6];
    t2 = t4[7];
    arg0->unk_1D0 = t1;
    arg0->unk_1D4 = t2;

    arg0->unk_2C4_ptr = (s32)D_800E10D0_ovl_01;
    arg0->unk_2B8 = 0x44C;
    arg0->unk_2BA = 0x352;
    arg0->unk_2D6 = -0x1F4;
    arg0->unk_1E8 = 0x1000000;
    v0 = arg0->unk_00;
    v1 = arg0->unk_1AA;
    v0 &= (u32)-0xB;
    arg0->unk_1F6 = 0;
    arg0->unk_1F4 = 0;
    arg0->unk_2BC = 0;
    arg0->unk_2B5 = 0;
    arg0->unk_2B6 = 0;
    arg0->unk_2B7 = 0;
    arg0->unk_2CC[3] = 0;
    arg0->unk_2D8 = 0;
    arg0->unk_00 = v0;
    v0 = v1 & 0x4000;
    if (v0 != 0) {
        v0 = (u32)D_80168B68_ovl_14;
    } else {
        v0 = (u32)func_80168B64_ovl_14;
    }
    v1 = v1 & 0xF;
    v1 += v0;
    ((u8 *)&arg0->unk_04)[1] = *(u8 *)v1;

    D_80168CD8_ovl_14 = 0;
    *(s16 *)((u8 *)&D_80168CD8_ovl_14 + 2) = 0;
    *(s16 *)((u8 *)&D_80168CD8_ovl_14 + 4) = 0;

    v1 >>= 8;
    v1 &= 0xF;
    if (v1 < 6) {
        v0 = jtbl_80168720_ovl_14[v1];
        goto *v0;
    }

L80164C58:
    v0 = arg0->unk_00 & 0xE3FFFFFF;
    v0 |= 0xC000000;
    arg0->unk_00 = v0;
    a2 = (s32)arg0->unk_234 + 0x33C;
    func_80033A0C_ovl_01();
    *(s32 *)((u8 *)arg0 + 0x10) = a2;
    v1 = (s32)arg0->unk_208;
    *(s16 *)v1 = 0xFA;
    a2 = (s32)arg0->unk_234;
    *(s32 *)(a2 + 0x4C) = arg0->unk_28;
    *(s32 *)(a2 + 0x50) = arg0->unk_2C;
    *(s32 *)(a2 + 0x54) = arg0->unk_30;
    a2 += 0x178;
    *(s32 *)(a2 + 0x4C) = arg0->unk_28;
    *(s32 *)(a2 + 0x50) = arg0->unk_2C;
    *(s32 *)(a2 + 0x54) = arg0->unk_30;

    arg0->unk_2A0 = (s32)func_801624FC_ovl_14;
}
