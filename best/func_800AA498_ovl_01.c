void func_800A5618_ovl_01(void);
void func_800A5660_ovl_01(void);
void func_800AAF30_ovl_01(void *, f32 *);
void func_800AB26C_ovl_01(void *, void *, void *);
extern u8 D_801362B0_ovl_01;
extern void *D_80148B78;
extern f32 D_800BA7D0_ovl_01;

typedef struct { s32 x; s32 y; s32 z; } V3;

s32 func_800AA498_ovl_01(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4,
                         volatile f32 arg5, volatile f32 arg6, volatile f32 arg7,
                         volatile s32 arg8, u8 arg9) {
    f32 m[12];
    u8 *p = (u8 *)arg0;
    void *head;

    if (D_801362B0_ovl_01 != 0) {
        func_800A5618_ovl_01();
        head = D_80148B78;
        *(void **)(p + 0) = head;
        if (head != NULL) *(void **)((u8 *)head + 4) = p;
        *(void **)(p + 4) = 0;
        *(V3 *)(p + 0xC) = *(V3 *)arg1;
        *(V3 *)(p + 0x18) = *(V3 *)arg2;
        *(V3 *)(p + 0x24) = *(V3 *)arg3;
        *(f32 *)(p + 0x3C) = -*(f32 *)((u8 *)arg4 + 0);
        *(f32 *)(p + 0x40) = -*(f32 *)((u8 *)arg4 + 4);
        *(f32 *)(p + 0x78) = arg5;
        D_80148B78 = p;
        *(f32 *)(p + 0x7C) = arg6;
        *(f32 *)(p + 0x44) = -*(f32 *)((u8 *)arg4 + 8);
        *(f32 *)(p + 0x80) = arg7;
        func_800AB26C_ovl_01(p + 0x30, p + 0x3C, p + 0x24);
        m[0] = *(f32 *)(p + 0x30);
        m[3] = *(f32 *)(p + 0x34);
        m[6] = *(f32 *)(p + 0x38);
        m[1] = *(f32 *)(p + 0x3C);
        m[4] = *(f32 *)(p + 0x40);
        m[7] = *(f32 *)(p + 0x44);
        m[2] = *(f32 *)(p + 0x24);
        m[5] = *(f32 *)(p + 0x28);
        m[8] = *(f32 *)(p + 0x2C);
        m[9] = *(f32 *)(p + 0xC);
        m[10] = *(f32 *)(p + 0x10);
        m[11] = *(f32 *)(p + 0x14);
        func_800AAF30_ovl_01(p + 0x48, m);
        *(s32 *)(p + 8) = arg8;
        *(f32 *)(p + 0x84) = (f32)(arg9 & 0xFF) / D_800BA7D0_ovl_01;
        func_800A5660_ovl_01();
        return 1;
    }
    return 0;
}
