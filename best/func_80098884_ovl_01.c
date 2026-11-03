typedef struct S_8012BF38 {
    u8 pad[0x4C];
    s16 unk4C;
    s16 unk4E;
} S_8012BF38;

extern s32 D_800C527C_ovl_01;
extern u8 D_800C7650_ovl_01[];
extern S_8012BF38 D_8012BF38_ovl_01;
extern u8 D_8012BF3A_ovl_01;
extern s16 D_8012FDF4_ovl_01;
extern s16 D_8012FDF6_ovl_01;
extern u16 D_8012FDF8_ovl_01;
extern u16 D_8012FDFA_ovl_01;

void func_800478E8_ovl_01(s32 arg0, s32 arg1, s32 arg2);
s32 func_800439B8_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_800479EC_ovl_01(s32 arg0, s32 arg1, s32 arg2);

void func_80098884_ovl_01(s32 arg0) {
    s32 v;
    u8 *b;
    s32 s0;
    s32 s1;
    s32 s2;
    s32 s3;
    s16 m4C;
    s16 m4E;
    u16 u4C;
    u16 u4E;
    s32 a1v;

    v = D_800C527C_ovl_01;
    s0 = v + 0x3FB00;
    s1 = v + 0x3F800;
    m4C = D_8012BF38_ovl_01.unk4C;
    m4E = D_8012BF38_ovl_01.unk4E;
    u4C = *(volatile u16 *)&D_8012BF38_ovl_01.unk4C;
    u4E = *(volatile u16 *)&D_8012BF38_ovl_01.unk4E;
    s2 = m4C + D_8012FDF4_ovl_01;
    s3 = m4E + D_8012FDF6_ovl_01;

    b = (u8 *)D_800C7650_ovl_01 + 0x18000;
    if (b[0x538] != 0) {
        s0 += 0x14;
    }
    if (arg0 != 0) {
        a1v = u4C + 0x10;
    } else {
        a1v = u4C + 0x32;
    }
    func_800478E8_ovl_01(s0, a1v & 0xFFFF, (u4E + 0xA) & 0xFFFF);
    *(s32 *)(b + 0x204) = func_800439B8_ovl_01(*(s32 *)(b + 0x204), s0, 0, 0);
    if (arg0 != 0) {
        if (b[0x538] != 0) {
            s1 += 0x14;
        }
        func_800478E8_ovl_01(s1, s2 & 0xFFFF, s3 & 0xFFFF);
        func_800479EC_ovl_01(s1, D_8012FDF8_ovl_01, D_8012FDFA_ovl_01);
        if (D_8012BF3A_ovl_01 == 2) {
            *(s32 *)(b + 0x204) = func_800439B8_ovl_01(*(s32 *)(b + 0x204), s1, 0x70, 0x48);
        }
    }
}
