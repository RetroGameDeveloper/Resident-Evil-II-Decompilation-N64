extern s32 func_80040E88_ovl_01(void *arg0, void *arg1);
extern s32 func_8004251C_ovl_01(void *arg0, void *arg1, void *arg2);
extern s32 func_800352F4_ovl_01(s32 a0, s32 a1, s32 a2, s32 a3, s32 s4, s32 s5, s32 s6, s32 s7, s32 s8, s32 s9, s32 s10, s32 s11, s32 s12);

void func_80035218_ovl_01(u8 *arg0) {
    volatile u8 frame[0x80];
    u8 *obj;
    u8 *adv;
    u8 *b;
    s16 sum;
    obj = *(u8 **)(arg0 + 0x234);
    adv = obj + 0x1608;
    if (!(*(s32 *)arg0 & 0x40000)) {
        func_80040E88_ovl_01(arg0 + 0x64, arg0 + 0x14);
    }
    b = obj + 0x38;
    func_8004251C_ovl_01(arg0 + 0x14, obj + 8, b);
    *(u16 *)(obj + 0x5C) &= 0xFFF;
    sum = (s16)(*(u16 *)(arg0 + 0x66) + *(u16 *)(obj + 0x5A));
    func_800352F4_ovl_01((s32)adv, (s32)b, 0x190, 0x64, 0x30, 4, 0, 0x32, 0, 0x30, 6, 0, sum);
}
