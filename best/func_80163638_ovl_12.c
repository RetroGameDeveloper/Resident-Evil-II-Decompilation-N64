extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_80166458_ovl_12(void *);
extern s32 func_80077D48_ovl_01(s32, void *);

void func_80163638_ovl_12(void *arg0, s32 b, s32 c) {
    u8 *p = arg0;
    u32 v;
    if (p[6] == 0) {
        v = 1;
        p[6] = v;
        v = p[0x25C];
        *(u32 *)(p + 0x1E8) = 0x03000300;
        p[0x2BB] = 0x20;
        p[0x25C] = v & 0xFD;
    }
    if (func_80089D34_ovl_01(p, b, c, 0x400)) {
        v = p[0x1E8];
        if (v != 4) {
            v = v + 1;
            *(u32 *)(p + 0x1E8) = (v << 24) + 0x300;
            if (p[0x1E8] == 4) {
                func_80077D48_ovl_01(4, p);
            }
        } else {
            *(u32 *)(p + 4) = 0x01020000;
        }
    }
    func_80166458_ovl_12(p);
    func_80166900_ovl_12(p, 4, 6);
}
