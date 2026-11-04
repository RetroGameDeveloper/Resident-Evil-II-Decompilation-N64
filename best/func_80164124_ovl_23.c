typedef struct S8 { s16 a; s16 b; s16 c; s16 d; } S8;

typedef struct S_D_800E10D0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x20];
    s32 unk28;
    u8 pad2C[0x04];
    s32 unk30;
    u8 pad34[0x32];
    u16 unk66;
    u8 pad68[0xCE];
    u16 unk136;
    u8 pad138[0xEC];
    s32 unk224;
    s32 unk228;
    u8 pad22C[0x24];
    void *unk250;
} S_D_800E10D0;

typedef struct S_obj {
    u8 pad0[0x4];
    union {
        s32 unk4;
        struct { u8 pad4[2]; u8 unk6; u8 pad7; } b;
    } u4;
    u8 pad8[0x20];
    s32 unk28;
    u8 pad2C[0x04];
    s32 unk30;
    u8 pad34[0x32];
    u16 unk66;
    u8 pad68[0x180];
    u8 unk1E8;
    u8 unk1E9;
    u8 pad1EA[0x0A];
    s16 unk1F4;
    u8 pad1F6[0x2E];
    s32 unk224;
    s32 unk228;
    u8 pad22C[0x24];
    void *unk250;
    u8 pad254[0x64];
    u16 unk2B8;
    u8 pad2BA[0x0C];
    u8 unk2C6;
} S_obj;

typedef struct S_66600 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} S_66600;

extern S8 D_80165F8C_ovl_23;
extern S_D_800E10D0 D_800E10D0_ovl_01;
extern S_66600 D_80166600_ovl_23;

s32 func_80083800_ovl_01(s16 arg0, s16 *arg1, s16 *arg2);
s32 func_80162274_ovl_23(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_80162C78_ovl_23(void *arg0);
void func_80052C00_ovl_01(s32 arg0, s32 arg1);
void func_80052D40_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80077D48_ovl_01(s32 arg0, void *arg1);
void func_80162614_ovl_36(s32 arg0);
void func_80032DEC_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80036764_ovl_01_2FC(void *arg0, void *arg1, s32 arg2);
void func_80040BE4_ovl_01(s32 arg0);
void func_80052C9C_ovl_01(s32 arg0, s32 arg1, s32 arg2);
void func_8003322C_ovl_01(void *arg0, void *arg1, void *arg2, s32 arg3);
void func_80162FE8_ovl_23(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_80036BB4(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8003334C_ovl_01(void *arg0, void *arg1, void *arg2, s32 arg3);
void func_80162530_ovl_29(void *arg0, s32 arg1);

void func_80164124_ovl_23(S_obj *arg0, void *arg1, void *arg2) {
    S8 sp18;
    volatile S_D_800E10D0 *s0;

    s0 = &D_800E10D0_ovl_01;
    sp18 = D_80165F8C_ovl_23;

    switch (arg0->u4.b.unk6) {
    case 0:
        arg0->unk1F4 = 0;
        func_80083800_ovl_01(arg0->unk66, &sp18.a, &sp18.a);
        D_80166600_ovl_23.unk0 = arg0->unk28 + sp18.a;
        D_80166600_ovl_23.unk8 = arg0->unk30 + sp18.c;
        arg0->u4.b.unk6 = arg0->u4.b.unk6 + 1;
        /* fall through */
    case 1:
        if (func_80162274_ovl_23(arg0, 0xA, 6, 0xA, 0xC8, s0->unk136)) {
            func_80162C78_ovl_23(arg0);
            func_80052C00_ovl_01(3, 0);
            func_80052D40_ovl_01(0xC, 0xB4, 0x28, 0);
            func_80077D48_ovl_01(5, arg0);
            if (!(arg0->unk2B8 & 8)) {
                func_80162614_ovl_36(0xA);
            }
        }
        if (arg0->unk1E9 == 0xF && !(arg0->unk2B8 & 8)) {
            arg0->u4.unk4 = 0x01010000;
            arg0->unk2C6 = 0x1E;
        }
        func_80036764_ovl_01_510_24(arg0, 9, 3, 0);
        func_80032DEC_ovl_01(arg0, s0->unk28, s0->unk30, 0x20);
        if (arg0->unk2B8 & 8) {
            func_80036764_ovl_01_2FC((void *)&s0->unk28, &D_80166600_ovl_23, 0xC8);
        }
        func_80040BE4_ovl_01((arg0->unk28 - D_80166600_ovl_23.unk0) * (arg0->unk28 - D_80166600_ovl_23.unk0) +
                             (arg0->unk30 - D_80166600_ovl_23.unk8) * (arg0->unk30 - D_80166600_ovl_23.unk8));
        if (arg0->unk1E9 == 0x29 && (arg0->unk2B8 & 8)) {
            arg0->unk1E9 = 0xA;
            arg0->u4.b.unk6 = arg0->u4.b.unk6 + 1;
        }
        return;
    case 2:
        if (arg0->unk1E9 == 0xB) {
            func_80052C00_ovl_01(6, 2);
            func_80052D40_ovl_01(0x1E, 0xF0, 0x78, 1);
            func_80052C9C_ovl_01(0x32, 0x78, 0x1E);
            func_80052D40_ovl_01(0x14, 0xFF, 0x64, 0x60);
            func_80052D40_ovl_01(0x11, 0xB4, 0x32, 0x74);
            s0->unk250 = arg0;
            s0->unk66 = arg0->unk66 + 0x800;
            s0->unk224 = arg0->unk224;
            s0->unk4 = 0x05000000;
            s0->unk228 = arg0->unk228;
            func_8003322C_ovl_01((void *)s0, arg1, arg2, 0);
            func_80162FE8_ovl_23(arg0, 8, 0xD0, 0x50, 0x50);
            func_80162FE8_ovl_23(arg0, 9, 0xD0, 0x50, 0x50);
            func_80162FE8_ovl_23(arg0, 0xA, 0xD0, 0x50, 0x50);
            func_80162FE8_ovl_23(arg0, 0xB, 0xD0, 0x50, 0x50);
        }
        arg0->unk1E8 = 3;
        if (func_80036BB4(arg0, 3, 3, 0) != 0) {
            if (arg0->unk2B8 & 8) {
                arg0->u4.unk4 = 0x01060000;
            } else {
                arg0->u4.unk4 = 0x01010000;
            }
        }
        if ((u32)arg0->unk1E9 >= 0xC) {
            func_8003334C_ovl_01(arg0, arg1, arg2, 0);
        } else {
            func_80162530_ovl_29(arg0, 0);
        }
        break;
    }
}
