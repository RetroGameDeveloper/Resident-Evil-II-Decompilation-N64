extern u8 D_800B86E8_ovl_01[];
extern void *D_800EBB34_ovl_01;
s32 func_80060A0C_ovl_01(s32 *a, s32 b, void *c, s32 d);
void func_8003D174_ovl_01(void);
typedef struct { s32 x, y; } __attribute__((packed)) P8;
void func_8003C208_ovl_01(void) {
    s32 a[3];
    P8 b;
    u8 *p;
    p = D_800EBB34_ovl_01;
    b = *(P8 *)D_800B86E8_ovl_01;
    a[0] = *(s16 *)(p + 0x34);
    a[1] = *(s16 *)(p + 0x36) - 0x64;
    a[2] = *(s16 *)(p + 0x38);
    if (func_80060A0C_ovl_01(a, *(s16 *)(p + 0x22), &b, 0x2002000A)) {
        func_8003D174_ovl_01();
    }
}
