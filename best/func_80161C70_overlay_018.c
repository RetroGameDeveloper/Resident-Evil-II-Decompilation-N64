extern volatile u32 D_800C7650_ovl_01[];
typedef void (*Fn)(void *, s32, s32);
extern volatile Fn D_80162C90_ovl_18[];
extern void func_8004DB8C_ovl_01(void *);
extern void func_8004DCE8_ovl_01(void *, s32);
void func_80161C70_overlay_018(void *arg0) {
    u8 *p = arg0;
    if (!(D_800C7650_ovl_01[0x18000/4 + 0x1A60/4] & 0x20000000)) {
        u8 v = p[0x26F];
        if (v & 0x7F) p[0x26F] = v - 1;
        D_80162C90_ovl_18[p[4]](arg0, *(s32 *)(p+0x1A4), *(s32 *)(p+0x218));
        *(s8 *)(p+0x1A2) = -(*(s32 *)(p+0x2C)) / 1800;
        if (*(s32 *)p) {
            func_8004DB8C_ovl_01(arg0);
            func_8004DCE8_ovl_01(arg0, 0x400);
        }
    }
}
