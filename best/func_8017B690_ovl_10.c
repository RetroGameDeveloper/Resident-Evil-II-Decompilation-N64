
extern unsigned char D_8017E680_ovl_10;
void func_8017B690_ovl_10(void) {
    u16 v = *(u16 *)((char *)&D_8017E680_ovl_10 + 0x38) - 1;
    *(u16 *)((char *)&D_8017E680_ovl_10 + 0x38) = v;
    if ((s16)v < 0) {
        ++*(u16 *)((char *)&D_8017E680_ovl_10 + 2);
    }
}
extern unsigned char D_800C7650_ovl_01;
extern unsigned char D_8017E4B0_ovl_10;
extern void func_8017BDEC_ovl_10(void);
extern void func_8017C0E8_ovl_10(void);
extern void func_8017C1B4_ovl_10(void);
extern void func_8017C5E4_ovl_10(void);
void func_8017BD30_ovl_10(void) {
    unsigned char *a0 = &D_8017E680_ovl_10;
    unsigned char *a1;
    *(s32 *)(a0 + 0x28) = 0xBB8;
    *(s16 *)(a0 + 4) = 0;
    *(s32 *)(a0 + 0x30) = 0;
    *(s16 *)(a0) = 8;
    *(s16 *)(a0 + 0x36) = 1;
    *(s16 *)(a0 + 0x2E) = 0x10;
    a1 = *(unsigned char **)((char *)&D_800C7650_ovl_01 + 0x1CB4) + 0x38;
    *(unsigned char **)(a0 + 0x3C) = &D_8017E4B0_ovl_10;
    *(u16 *)(a0 + 0x2C) = *(u16 *)((char *)&D_800C7650_ovl_01 + 0x1AE6);
    *(s32 *)(a0 + 0x40) = *(s32 *)(a1 + 0x18) - 0x3E8;
    *(s32 *)(a0 + 0x48) = *(s32 *)(a1 + 0x14);
    *(s32 *)(a0 + 0x50) = *(s32 *)(a1 + 0x1C);
    *(s32 *)(a0 + 0x4C) = *(s32 *)(a1 + 0x18) - 0x12C;
    func_8017C1B4_ovl_10();
    func_8017BDEC_ovl_10();
    func_8017C0E8_ovl_10();
    func_8017C5E4_ovl_10();
}
extern unsigned char D_8017E6C0_ovl_10;
void func_8017C1B4_ovl_10(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        *(s16 *)((char *)&D_8017E6C0_ovl_10 + i*8 + 4) = 0;
        *(s16 *)((char *)&D_8017E6C0_ovl_10 + i*8 + 6) = 0;
    }
    *(void **)((char *)&D_800C7650_ovl_01 + 0x18290) = &D_8017E6C0_ovl_10;
}
extern void func_8017E18C_ovl_10(s32);
void func_8017C208_ovl_10(void) {
    unsigned char *p = &D_8017E680_ovl_10;
    u16 count;
    if (p[0x35] == 0) {
        func_8017E18C_ovl_10(0xC68);
        p[0x35] = 1;
    }
    func_8017C5E4_ovl_10();
    count = *(u16 *)(p + 4) + 1;
    *(u16 *)(p + 4) = count;
    if (*(u16 *)(*(unsigned char **)(p + 0x3C) + 0x14) < (s16)count) {
        *(s32 *)(p + 0x30) = 0;
        *(s16 *)(p + 0x2E) = 0;
        *(s16 *)p = 0;
        *(u16 *)(p + 4) = 0;
        ++*(u16 *)(p + 2);
    }
}
