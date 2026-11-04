extern void func_8016559C_ovl_26(void);
extern void func_80166B18_ovl_26(void *, s32, s32);
extern void func_801656F0_ovl_26(void *, s32, s32);

void func_80165900_ovl_26(u8 *p) {
    u32 n;
    u8 r;
    s32 s1, s3, s0;
    func_8016559C_ovl_26();
    n = p[0x26E];
    p[0x25C] |= 1;
    r = n % 3;
    s1 = 12;
    if (r == 0 && p[0x2D9] == 0) {
        s1 = 6;
        s3 = 9;
    } else {
        s3 = 14;
    }
    s0 = (s1 - 1) & 0xFF;
    func_80166B18_ovl_26(p, s0, 0);
    func_80166B18_ovl_26(p, s0, 3);
    func_801656F0_ovl_26(p, s1, s3);
}
