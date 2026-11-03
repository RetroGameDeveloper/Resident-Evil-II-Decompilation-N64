typedef struct { u8 pad[6]; u8 index; } Obj; extern void *D_80166D80_ovl_12[]; void func_80164AF0_ovl_12(Obj *arg0) { ((void (*)(Obj *))D_80166D80_ovl_12[arg0->index])(arg0); }
