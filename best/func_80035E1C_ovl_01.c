extern u8 D_800EB72C_ovl_01[];
void func_800362C0_ovl_01(void *, void *, void *);
s32 func_80036764_ovl_01(void *, void *);

typedef struct {
    u8 pad[0x234];
    u8 *unk234;
} O;

void func_80035E1C_ovl_01(O *arg0) {
    u8 *p = arg0->unk234 + 0x2F0;
    func_800362C0_ovl_01(arg0, p, D_800EB72C_ovl_01);
    func_80036764_ovl_01(arg0, p);
}
