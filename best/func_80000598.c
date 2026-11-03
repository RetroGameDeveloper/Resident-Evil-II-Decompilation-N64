extern void *func_80001180(s32);
extern s32 func_8000BE50(void);
extern void func_8000C870(s32, s32, s32, s32);
extern void func_80004550(void *, s32);
extern void func_800045DC(void *, s32, s32, s32);
extern void func_80004594(void *, s32);
extern s32 D_801320B0;
extern s32 D_801129B8;
extern s32 D_80136D30[];
extern u8 func_8015AFD0_ovl_03[];
extern void func_8004D1B4_ovl_01(void);

void func_80000598(void) {
    u8 *p;
    s32 n;
    s32 size;
    s32 dest;
    s32 count;
    s32 *q;
    u8 tmp[0x58];

    p = func_80001180(1);
    dest = ((s32)func_8015AFD0_ovl_03 + 7) & ~7;
    D_801320B0 = 0;
    n = *(s32 *)(p + 4);
    D_801129B8 = 0;
    size = n + (n & 1);
    while (func_8000BE50() & 7) {
    }
    func_8000C870(0, *(s32 *)p & 0xFFFFFFF, dest, size);
    while (func_8000BE50() & 7) {
    }
    func_80004550(tmp, (dest + size + 7) & ~7);
    func_800045DC(tmp, dest, *(s32 *)(p + 8), *(s32 *)(p + 4));
    func_80004594(tmp, 2);
    q = D_80136D30;
    count = ((s32)func_8015AFD0_ovl_03 - (s32)D_80136D30) >> 2;
    count--;
    while (count != -1) {
        *q = 0;
        count--;
        q++;
    }
    func_8004D1B4_ovl_01();
}
