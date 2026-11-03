typedef struct {
    u8 pad0[0xC];
    u8 fC;
    u8 fD;
    u8 pad1[0xE];
    s8 f1C;
    s8 f1D;
    u8 pad2[2];
    s8 f20;
    s8 f21;
} S_2BF38;

extern S_2BF38 D_8012BF38_ovl_01;
extern u8 D_800C7650_ovl_01[];

void func_8008D140_ovl_01(s32 arg0)
{
    S_2BF38 *p = &D_8012BF38_ovl_01;
    u8 v;

    if (arg0 != 0) {
        v = *(u8 *)(D_800C7650_ovl_01 + (p->fD << 2) + 0x2181A);
        if (p->fC & 1) {
            if (v != 0) {
                p->f1C = -2;
            } else if (p->fD & 1) {
                p->f1C = 0;
            } else {
                p->f1C = -4;
            }
        } else {
            if (v != 0) {
                p->f1C = 2;
            } else if (p->fD & 1) {
                p->f1C = 4;
            } else {
                p->f1C = 0;
            }
        }
        p->f1D = ((p->fD >> 1) - (p->fC >> 1)) * 3;
    } else {
        v = *(u8 *)(D_800C7650_ovl_01 + (p->fC << 2) + 0x2181A);
        if (p->fC & 1) {
            if (v != 0) {
                if (p->fD & 1) p->f20 = -2; else p->f20 = 2;
            } else {
                if (p->fD & 1) p->f20 = 0; else p->f20 = 4;
            }
        } else {
            if (v != 0) {
                if (p->fD & 1) p->f20 = -2; else p->f20 = 2;
            } else {
                if (p->fD & 1) p->f20 = -4; else p->f20 = 0;
            }
        }
        p->f21 = ((p->fC >> 1) - (p->fD >> 1)) * 3;
    }
}
