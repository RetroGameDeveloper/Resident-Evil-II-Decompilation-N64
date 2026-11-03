extern u8 D_800C7650_ovl_01[];
s32 func_80032EA4_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80166214_ovl_13(void *arg0, s32 arg1);
void func_80165BE8_ovl_13(void *arg0, s32 arg1);
void func_80165F00_ovl_13(void *arg0);
typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

void func_80163D10_ovl_13(void *arg0) {
    U64 b;
    u8 *p;
    b.w.lo = (u32)D_800C7650_ovl_01;
    p = (u8 *)(b.w.lo + 0x18000);
    if (func_80032EA4_ovl_01(arg0, *(s32 *)(p + 0x1AA8), *(s32 *)(p + 0x1AB0), 0xC0) != 0
        || (*(u16 *)((u8 *)arg0 + 0x2C6) & 2) == 0) {
        func_80166214_ovl_13(arg0, 0x15E);
        func_80165BE8_ovl_13(arg0, 4);
    }
    func_80165F00_ovl_13(arg0);
}
