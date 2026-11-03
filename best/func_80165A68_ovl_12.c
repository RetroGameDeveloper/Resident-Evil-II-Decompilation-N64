extern volatile u32 D_80166E6C_ovl_12[];
extern volatile u32 D_80166EB8_ovl_12[];

void func_80165A68_ovl_12(u8 *p) {
    u32 *base;
    u32 i;
    if (p[6] == 0) {
        base = (u32 *)D_80166E6C_ovl_12;
        i = p[5] - 1;
    } else {
        base = (u32 *)D_80166EB8_ovl_12;
        i = p[6];
    }
    ((void (*)(void))base[i])();
}
