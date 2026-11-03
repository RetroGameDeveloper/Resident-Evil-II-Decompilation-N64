extern u8 D_800C75DC_ovl_01[];
extern u8 D_80018B50_ovl_01[];
extern u8 D_8001B740_ovl_01[];
extern u8 D_800BB620_ovl_01[];
extern u8 D_800C6958_ovl_01[];
extern s32 D_800C4E40_ovl_01;
extern s32 D_800C5684_ovl_01;
void func_80018A80_ovl_01(void);

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    u32 unk28;
    u32 unk2C;
    u32 unk30;
    u32 unk34;
    u32 unk38;
    u32 unk3C;
} Obj;

void func_8002584C_ovl_01(Obj *arg0) {
    u32 f = (u32)&func_80018A80_ovl_01;
    u32 bl = (u32)D_80018B50_ovl_01;
    u32 *g = (u32 *)D_800C75DC_ovl_01;
    u32 a;
    u32 b;

    *g = (u32)arg0;
    arg0->unk0 = 1;
    arg0->unkC = bl - f;
    arg0->unk14 = 0x1000;
    arg0->unk1C = 0x800;
    arg0->unk10 = (u32)D_8001B740_ovl_01;
    arg0->unk8 = f;
    arg0->unk18 = (u32)D_800BB620_ovl_01;
    a = D_800C4E40_ovl_01;
    b = D_800C5684_ovl_01;
    arg0->unk20 = 0;
    arg0->unk24 = 0;
    arg0->unk30 = (u32)D_800C6958_ovl_01;
    arg0->unk38 = 0;
    arg0->unk3C = 0;
    arg0->unk28 = a;
    arg0->unk2C = b;
}
