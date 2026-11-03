extern u8 *D_800C527C_ovl_01;
extern u8 D_800DF650_ovl_01[];
extern u8 D_801310D8_ovl_01[];
extern u8 D_8012BF38_ovl_01[];

void func_80043650_ovl_01(void);
s32 func_800439B8_ovl_01(s32, s32, s32, s32);
void func_8004789C_ovl_01(s32, s32, s32, s32);
void func_800478E8_ovl_01(s32, s32, s32);

void func_800965C4_ovl_01(s32 arg0)
{
    u32 cfg = (u32)D_8012BF38_ovl_01;
    u32 p;
    u32 lim;
    u32 a1;
    s32 s1;
    s32 s4;
    s32 s3;
    s32 s2;
    s32 s6;
    u32 v1;
    u8 c;
    u16 *t;
    s32 r;

    p = (u32)D_800C527C_ovl_01;
    a1 = p + 0x3BB64;
    lim = p + 0x3C004;
    if (a1 < lim) {
        a1 = lim;
    }
    s1 = a1 + 0xA3C;
    s2 = 2;
    s6 = arg0 * 3;
    s4 = *(s16 *)(cfg + 0x34) + *(s8 *)(cfg + 0x22);
    s3 = *(s16 *)(cfg + 0x36) + *(s8 *)(cfg + 0x23);

    if (*(u8 *)(cfg + 0x2B) != 0) {
        v1 = *(u8 *)(cfg + 0x2A);
        if (v1 < 0x46) {
            *(u8 *)(cfg + 0x2B) = 0;
        }
        *(u8 *)(cfg + 0x2A) = v1 - 3;
    } else {
        v1 = *(u8 *)(cfg + 0x2A);
        if (v1 >= 0x7D) {
            *(u8 *)(cfg + 0x2B) = 1;
        }
        *(u8 *)(cfg + 0x2A) = v1 + 3;
    }

    v1 = *(u8 *)(cfg + 0xD);
    if (v1 == 0xA) {
        s4 += 0x28;
        s3 += -0x26;
    } else {
        s4 += (v1 & 1) * 0x28;
        s3 += (v1 >> 1) * 0x1E;
    }

    do {
        s2--;
        t = (u16 *)(D_801310D8_ovl_01 + ((s2 + s6) << 2));
        func_800478E8_ovl_01(s1, (u16)(t[0] + s4), (u16)(t[1] + s3));
        c = *(u8 *)(cfg + 0x2A);
        func_8004789C_ovl_01(s1, c, c, c);
        func_80043650_ovl_01();
        r = func_800439B8_ovl_01(*(s32 *)(D_800DF650_ovl_01 + 0x208), s1, 0, 0);
        s1 += 0x14;
        *(s32 *)(D_800DF650_ovl_01 + 0x208) = r;
    } while (s2 != 0);
}
