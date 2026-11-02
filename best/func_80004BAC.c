typedef void (*Fn)(void);
extern s32 D_80012884;
extern Fn D_8001288C[];

void func_80004BAC(void) {
    volatile Fn *table = D_8001288C;
    table[D_80012884]();
}
