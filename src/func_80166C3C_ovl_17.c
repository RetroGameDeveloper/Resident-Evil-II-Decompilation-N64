extern void func_80040E88_ovl_01(s16 *, s32 *);
extern void func_8004279C_ovl_01(s32 *, void *, s16 *);

void func_80166C3C_ovl_17(void *arg0, s32 a1, s32 a2, s32 a3) {
    u8 *p = arg0;
    s16 v[3];
    s32 t[8];

    v[0] = *(u16 *)(p + 0x64) + a1;
    v[1] = *(u16 *)(p + 0x66) + a2;
    v[2] = *(u16 *)(p + 0x68) + a3;
    func_80040E88_ovl_01(v, t);
    func_8004279C_ovl_01(t, p + 0x1E0, v);
    *(s32 *)(p + 0x28) += v[0];
    *(s32 *)(p + 0x2C) += v[1];
    *(s32 *)(p + 0x30) += v[2];
}
