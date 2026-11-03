typedef struct {
    u8 pad00[0x20];
    s32 f20;
    s32 f24;
    s32 f28;
    u8 pad2C[0x2C];
    s32 f58;
    u8 pad5C[8];
    s32 f64;
    u8 pad68[0x48];
    void *fB0;
    u8 padB4[0x4C];
    s32 f100;
    u8 pad104[8];
    s32 f10C;
} Obj;

typedef struct {
    u8 pad00[8];
    s32 f8;
    s32 fC;
    u8 pad10[0x14];
    s32 f24;
    u8 pad28[0x30];
    s32 f58;
    s32 f5C;
    u8 pad60[0x14];
    s32 f74;
    u8 pad78[0x30];
    s32 fA8;
    s32 fAC;
    u8 padB0[0x14];
    s32 fC4;
} Obj2;

s32 func_8002D290_ovl_01(Obj *a0) {
    s32 v1;
    s32 a1;
    s32 a2;
    s32 t;
    Obj2 *p;
    if (a0->f58 == 0) {
        if (a0->f100 == 0) {
            v1 = a0->f24;
            if (v1 == 3) {
                a1 = a0->f20;
                if (a1 == v1) {
                    a2 = a0->f28;
                    if (a2 == 2) {
                        if (a0->f64 == a1) {
                            p = (Obj2 *)a0->fB0;
                            if (p->f8 == a2) {
                                a1 = p->f58;
                                if (a1 == 1) {
                                    a2 = p->fA8;
                                    if (a2 == a1) {
                                        if (p->fC < 3) {
                                            a1 = p->f5C;
                                            if (a1 == a2) {
                                                if (p->fAC == a1) {
                                                    a1 = p->f24;
                                                    if (a1 == a0->f10C) {
                                                        t = p->f74;
                                                        if (t == a1) {
                                                            if (p->fC4 == t) {
                                                                return 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
