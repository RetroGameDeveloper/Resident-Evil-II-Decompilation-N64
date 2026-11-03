typedef void (*Fn)(void *);
extern volatile Fn D_80166D8C_ovl_12[];
extern void func_80165280_ovl_12(void *);
void func_80164C88_ovl_12(void *arg0){
    if (!(*(u8 *)((u8 *)arg0 + 0x2BF) & 0x80)) {
        s32 i = *(u8 *)((u8 *)arg0 + 5) - 1;
        D_80166D8C_ovl_12[i](arg0);
    } else {
        func_80165280_ovl_12(arg0);
    }
}
