void func_80040E88_ovl_01(s32 arg0, s32 arg1);
void func_8004251C_ovl_01(s32 arg0, s32 arg1, s32 arg2);
void func_800362C0_ovl_01(s32 arg0, s32 arg1, void *arg2);
void func_80036764_ovl_01(s32 arg0, s32 arg1);
extern u8 D_8016729C_ovl_32;
extern u8 D_80167308_ovl_32;

void func_80165534_ovl_32(u8 *arg0) {
    s32 s0 = *(s32 *)(arg0 + 0x234);
    s32 t = (s32)(arg0 + 0x14);
    s32 u = s0 + 0x38;
    volatile u8 pad[0x20];

    func_80040E88_ovl_01((s32)(arg0 + 0x64), t);
    func_8004251C_ovl_01(t, s0 + 0x8, u);
    func_8004251C_ovl_01(u, s0 + 0x180, s0 + 0x1B0);
    func_8004251C_ovl_01(u, s0 + 0x2F8, s0 + 0x328);
    func_8004251C_ovl_01(u, s0 + 0x470, s0 + 0x4A0);
    func_800362C0_ovl_01((s32)arg0, s0, &D_8016729C_ovl_32);
    func_800362C0_ovl_01((s32)arg0, s0, &D_80167308_ovl_32);
    func_80036764_ovl_01((s32)arg0, s0);
}
