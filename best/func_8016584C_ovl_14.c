typedef struct { u8 b[0x20]; } Blob;

extern Blob D_801687A0_ovl_14;
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];

extern s32 func_80083800_ovl_01(s16, void *, void *);
extern s32 func_80168580_ovl_14(void *, s32, s32, s32, s32, s32, void *);

void func_8016584C_ovl_14(u8 *p) {
    Blob buf;
    s16 angle;
    u8 *dst;
    u8 n;

    buf = D_801687A0_ovl_14;
    if (!(*(volatile u8 *)(p + 0x2CF) & 1)) {
        angle = *(s16 *)(D_800C7650_ovl_01 + 0x18000 + 0x1C74);
        dst = buf.b + ((*(volatile u8 *)(p + 0x2CF) >> 1) * 8);
        func_80083800_ovl_01(angle * 2048, dst, dst);
        func_80168580_ovl_14(D_800E10D0_ovl_01, 0, 2, 0x2400, 0, 0,
                             buf.b + ((*(volatile u8 *)(p + 0x2CF) >> 1) * 8));
    }
    n = *(volatile u8 *)(p + 0x2CF) + 1;
    *(volatile u8 *)(p + 0x2CF) = n;
    if (n == 7) *(s32 *)(p + 0x2D8) = 0;
}
