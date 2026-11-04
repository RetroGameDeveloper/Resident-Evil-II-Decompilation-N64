typedef struct { u8 b[5]; } S5;
typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

extern u8 D_800C7650_ovl_01[];
extern s32 D_800F9DD0_ovl_01;
extern u8 D_80171750_ovl_07[];
extern f64 D_80171758_ovl_07;
extern f64 D_80171760_ovl_07;
extern f64 D_80171768_ovl_07;
extern f64 D_80171770_ovl_07;
extern f64 D_80171778_ovl_07;
extern f64 D_80171780_ovl_07;
extern f64 D_80171788_ovl_07;
extern f64 D_80171790_ovl_07;

s32 func_80007000(void);
void func_80170F70_ovl_07(void);

#define RANDVAL(dst, rem, cdiv, cmul, cone) \
    do { (dst) = (f32)((f64)(rem) / (cdiv) * (cmul) + (cone)); } while (0)

#define ROUND(res, xv, cone, chalf) \
    do { \
        f32 a_ = (xv); \
        f32 f_; \
        s32 i_; \
        if (a_ < 0.0f) a_ = -a_; \
        i_ = (s32)a_; \
        f_ = a_ - (f32)i_; \
        if ((f64)f_ > (chalf)) { \
            if ((f64)(xv) > 0.0) { f32 y_ = (f32)((f64)(xv) + ((cone) - (f64)f_)); (res) = (s32)y_; } \
            else { f32 y_ = (f32)((f64)(xv) - (f64)f_); (res) = (s32)y_; } \
        } else { \
            if ((f64)(xv) >= 0.0) { f32 y_ = (f32)((f64)(xv) - (f64)f_); (res) = (s32)y_; } \
            else { f32 y_ = (f32)((f64)(xv) - ((cone) - (f64)f_)); (res) = (s32)y_; } \
        } \
    } while (0)

void func_801709A8_overlay_060(void) {
    U64 bb;
    u32 off1, off2;
    u8 *base;
    u8 *p;
    u8 *q;
    s32 seed;
    s32 rem;
    s32 val;
    f32 x;
    u8 ni;
    S5 loc;

    off1 = 0x18000;
    off2 = 0x20000;
    bb.w.lo = (u32)D_800C7650_ovl_01;
    base = (u8 *)(u32)bb.w.lo;
    p = (u8 *)(off1 + (u32)bb.w.lo);
    q = (u8 *)(off2 + (u32)bb.w.lo);
    loc = *(S5 *)D_80171750_ovl_07;

    if (*(s32 *)(p + 0x1A3C) & 8) {
        *(u8 *)(p + 0x1A4A) = 4;
    } else {
        s32 v1 = *(s32 *)(p + 0x1A5C);
        if (v1 & 0x40000000) {
            if (v1 >= 0) *(u8 *)(p + 0x1A4A) = 1;
            else *(u8 *)(p + 0x1A4A) = 3;
        } else {
            if (v1 >= 0) *(u8 *)(p + 0x1A4A) = 0;
            else *(u8 *)(p + 0x1A4A) = 2;
        }
    }

    if (*(u8 *)(q + 0x1962) & 0xF0) {
        seed = func_80007000();
        D_800F9DD0_ovl_01 = seed;
        seed = seed * 0x41C64E6D + 0x3039;
        D_800F9DD0_ovl_01 = seed;
        rem = (((seed >> 16) & 0x7FFF)) % 32767;
        RANDVAL(x, rem, D_80171758_ovl_07, D_80171760_ovl_07, D_80171768_ovl_07);
        ROUND(val, x, D_80171768_ovl_07, D_80171770_ovl_07);
        ni = (*(u8 *)(q + 0x1962) >> 4) & 0xFF;
        while ((val & 0xFF) == ni) {
            seed = D_800F9DD0_ovl_01;
            seed = seed * 0x41C64E6D + 0x3039;
            D_800F9DD0_ovl_01 = seed;
            rem = (((seed >> 16) & 0x7FFF)) % 32767;
            RANDVAL(x, rem, D_80171778_ovl_07, D_80171780_ovl_07, D_80171788_ovl_07);
            ROUND(val, x, D_80171788_ovl_07, D_80171790_ovl_07);
        }
        *(u8 *)(q + 0x1962) = (*(u8 *)(q + 0x1962) & 0xF) | (val << 4);
    }
    func_80170F70_ovl_07();
}
