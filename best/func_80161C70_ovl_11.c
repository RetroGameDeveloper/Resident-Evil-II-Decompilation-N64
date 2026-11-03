typedef struct S_ptr234 {
    u8 pad[0x50];
    s32 unk50;
} S_ptr234;

typedef struct S_obj {
    u32 unk00;
    u8  unk04;
    u8  unk05[0x23];
    s32 unk28;
    u8  unk2C[0x3A];
    s16 unk66;
    u8  unk68[0x140];
    s16 unk1A8;
    u16 unk1AA;
    u8  unk1AC[0x34];
    s16 unk1E0;
    u8  unk1E2[0x07];
    u8  unk1E9;
    u8  unk1EA[0x0A];
    s32 unk1F4;
    u8  unk1F8[0x1C];
    u32 *unk214;
    u8  unk218[0x04];
    s32 unk21C;
    s32 unk220;
    u8  unk224[0x10];
    S_ptr234 *unk234;
    u8  unk238[0x18];
    void *unk250;
    u8  unk254[0x08];
    u8  unk25C;
    u8  unk25D[0x12];
    u8  unk26F;
    u8  unk270[0x20];
    u32 unk290;
    u8  unk294[0x22];
    u16 unk2B6;
    u8  unk2B8[0x0C];
    s32 unk2C4;
    u8  unk2C8[0x04];
    u8  unk2CC;
    u8  unk2CD[0x04];
    u8  unk2D1;
    u16 unk2D2;
    u8  unk2D4;
    u8  unk2D5;
    u8  unk2D6[0x04];
    u8  unk2DA;
} S_obj;

extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];
extern u8 D_800E10F8_ovl_01[];
extern void (*D_8016E0D0_ovl_11[])(void *, s32, s32);

s32 func_800656BC_ovl_01(s16 arg0, s16 arg1);
void func_80065400_ovl_01(void *arg0, void *arg1, u8 arg2, s32 arg3);
void func_800347E0_ovl_01(void *arg0, s16 arg1);
void func_80033678_ovl_01(void *arg0);
void func_8004DB8C_ovl_01(void *arg0);
void func_8004DCE8_ovl_01(void *arg0, s32 arg1);
void func_8016D2C8_ovl_11(void *arg0);
void func_8016D6F8_ovl_11(void *arg0);
void func_8016D8E0_ovl_11(void *arg0);
void func_8016CE44_ovl_11(void *arg0, s32 arg1, s32 arg2);

#define GBUF ((u8 *)D_800C7650_ovl_01 + 0x18000)
#define G32(o) (*(u32 *)(GBUF + (o)))
#define G16(o) (*(u16 *)(GBUF + (o)))

void func_80161C70_ovl_11(S_obj *arg0) {
    u8 *s1;
    u32 f;
    u32 m;

    s1 = D_800E10F8_ovl_01;
    if (G32(0x1A5C) & 0x10000000) {
        if ((arg0->unk290 & 0xC0000000) == 0x40000000) {
            s1 = (u8 *)*(void **)(GBUF + 0x1D3C) + 0x28;
        }
        if ((func_800656BC_ovl_01(*(s16 *)(s1 + 2), *(s16 *)(s1 + 0xA)) & 0xFF) == 0xFF) {
            s1 = D_800E10F8_ovl_01;
        }
    }
    func_80065400_ovl_01(arg0, s1, arg0->unk2D1, 0);
    if (G32(0x1A60) & 0x20000000) {
        return;
    }
    if ((arg0->unk1AA & 1) || (arg0->unk2B6 & 2)) {
        arg0->unk00 |= 0x04000000;
    }
    f = arg0->unk00;
    m = f & 0x0C000000;
    if (m == 0x04000000) {
        arg0->unk00 = f | m;
        if ((G16(0x1C2A) & 0xFFF) != 0xE && (G16(0x1C2A) & 0xFFF) != 0x12) {
            if (G16(0x1C70) & 0x8000) {
                if (G32(0x1AAC) - 0x5DC < arg0->unk28) {
                    arg0->unk00 = (f | m) & 0xFBFFFFFF;
                }
            }
            if ((G16(0x1C70) & 0x4000) && (G32(0x1AAC) - 0x3E8 < arg0->unk28)) {
                arg0->unk00 &= 0xFBFFFFFF;
            }
        }
    }
    if (arg0->unk2D5) {
        arg0->unk2D5 = arg0->unk2D5 - 1;
    }
    if (arg0->unk2DA) {
        arg0->unk2DA = arg0->unk2DA - 1;
    }
    if (arg0->unk26F & 0x7F) {
        arg0->unk26F = arg0->unk26F - 1;
    }
    if (arg0->unk2CC) {
        arg0->unk2CC = arg0->unk2CC - 1;
        G16(0x1A78) |= 0x100;
    }
    D_8016E0D0_ovl_11[arg0->unk04](arg0, arg0->unk21C, arg0->unk220);
    func_8016D8E0_ovl_11(arg0);
    arg0->unk250 = D_800E10D0_ovl_01;
    arg0->unk2D2 = arg0->unk2D2 + 1;
    arg0->unk25C &= 0xFD;
    if ((arg0->unk1AA & 0x4000) || (arg0->unk2B6 & 0x200)) {
        arg0->unk25C |= 2;
    }
    func_800347E0_ovl_01(arg0, arg0->unk66);
    func_8016CE44_ovl_11(arg0, arg0->unk21C, arg0->unk220);
    if (arg0->unk1A8 && (G16(0x1C72) & 0x8000) == 0) {
        if ((arg0->unk234->unk50 - 0x1F4 < arg0->unk1A8) && ((arg0->unk1E9 & 0xF) == 1) && (arg0->unk1E0 >= 0xB)) {
            func_8016D6F8_ovl_11(arg0);
        }
        if ((*arg0->unk214 & 0xF8000000) == 0x08000000) {
            func_8016D6F8_ovl_11(arg0);
        }
        if ((*arg0->unk214 & 0xF8000000) == 0x48000000) {
            func_8016D6F8_ovl_11(arg0);
        }
    }
    func_8016D2C8_ovl_11(arg0);
    arg0->unk2C4 = arg0->unk04;
    func_80033678_ovl_01(arg0);
    func_8004DB8C_ovl_01(arg0);
    func_8004DCE8_ovl_01(arg0, 0x400);
}
