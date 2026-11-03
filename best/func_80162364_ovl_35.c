typedef void (*Fn)(void *, void *, void *);
extern volatile Fn func_80166634_ovl_35[];
extern void func_80089D34_ovl_01(void *, void *, void *, s32);
extern void func_80033678(void *);

void func_80162364_ovl_35(void *a, void *b, void *c) {
    func_80166634_ovl_35[((u8 *)a)[6]](a, b, c);
    func_80089D34_ovl_01(a, b, c, 0x100);
    func_80033678(a);
}
