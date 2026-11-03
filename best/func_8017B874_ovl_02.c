typedef struct G8017B874 { u32 unk0; u32 unk4; u32 unk8; u32 unkC; u32 unk10; u32 unk14; u32 unk18; } G8017B874;
extern G8017B874 *D_80186C14_ovl_02;
extern s32 func_8017B48C_ovl_02(s32, void *, s32);

u8 func_8017B874_ovl_02(void) {
    u8 *p;
    if (D_80186C14_ovl_02->unk8 >= D_80186C14_ovl_02->unk0 + 0x800) {
        do {
            func_8017B48C_ovl_02(D_80186C14_ovl_02->unk4, D_80186C14_ovl_02, 0x800);
            D_80186C14_ovl_02->unk8 -= 0x800;
            D_80186C14_ovl_02->unk18 -= 0x800;
        } while (D_80186C14_ovl_02->unk8 >= D_80186C14_ovl_02->unk0 + 0x800);
    }
    p = (u8 *)D_80186C14_ovl_02->unk8;
    D_80186C14_ovl_02->unk8 = (u32)(p + 1);
    return *p;
}
