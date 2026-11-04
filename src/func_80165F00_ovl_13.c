s32 func_80033634_ovl_01(void);
s32 func_80065658_ovl_01(void);
void func_80166214_ovl_13(void *arg0, s32 arg1);
void func_80165BE8_ovl_13(void *arg0, s32 arg1);

void func_80165F00_ovl_13(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(u16 *)(p + 0x2C6) & 0x10) {
        func_80166214_ovl_13(p, 0x15E);
        *(s8 *)(p + 0x2BC) = func_80033634_ovl_01() & 0x9D;
        *(s8 *)(p + 0x2BB) = func_80065658_ovl_01();
        *(s8 *)(p + 0x2B8) = 0x1E;
        func_80165BE8_ovl_13(p, 4);
        *(u16 *)(p + 0x2C6) &= 0xFFA7;
    }
}
