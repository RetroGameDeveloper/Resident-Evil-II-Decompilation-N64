extern volatile u32 D_80163CF4_ovl_27[];
void func_80163AA4_ovl_27(u8 *arg0, u8 arg1);

void func_80161FE4_ovl_27(u8 *p) {
    u8 *o;
    u8 f;
    u8 n;
    ((void (*)(void))D_80163CF4_ovl_27[p[5]])();
    if (p[0x2C8]) return;
    o = *(u8 **)(p + 0x250) + 0x2B4;
    f = o[0xD];
    if (f == 0) return;
    n = (f & 0x7F) - 1;
    if (p[5] == n) return;
    if (f & 0x80) {
        if (o[0xF] == p[0x2B4]) {
            func_80163AA4_ovl_27(p, n);
        }
    } else {
        if (p[0x2B5] & o[0xF]) {
            func_80163AA4_ovl_27(p, n);
        }
    }
}
