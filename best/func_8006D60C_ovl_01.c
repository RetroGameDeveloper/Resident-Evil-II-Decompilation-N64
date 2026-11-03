extern u8 *D_80114ECC_ovl_01;
extern u8 D_8010BBD4_ovl_01[];
void func_8004FC64_ovl_01(s32, void *);
void func_8004FC6C_ovl_01(s32, void *);

void func_8006D60C_ovl_01(u8 *arg0, s32 arg1) {
    u8 *tbl = D_80114ECC_ovl_01;
    *(void **)(arg0 + 0x140) = arg0 + ((*(s8 *)(arg0 + 0x2) << 5) + 0xC0);
    *(u8 *)(arg0 + 0x1) = 1;
    *(u8 *)(arg0 + 0x0) = 0;
    *(s8 *)(arg0 + 0x4) = -1;
    *(s8 *)(arg0 + 0x8) = -1;
    *(s32 *)(arg0 + 0x1C) = (s32)(tbl + *(u16 *)(tbl + arg1 * 2));
}

typedef struct {
    u8 flags;
    u8 pad[0x1B];
} Ent6D;

void func_8006D748_ovl_01(void) {
    u8 count = *(u8 *)(D_8010BBD4_ovl_01 + 0x34A);
    Ent6D *e = (Ent6D *)D_8010BBD4_ovl_01;
    u32 i;
    if (count != 0) {
        for (i = 0; i < count; i++) {
            if (e->flags & 0x80) {
                func_8004FC64_ovl_01(i, e);
            } else if (e->flags & 0x40) {
                func_8004FC6C_ovl_01(i, e);
            }
            e++;
        }
    }
}
