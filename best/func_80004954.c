typedef struct {
    void *f00;
    s32 f04;
    s32 f08;
    u8 *f0C;
    s32 f10;
    u8 *f14;
} G49;
extern s32 *func_80001180(s32);
extern s32 func_800888CC_ovl_01(s32, void *, s32);
extern void *func_8008AF60_ovl_01(s32);
extern s32 D_800128A8;
extern G49 D_80012860;
extern u8 D_800C7650_ovl_01[];
void func_80004954(void) {
    s32 buf[0x40];
    s32 *p;
    s32 src, n, size;
    void *ptr;
    p = func_80001180(0x43);
    src = *p;
    D_800128A8 = src;
    func_800888CC_ovl_01(src, buf, 0x28);
    n = buf[0];
    size = n * 8 + 0x28;
    D_80012860.f08 = n;
    D_80012860.f04 = size;
    ptr = func_8008AF60_ovl_01(size);
    D_80012860.f00 = ptr;
    func_800888CC_ovl_01(D_800128A8, ptr, size);
    D_80012860.f10 = 0;
    D_80012860.f14 = (u8 *)D_80012860.f00 + 0x28;
    D_80012860.f0C = (u8 *)D_80012860.f00 + 8;
    *(s32 *)(D_800C7650_ovl_01 + 0x18000 + 0x1A5C) &= ~0x20;
}
