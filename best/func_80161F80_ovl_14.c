typedef struct { s32 a; u32 pad; s32 b; } Arg;
extern s32 func_80036764_ovl_01_2FC(void *, Arg *, s32);
extern s32 func_80036764_ovl_01_510_24(void *, s32, s32);
extern s32 func_80036764_ovl_01_510_560(void *, s32, s32);
void func_80161F80_ovl_14(u8 *p) {
    Arg arg;
    u16 flags;
    arg.a = *(s16 *)(p + 0x2D0);
    arg.b = *(s16 *)(p + 0x2D4);
    flags = *(u16 *)(p + 0x2C8);
    if (!(flags & 0x10)) {
        if (func_80036764_ovl_01_2FC(p + 0x28, &arg, 0x30))
            *(u16 *)(p + 0x2C8) |= 0x10;
    }
    flags = *(u16 *)(p + 0x2C8);
    if (!(flags & 0x20)) {
        if (func_80036764_ovl_01_510_24(p + 0x2C, *(s16 *)(p + 0x2D2), 0x30))
            *(u16 *)(p + 0x2C8) |= 0x10;
    }
    func_80036764_ovl_01_510_560(p, *(u8 *)(p + 0x2B4) << 10, 0x20);
}
