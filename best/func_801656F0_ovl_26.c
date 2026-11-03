extern u8 D_800E7650_ovl_01[];

void func_801656F0_ovl_26(void *arg0, u32 arg1, u32 arg2) {
    u8 *p = arg0;
    u8 *tbl;
    u8 *rec;
    u32 i;
    s32 w;
    u16 hp;

    if (arg1 < arg2) {
        tbl = D_800E7650_ovl_01;
        for (i = arg1; i < arg2; i++) {
            rec = *(u8 **)(p + 0x234) + i * 0x178;
            w = *(s32 *)rec;
            if (*(u8 *)(tbl + 0x1962) & 8) {
                w |= 0x4A;
            }
            *(s32 *)rec = w & 0xFFFF7FFF;
            hp = *(u16 *)(p + 0x66);
            *(s16 *)(rec + 0x138) = 0;
            *(s16 *)(rec + 0x134) = 0x12C;
            *(s16 *)(rec + 0x132) = -0x96;
            *(s16 *)(rec + 0x136) = 0xA;
            *(s16 *)(rec + 0x13C) = -0x64;
            *(s32 *)(rec + 0x60) = 0x104010;
            *(s16 *)(rec + 0x130) = hp;
        }
    }
}
