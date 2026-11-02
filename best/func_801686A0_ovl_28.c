extern s32 D_80168E04_ovl_28;
extern s32 D_80168E0C_ovl_28;
extern s32 D_80168E10_ovl_28;
void func_801686A0_ovl_28(void *arg0, u8 *arg2) {
    s32 sp0;
    s8 sp4;
    s8 sp8,sp9,spA;
    s32 sp10;
    s8 sp14,sp15;
    u8 *p;
    u8 a,b;
    sp0 = D_80168E04_ovl_28;
    sp4 = ((s8 *)&D_80168E04_ovl_28)[4];
    sp8 = ((s8 *)&D_80168E0C_ovl_28)[0];
    sp9 = ((s8 *)&D_80168E0C_ovl_28)[1];
    spA = ((s8 *)&D_80168E0C_ovl_28)[2];
    sp10 = D_80168E10_ovl_28;
    sp14 = ((s8 *)&D_80168E10_ovl_28)[4];
    sp15 = ((s8 *)&D_80168E10_ovl_28)[5];
    p = arg2 + ((u8 *)arg0)[0x2C1] * 2;
    a = p[0];
    if (a != 0xFF) {
        b = p[1];
        if (b == 0xFF) {
            ((u8 *)arg0)[0x2C0] = 0;
            ((u8 *)arg0)[0x2C1] = 0;
        } else if (((u8 *)arg0)[0x2C0] != 0) {
            ((u8 *)arg0)[0x2C0]--;
        } else {
            ((u8 *)arg0)[0x2C0] = b;
            ((u8 *)arg0)[0x2C2] = a;
            ((u8 *)arg0)[0x2C1]++;
        }
    }
}
