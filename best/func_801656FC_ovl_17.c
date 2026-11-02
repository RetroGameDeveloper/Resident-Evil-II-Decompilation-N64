extern volatile u32 D_80167EE8_ovl_17[];
extern void func_80165DC0_ovl_17(void);

void func_801656FC_ovl_17(void *a) {
    u8 *p = a;

    if (p[0x2C0] == 0) {
        ((void (*)(void))D_80167EE8_ovl_17[p[0x2BE]])();
    } else {
        func_80165DC0_ovl_17();
    }
}
