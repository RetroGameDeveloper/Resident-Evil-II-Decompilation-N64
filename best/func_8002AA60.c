extern void func_8002A5A0_ovl_01(void);
extern u8 D_8002ABB0_ovl_01[];
extern u8 D_8002AAF8_ovl_01[];

void func_8002AA60(u8 *arg0, s32 arg1) {
    s32 *s0 = *(s32 **)(arg0 + 0x168);
    s0[2] = *(s32 *)(arg0 + 0x60);
    if (arg1 == 0) {
        if (*(s32 *)(arg0 + 0x40) == 0) {
            if (*(s32 *)((u8 *)*(s32 **)(arg0 + 0x180) + 8) != 0) {
                s0[1] = (s32)D_8002ABB0_ovl_01;
                func_8002A5A0_ovl_01();
                s0[0x11] = 0;
                s0[0x12] = 0;
                s0[0x14] = 0;
            } else {
                s0[1] = (s32)D_8002AAF8_ovl_01;
            }
            s0[0xD] = 0;
            s0[0xE] = 0;
        }
    } else {
        s32 **obj = (s32 **)arg0;
        obj[0][5] = 4;
        ((void (*)(u8 *))obj[0][0])(arg0);
    }
}
