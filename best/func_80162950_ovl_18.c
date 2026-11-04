extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_800324AC_ovl_01(void *);

void func_80162950_ovl_18(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0;

    *(u32 *)p |= 2;
    *(s32 *)(p + 0x2C) += 0x1E;
    *(u16 *)(p + 0x66) += 0x20;
    *(u16 *)(p + 0x68) += 0x40;
    func_80089D34_ovl_01(p, arg1, arg2, 0x400);
    if (*(s32 *)(p + 0x2C) >= *(s16 *)(p + 0x25E) ||
        *(s32 *)(p + 0x2C) < *(s16 *)(p + 0x1A8))
        func_800324AC_ovl_01(p);
}
