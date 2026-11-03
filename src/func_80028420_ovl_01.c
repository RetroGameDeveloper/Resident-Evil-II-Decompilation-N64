typedef struct {
    void *(*fn)(void *, s32, s32);
} Vtbl;

typedef struct {
    u32 pad;
    Vtbl *vt;
} Obj;

void func_80028420_ovl_01(Obj *arg0) {
    Vtbl *vt = arg0->vt;
    s32 a1_val = 0;
    void *(*func)(void *, s32, s32) = vt->fn;
    void *r = func(arg0, a1_val, 0x84);
    *(volatile s32 *)((u8 *)r + 0x80) = 0;
}
