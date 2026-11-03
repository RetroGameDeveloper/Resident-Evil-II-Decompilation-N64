extern u8 D_800EEB4C_ovl_01[];

s32 func_80038F70_ovl_01(s32 arg0) {
    u8 *v0 = D_800EEB4C_ovl_01;
    u8 *a2 = v0 - 0x2E80;
    u8 *a1 = v0 - 0x2E68 + 0x7C;
    u8 *v1 = a1;
    // first pass
    do {
        if (v1[5] == (u8)arg0) {
            v1[-0x17] = 0;
            a1[0] = 0;
            *(u16*)v1 = 0;
        }
        a1 += 0x7C;
        v1 += 0x7C;
    } while (a1 != a2);
    // second pass
    a2 = v0 - 0x2E80;
    a1 = v0 - 0x2E68 + 0x7C;
    v1 = a1;
    do {
        s32 a0 = 0;
        if (v1[4] != 0) {
            a0 = 1;
            if (v1[5] != 5) a0 = 0;
            else {
                if (v1[6] == 2) a0 = 0;
                else a0 = 1;
            }
        }
        if (a0 != 0) {
            v1[-0x17] = 0;
            a2[0] = 0;
            *(u16*)v1 = 0;
        }
        a2 += 0x7C;
        v1 += 0x7C;
    } while (a2 != v0);
    a1 += 0x7C;
    return 0;
}
