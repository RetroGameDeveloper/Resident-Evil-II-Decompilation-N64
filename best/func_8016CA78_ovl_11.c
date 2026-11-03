typedef void (*Fn)(void *);
extern volatile Fn D_8016E7DC_ovl_11[];
extern void func_8016D6F8_ovl_11(void *);
extern void func_80077B0C_ovl_01(u32, void *);

void func_8016CA78_ovl_11(void *p) {
    s16 v;
    register volatile Fn *tbl = D_8016E7DC_ovl_11;
    (*tbl[((u8 *)p)[5]])(p);
    v = *(s16 *)((u8 *)p + 0x1A8);
    if (v != 0 && (*(s32 *)(*(u32 *)((u8 *)p + 0x234) + 0x50) - 0x1F4) < v && (((u8 *)p)[0x1E9] & 15) == 1) {
        func_8016D6F8_ovl_11(p);
        func_80077B0C_ovl_01(0x2020001, (u8 *)p + 0x28);
    }
}
