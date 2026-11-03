/* identical to func_8016B4A4_ovl_11 (matched), with its names changed by decompdecomp */
typedef void (*Fn)(void *);
extern Fn D_8016E7B8_ovl_11[];

void func_8016B470_ovl_11(void *p) {
    Fn *tbl = D_8016E7B8_ovl_11;
    tbl[((u8 *)p)[5]](p);
}

extern void func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_800336B0_ovl_01(void *, s32, s32);

void func_80178034_overlay_039(void *p, s32 a1, s32 a2) {
    switch (((u8 *)p)[6]) {
    case 0:
        *(s32 *)((u8 *)p + 0x1E8) = 0xF00;
        ((u8 *)p)[6] = 1;
    case 1:
        func_80089D34_ovl_01(p, a1, a2, 0x100);
        if (((u8 *)p)[0x1EA] == 0)
            func_800336B0_ovl_01(p, 0, 1);
        break;
    }
}
