extern void func_80163584_ovl_12(void *);
extern void func_801640C0_ovl_12(void *);

void func_80164088_ovl_12(void *p) {
    if (((u8 *)p)[6] == 0) {
        func_801640C0_ovl_12(p);
        return;
    }
    func_80163584_ovl_12(p);
}

extern void func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_80166458_ovl_12(void *);

void func_80163E14_ovl_12(void *p, s32 a1, s32 a2) {
    u16 v;

    if (((u8 *)p)[6] == 0) {
        ((u8 *)p)[6] = 1;
        *(u16 *)((u8 *)p + 0x1F4) = 0x3C;
        *(s32 *)((u8 *)p + 0x1E8) = 0xF00;
    }
    v = *(u16 *)((u8 *)p + 0x1F4) - 1;
    *(u16 *)((u8 *)p + 0x1F4) = v;
    if ((v << 16) == 0) {
        ((u8 *)p)[5] = 0;
        *(u16 *)((u8 *)p + 6) = 0;
        *(s32 *)((u8 *)p + 0x1E8) = 0x1000F00;
    }
    func_80089D34_ovl_01(p, a1, a2, 0x100);
    func_80166458_ovl_12(p);
}
