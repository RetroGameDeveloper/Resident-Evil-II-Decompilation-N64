typedef void (*Fn)(void);
extern volatile Fn D_80166EE8_ovl_12[];
extern s32 func_80033634_ovl_01(void);
extern void func_80166900_ovl_12(void*, s32, s32);

void func_80166190_ovl_12(void *arg0) {
    register volatile Fn *tbl = D_80166EE8_ovl_12;
    u8 n;
    (*tbl[*(u8*)((char*)arg0 + 6)])();
    n = *(u8*)((char*)arg0 + 0x207) + 1;
    *(u8*)((char*)arg0 + 0x207) = n;
    if (n & 1) {
        func_80166900_ovl_12(arg0, func_80033634_ovl_01() & 15, 11);
        func_80166900_ovl_12(arg0, func_80033634_ovl_01() & 15, 11);
    }
}
