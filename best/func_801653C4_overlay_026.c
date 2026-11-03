extern s32 func_80033634_ovl_01(void);
extern s32 func_80166B18_ovl_26(void *arg0, u8 arg1, s32 arg2);
extern void func_80164E08_ovl_26(void *arg0, s32 arg1, s32 arg2);
extern u8 D_801671B0_ovl_26[];

typedef struct S_obj {
    u8 pad_00[0x2D8];
    s8 unk_2D8;
} S_obj;

void func_801653C4_overlay_026(S_obj *p, s32 a, s32 b) {
    u8 *tab = D_801671B0_ovl_26;
    s32 x;
    x = func_80033634_ovl_01() & 0xF;
    func_80166B18_ovl_26(p, tab[x], 10);
    x = func_80033634_ovl_01() & 0xF;
    func_80166B18_ovl_26(p, tab[x], 10);
    p->unk_2D8 = 15;
    func_80164E08_ovl_26(p, a, b);
}
