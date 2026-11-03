extern s32 D_800C4F20_ovl_01[];
extern s32 D_800C75E0_ovl_01;
extern s32 D_800C75EC_ovl_01;
extern s32 D_800C75F0_ovl_01;
extern s32 D_800C75F4_ovl_01;
extern s32 D_800C75F8_ovl_01;
extern s32 D_800C75FC_ovl_01;
extern s32 D_800C7600_ovl_01;
extern s32 D_800C7604_ovl_01;
extern s32 D_800C7608_ovl_01;
extern s32 D_800C760C_ovl_01;
extern s32 D_800C7610_ovl_01;
void func_80025D80_ovl_01(void *p, s32 a, s32 b, s32 c);

void func_80025DBC(void) {
    s32 n = D_800C75E0_ovl_01;
    s32 v1 = D_800C75F0_ovl_01;
    s32 v2 = D_800C75F4_ovl_01;
    s32 v3 = D_800C75F8_ovl_01;
    s32 v4 = D_800C75FC_ovl_01;
    s32 v5 = D_800C7600_ovl_01;
    s32 v6 = D_800C7604_ovl_01;
    s32 v7 = D_800C7608_ovl_01;
    s32 v8 = D_800C760C_ovl_01;
    s32 v9 = D_800C7610_ovl_01;
    s32 *p = D_800C4F20_ovl_01 + n * 10;

    p[1] = v1;
    p[2] = v2;
    p[3] = v3;
    p[4] = v4;
    p[5] = v5;
    p[6] = v6;
    p[7] = v7;
    p[8] = v8;
    p[9] = v9;
    p[0] = D_800C75EC_ovl_01;
    func_80025D80_ovl_01(D_800C4F20_ovl_01, v1, v2, v3);
}
