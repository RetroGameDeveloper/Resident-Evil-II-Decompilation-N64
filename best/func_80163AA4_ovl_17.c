extern void func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, u32 arg3);

void func_80163AA4_ovl_17(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0;
    u16 temp_v0;
    u32 m;
    u32 t;
    u32 r;

    if (p[6] == 0) {
        p[6] = 1;
        *(s32 *)(p + 0x1E8) = 0x300;
    }
    func_80089D34_ovl_01(p, arg1, arg2, 0x400);
    temp_v0 = *(u16 *)(p + 0x1F4) - 1;
    *(u16 *)(p + 0x1F4) = temp_v0;
    if ((temp_v0 << 16) == 0) {
        if (p[0x2D3]) {
            m = 0x3FFFFFFF;
            t = *(u32 *)(p + 0x290) & m;
            if (t >= 0xBB8) {
                p[5] = 3;
            } else {
                goto L7;
            }
        } else if (*(u32 *)(p + 0x28C) < 0xBB8) {
L7:
            r = func_80033634_ovl_01() & 0xF;
            if ((0x340 >> r) & 1) {
                p[5] = 7;
            } else {
                p[5] = 3;
            }
        } else {
            p[5] = 3;
        }
        *(s16 *)(p + 6) = 0;
    }
}
