typedef struct S_func_80087E14_ovl_01_arg0 {
    s32 unk_00;
    s32 *unk_04;
    s32 unk_08[16];
    u8 unk_48[0x200];
    s32 unk_248;
} S_func_80087E14_ovl_01_arg0;

extern u8 D_80129FD4_ovl_01[];
extern S_D_80129E34 D_80129E34_ovl_01[];

u32 func_8000A6C0(void *, s32, void *);
void func_8000CB60(s32, s32, s32);

void func_80087E14_ovl_01(S_func_80087E14_ovl_01_arg0 *arg0) {
    u8 *p;
    s32 i;
    s32 off;
    u32 v;

    p = (u8 *)((u32)D_80129FD4_ovl_01 + (u32)arg0->unk_00);
    if (*p != 1) {
        *arg0->unk_04 = 0xFFFF;
        return;
    }
    *arg0->unk_04 = 0;
    for (i = 0, off = 0x48; i < 0x10; i++, off += 0x20) {
        v = func_8000A6C0(&D_80129E34_ovl_01[arg0->unk_00], i, (u8 *)arg0 + off);
        arg0->unk_08[i] = v;
        if (v < 5 && v != 0) {
            *arg0->unk_04 = v;
        }
    }
    func_8000CB60(arg0->unk_248, 0, 0);
}
