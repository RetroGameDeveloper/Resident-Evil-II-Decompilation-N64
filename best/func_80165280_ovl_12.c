typedef struct {
    u8 pad00[6];
    u8 unk06;
} S_func_80165280_ovl_12_arg0;

typedef void (*Fn)(S_func_80165280_ovl_12_arg0 *);
typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

extern Fn D_80166DFC_ovl_12[];
s32 func_80033634_ovl_01(void);
void func_80166900_ovl_12(S_func_80165280_ovl_12_arg0 *, s32, s32);

void func_80165280_ovl_12(S_func_80165280_ovl_12_arg0 *a) {
    U64 base;
    Fn *tbl;

    base.w.lo = (u32)D_80166DFC_ovl_12;
    tbl = (Fn *)base.w.lo;
    tbl[a->unk06](a);
    func_80166900_ovl_12(a, func_80033634_ovl_01() & 0xF, 0);
    func_80166900_ovl_12(a, func_80033634_ovl_01() & 0xF, 0);
    func_80166900_ovl_12(a, func_80033634_ovl_01() & 0xF, 5);
}
