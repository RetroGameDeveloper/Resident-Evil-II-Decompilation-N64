extern void func_80006D30(void *, void *, s32);
extern void func_8000CB60(void *, s32, s32);
extern void func_8000C9E0(void *, s32, s32);
extern void func_80011390(void);
extern s32 func_800113E0(s32);
extern void func_800A4D64_ovl_01(void *, s32, s32, s32);
extern void func_800A5734_ovl_01(void);

extern u8 D_80143EED;
extern u8 D_80143F50;
extern u8 D_80143F68;
extern s32 D_80143EA4;
extern void (*D_80143F94)(void);
extern s32 D_80135C4C;

void func_800A5734_ovl_01(void) {
    s32 z = 0;

    func_80006D30(&D_80143F50, &D_80143F68, 1);
    func_8000CB60(&D_80143F50, z, z);
}

void func_800A56F0_ovl_01(void) {
    u8 *p = &D_80143EED;

    if (*p != 0) {
        D_80143F94();
        func_80011390();
        *p = 0;
    }
}

s32 func_800A577C_ovl_01(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 v;

    func_800A5734_ovl_01();
    v = func_800113E0(*arg0);
    D_80143EA4 = v;
    *arg0 = v;
    if (arg3 & 0x10000) {
        v = 2;
    } else if (arg3 & 0x20000) {
        v = 3;
    } else if (arg3 & 0x40000) {
        v = 4;
    } else {
        v = ((arg3 & 0x80000) == 0);
    }
    func_800A4D64_ovl_01(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF, v);
    return 0;
}

void func_800A56C8_ovl_01(void) {
    s32 z = 0;

    func_8000CB60(&D_80143F50, z, z);
}

void func_800A56A0_ovl_01(void) {
    func_8000C9E0(&D_80143F50, 0, 1);
}

void func_800A5660_ovl_01(void) {
    if (D_80135C4C > 0) {
        if (--D_80135C4C == 0) {
            s32 z = 0;

            func_8000CB60(&D_80143F50, z, z);
        }
    }
}
