extern f64 D_80012100;
extern s32 D_800128C8;

s32 func_800113E0(s32 arg0) {
    f64 d;
    f32 num;
    f32 t;
    s32 val;
    u32 q;

    d = arg0;
    num = (f32)D_800128C8;
    if (arg0 < 0) {
        d += D_80012100;
    }
    t = num / (f32)d + 0.5f;
    if (!(t >= 2147483648.0f)) {
        val = (s32)t;
    } else {
        val = (s32)(t - 2147483648.0f);
        val |= 0x80000000;
    }
    if ((u32)val < 0x84) {
        return -1;
    }
    q = (u32)val / 66;
    if ((q & 0xFF) >= 0x11) {
        q = 0x10;
    }
    *(volatile u32 *)0xA4500010 = val - 1;
    *(volatile u32 *)0xA4500014 = (q & 0xFF) - 1;
    *(volatile u32 *)0xA4500008 = 1;
    return D_800128C8 / val;
}
