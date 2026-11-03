typedef void *(*VtblFn)(void *arg0, s32 arg1, s32 arg2);
typedef struct Obj_8002844C { u32 pad0; struct { VtblFn fn; } *vt; } Obj_8002844C;

void func_8002844C_ovl_01(Obj_8002844C *arg0) {
    void *r = arg0->vt->fn(arg0, 0, 0x118);
    *(volatile s32 *)((u8 *)r + 0x114) = 0;
}
