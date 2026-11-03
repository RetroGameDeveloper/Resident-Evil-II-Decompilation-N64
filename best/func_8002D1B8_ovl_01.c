extern void func_8002D194_ovl_01(void *);
extern void func_8002C8EC_ovl_01(void);
extern s32 D_8002CC84_ovl_01, D_8002CF50_ovl_01, D_8002B840_ovl_01, D_8002BB70_ovl_01;

typedef void *(*AllocFn)(s32, s32, s32);
typedef struct { AllocFn unk00; } Vtbl;
typedef struct {
    u8 pad00[4];
    Vtbl *unk04;
    u8 pad08[0x16C];
    void *unk174;
} Obj;

typedef struct {
    void *f00;
    void *f04;
    void *f08;
    void *f0C;
    void *table[16];
} NewObj;

void func_8002D1B8_ovl_01(Obj *s0) {
    s32 i;
    if (s0->unk174 == 0) {
        s0->unk174 = s0->unk04->unk00(0, 0, 0x60);
        i = 0;
    } else {
        i = 0;
    }
    ((NewObj *)s0->unk174)->f00 = func_8002D194_ovl_01;
    ((NewObj *)s0->unk174)->f04 = &D_8002CC84_ovl_01;
    ((NewObj *)s0->unk174)->f08 = &D_8002CF50_ovl_01;
    ((NewObj *)s0->unk174)->f0C = func_8002C8EC_ovl_01;
    do {
        ((NewObj *)s0->unk174)->table[i] = func_8002C8EC_ovl_01;
        i++;
    } while (i < 16);
    ((NewObj *)s0->unk174)->table[0] = &D_8002B840_ovl_01;
    ((NewObj *)s0->unk174)->table[14] = &D_8002BB70_ovl_01;
    func_8002D194_ovl_01(s0);
}
