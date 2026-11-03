typedef struct S_func_8016234C_ovl_12_arg0 {
    s32 unk_00;
    u8 unk_04;
    s8 unk_05;
    u16 unk_06;
    u8 unk_08[0x20];
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    u8 unk_34[0x32];
    u16 unk_66;
    u8 unk_68[0xCC];
    s16 unk_134;
    u8 unk_136[0x6C];
    u8 unk_1A2;
    u8 unk_1A3[0x3D];
    s16 unk_1E0;
    u16 unk_1E2;
    s16 unk_1E4;
    u8 unk_1E6[2];
    u8 unk_1E8;
    u8 unk_1E9;
    u8 unk_1EA;
    u8 unk_1EB[9];
    u16 unk_1F4;
    s16 unk_1F6;
    u8 unk_1F8[0xE];
    s8 unk_206;
    u8 unk_207[0x55];
    u8 unk_25C;
    u8 unk_25D;
    s16 unk_25E;
    s16 unk_260;
    s16 unk_262;
    u8 unk_264[0xB];
    u8 unk_26F;
    u8 unk_270[0x1C];
    s32 unk_28C;
    s32 unk_290;
    u8 unk_294[0x20];
    u8 unk_2B4;
    s8 unk_2B5;
    u16 unk_2B6;
    u8 unk_2B8;
    s8 unk_2B9;
    s8 unk_2BA;
    u8 unk_2BB;
    u8 unk_2BC[4];
    s16 unk_2C0;
    u8 unk_2C2;
    u8 unk_2C3;
    s16 unk_2C4;
    s16 unk_2C6;
    s8 unk_2C8;
    s8 unk_2C9;
    u8 unk_2CA;
    u8 unk_2CB;
    u8 unk_2CC;
} S_func_8016234C_ovl_12_arg0;

extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];

void *func_80166B54_ovl_12(S_func_8016234C_ovl_12_arg0 *arg0) {
    typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;
    U64 b;
    u32 off;
    u8 *base;
    void *ret;

    ret = D_800E10D0_ovl_01;
    off = 0x18000;
    b.w.lo = (u32)D_800C7650_ovl_01;
    base = (u8 *)(b.w.lo + off);

    arg0->unk_2C3 = 0;

    if (*(u32 *)(base + 0x1A5C) & 0x10000000) {
        if ((arg0->unk_290 & 0xC0000000) == 0x40000000) {
            ret = *(void **)(base + 0x1D3C);
            arg0->unk_2C3 = 1;
        }
        if ((arg0->unk_290 & 0xC0000000) == 0x80000000) {
            if ((u32)(arg0->unk_290 & 0x3FFFFFFF) < (u32)arg0->unk_28C) {
                void *v1 = *(void **)(base + 0x1D3C);
                if (*(s16 *)((u8 *)v1 + 0x1F2) >= 0x15) {
                    ret = v1;
                    arg0->unk_2C3 = 1;
                }
            }
        }
    }
    return ret;
}
