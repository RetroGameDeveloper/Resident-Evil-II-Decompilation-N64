#define G_8010B690 (*(s32 *)0x8010B690)
#define G_8012BD24 (*(s32 *)0x8012BD24)
#define G_8012BD20 (*(s32 *)0x8012BD20)

s32 func_800072E0(void);
void func_80007300(s32);
void func_80089DA8_ovl_01(s32, s32, s32);

void func_8008AF4C_ovl_01(void) {
    G_8012BD24 = G_8010B690;
}

void func_8008AF30_ovl_01(s32 arg0) {
    G_8012BD20 = arg0;
}

s32 func_8008AF60_ovl_01(s32 arg0) {
    s32 ie;
    s32 ret;

    ie = func_800072E0();
    G_8012BD24 -= arg0;
    switch (G_8012BD20) {
    case 1:
        G_8012BD24 &= -4;
        break;
    case 2:
        G_8012BD24 &= -8;
        break;
    case 3:
        G_8012BD24 &= -0xF;
        break;
    }
    ret = G_8012BD24;
    func_80007300(ie);
    return ret;
}

void func_80089D34_ovl_01(u8 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    u32 v;
    s32 off;
    s32 p;

    v = *(u32 *)(arg2 + arg0[0x1E8] * 4);
    if (arg3 & 0xFFFF0000) {
        off = (v & 0xFFFF) - arg0[0x1E9] - 1;
    } else {
        off = arg0[0x1E9];
    }
    p = arg2 + (v >> 16) + off * 4;
    *(s32 *)(arg0 + 0x214) = p;
    func_80089DA8_ovl_01(arg1, arg2, p);
}
