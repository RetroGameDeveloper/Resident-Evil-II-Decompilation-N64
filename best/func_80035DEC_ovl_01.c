extern u8 D_800EB72C_ovl_01[];
void func_80036038_ovl_01(void *, void *, void *, s32);
typedef struct { u8 pad[0x234]; void *unk234; } O;
void func_80035DEC_ovl_01(O *arg0, s32 arg1) {
    func_80036038_ovl_01(arg0, (u8 *)arg0->unk234 + 0x2F0, D_800EB72C_ovl_01, arg1);
}
