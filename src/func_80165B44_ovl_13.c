s32 func_80040E88_ovl_01(void *, void *);
s32 func_8004251C_ovl_01(void *, void *, void *);

void func_80165B44_ovl_13(u8 *arg0) {
    u8 *obj = *(u8 **)(arg0 + 0x234);
    u8 tmp[0x20];

    func_80040E88_ovl_01(arg0 + 0x64, arg0 + 0x14);
    func_8004251C_ovl_01(arg0 + 0x14, obj + 8, tmp);
    func_8004251C_ovl_01(tmp, obj + 0x1030, tmp);
    *(s32 *)(arg0 + 0x28) -= *(s32 *)(tmp + 0x14) - *(s32 *)(obj + 0x1074);
    *(s32 *)(arg0 + 0x30) -= *(s32 *)(tmp + 0x1C) - *(s32 *)(obj + 0x107C);
}
