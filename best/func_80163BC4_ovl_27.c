extern s32 func_80036038_ovl_01(void *, void *, void *, s32);
extern u8 D_80163DE8_ovl_27[];
extern u8 D_80163E54_ovl_27[];

void func_80163BC4_ovl_27(void *a, s32 b) {
    s32 r = func_80036038_ovl_01(a, *(void **)((u8 *)a + 0x234), D_80163DE8_ovl_27, b);

    func_80036038_ovl_01(a, *(void **)((u8 *)a + 0x234), D_80163E54_ovl_27, r);
}
