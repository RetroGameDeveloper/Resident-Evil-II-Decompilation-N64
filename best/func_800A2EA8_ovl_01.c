typedef struct {
    u8 unk0;
    u8 unk1;
    u8 pad2[0x20];
    u16 unk22;
    f32 unk24;
    u16 unk28;
    u8 pad2A[0x1E];
    u16 unk48;
    u8 pad4A[2];
    f32 unk4C;
    union { u32 w; u16 h; } u50;
    f32 unk54;
    f32 unk58;
    u8 unk5C;
} S_A2EA8;

extern f32 D_800BA5B0_ovl_01;
extern f64 D_800BA5B8_ovl_01;
extern f32 D_800BA5C0_ovl_01;
extern f32 D_800BA5C4_ovl_01;
extern u32 D_80143EA4_ovl_01;

void func_800A2EA8_ovl_01(S_A2EA8 *a0, u32 arg1, s8 *arg2)
{
    u32 step;
    f32 ratio;
    f32 tmp;
    f32 v24;
    u32 cnt;
    f64 d;
    s32 one;

    step = ((arg1 & 0xFFFF) * 0x7D00 / D_80143EA4_ovl_01) << 11;

    if (a0->unk1 == 0 && a0->unk5C != 3) {
        a0->unk5C = 3;
        a0->unk54 = 0.0f;
        a0->u50.w = 0;
        a0->unk58 = a0->unk4C;
        a0->unk48 = a0->unk28;
    } else {
        if ((u32)a0->u50.h < (u32)a0->unk48) {
            goto common;
        }
        one = 1;
        switch (a0->unk5C) {
        case 0:
            a0->unk5C = one;
            a0->u50.w = 0;
            a0->unk58 = D_800BA5B0_ovl_01;
            a0->unk54 = a0->unk24;
            a0->unk48 = a0->unk22;
            break;
        case 1:
            v24 = a0->unk24;
            a0->unk5C = 2;
            a0->unk58 = v24;
            a0->unk54 = v24;
            a0->unk4C = v24;
            return;
        case 3:
            *arg2 = 0;
            a0->unk4C = 0.0f;
            return;
        }
    }
common:
    if (a0->unk48 != 0) {
        cnt = a0->u50.w;
        d = (f64)(s32)cnt;
        if ((s32)cnt < 0) {
            d += D_800BA5B8_ovl_01;
        }
        ratio = (f32)d / ((f32)a0->unk48 * D_800BA5C0_ovl_01);
    } else {
        ratio = D_800BA5C4_ovl_01;
    }
    tmp = a0->unk58;
    a0->u50.w += step;
    a0->unk4C = (a0->unk54 - tmp) * ratio + tmp;
}
