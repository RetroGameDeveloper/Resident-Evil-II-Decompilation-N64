extern void func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, u32 arg3);
extern s32 func_80166D98_ovl_17(void *arg0, s32 arg1, u8 arg2);

void func_80164600_ovl_17(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0;
    u32 t;
    u32 m;

    func_80089D34_ovl_01(p, arg1, arg2, 0x400);
    if (p[0x2D3]) {
        m = 0x3FFFFFFF;
        t = *(u32 *)(p + 0x290) & m;
    } else {
        t = *(u32 *)(p + 0x28C);
    }
    if (t >= 0x1C20) {
        if (func_80166D98_ovl_17(p, *(s32 *)(p + 0x2C4), p[0x2CC]) == 0) {
            return;
        }
    }
    if (p[0x2D3]) {
        m = 0x3FFFFFFF;
        t = *(u32 *)(p + 0x290) & m;
        if (t >= 0xBB8) {
            p[5] = 3;
        } else {
            p[5] = 7;
        }
    } else {
        t = *(u32 *)(p + 0x28C);
        if (t >= 0xBB8) {
            p[5] = 3;
        } else {
            p[5] = 7;
        }
    }
    *(s16 *)(p + 6) = 0;
}
