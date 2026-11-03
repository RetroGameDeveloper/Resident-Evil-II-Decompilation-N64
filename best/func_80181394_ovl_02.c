typedef struct E_80181394 {
    u8 unk_00[4];
    u16 f4;
    u16 f6;
    u16 f8;
    u8 pad_0A[0x112 - 0x0A];
} E_80181394;

extern E_80181394 D_801344B0_ovl_01[];
extern volatile s32 D_80134450_ovl_01;

void func_80181394_ovl_02(s32 *arg0) {
    E_80181394 *e;
    E_80181394 *e2;
    s32 *p;
    s32 half;
    u32 i;
    u32 j;
    s32 tmp;

    p = arg0;
    e = &D_801344B0_ovl_01[D_80134450_ovl_01];
    e2 = &D_801344B0_ovl_01[D_80134450_ovl_01];
    half = ((s32)e->f8 - (s32)e2->f4) >> 1;

    i = 0;
    while (1) {
        if (!(i < D_801344B0_ovl_01[D_80134450_ovl_01].f6)) break;
        j = 0;
        if (half != 0) {
            s32 *q = p;
            do {
                *q = 0;
                q += 1;
                tmp = j + half;
                j += 1;
                p[tmp + D_801344B0_ovl_01[D_80134450_ovl_01].f4] = 0;
            } while (j < (u32)half);
        }
        i += 1;
        p += D_801344B0_ovl_01[D_80134450_ovl_01].f8;
    }
}
