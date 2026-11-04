typedef union { u64 q; struct { u32 hi; u32 lo; } w; } U64;
extern s16 D_800C7650_ovl_01[];
extern s32 func_80036C98_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_80162C18_ovl_15(void *arg0) {
    u8 *p = arg0;
    u16 temp;
    u16 t2;

    switch (p[6]) {
    case 0:
        func_80162CE0_ovl_15(p);
        p[0x2CA] = 0xFF;
        func_80036C98_ovl_01(p, 0, 0x20, 0);
        temp = *(u16 *)(p + 0x2B4);
        *(u16 *)(p + 0x2B4) = temp | 0x10;
        if (*(u8 *)(p + 0x1E9) >= 0x43) {
            p[6] = p[6] + 1;
        }
        break;
    case 1: {
        U64 b;
        temp = *(u16 *)(p + 0x2B4) | 2;
        t2 = temp & 0xFFEF;
        *(u16 *)(p + 0x2B4) = t2;
        b.w.lo = 0x18000;
        b.w.hi = (u32)D_800C7650_ovl_01;
        if (*(s16 *)((u8 *)(b.w.hi + b.w.lo) + 0x1C72) >= 0) {
            *(u16 *)(p + 0x2B4) = t2 | 4;
            *(s32 *)(p + 4) = 0x01040000;
        } else {
            *(s32 *)(p + 4) = 0x01060000;
        }
        break;
    }
    }
}
