typedef struct S_e {
    u8 a0;
    u8 a1;
    u16 a2;
    s16 a4;
    u8 pad6[2];
    f64 a8;
    s32 a10;
    s32 a14;
    s16 a18;
    s16 a1A;
    s16 a1C;
    s16 a1E;
    s16 a20;
    s16 a22;
    f32 a24;
    s16 a28;
    s32 a2C;
    s32 a30;
    s32 a34;
    s32 a38;
    u32 a3C;
    s16 a40;
    s16 a42;
    s16 a44;
    s16 a46;
    u8 pad48[0x15];
    u8 a5D;
} S_e;

typedef struct S_in {
    s32 x0;
    s32 x4;
    s32 x8;
    s32 xC;
    s32 x10;
    s32 x14;
    u8 x18;
} S_in;

extern u8 *D_80143EAC;
extern f32 D_800BA658_ovl_01;
extern f64 D_800BA660_ovl_01;

void func_800A548C_ovl_01(s32 arg0, S_in *arg1, s32 arg2) {
    S_e *e;
    s32 v;
    f64 d;

    e = (S_e *)(D_80143EAC + (arg0 & 0xFFFF) * 0x68);
    e->a4 = 0x1000;
    e->a0 = 0;
    e->a2 = 0;
    e->a1 = 1;
    e->a18 = 0;
    e->a1A = 0;
    e->a1C = 0;
    e->a1E = 0;
    e->a40 = 0;
    e->a42 = 0;
    e->a44 = 0;
    e->a46 = 0;
    if (arg2 & 0xFF) {
        e = (S_e *)(D_80143EAC + arg0 * 0x68);
        e->a20 = 0;
        e->a22 = 0;
        e->a24 = D_800BA658_ovl_01;
        e->a28 = 0x14;
    }
    e = (S_e *)(D_80143EAC + arg0 * 0x68);
    e->a2C = arg1->x4;
    v = arg1->x8;
    d = (f64)v;
    if (v < 0) {
        d += D_800BA660_ovl_01;
    }
    e->a8 = d;
    v = arg1->x8;
    e->a14 = v;
    e->a10 = v;
    e->a30 = arg1->xC;
    e->a34 = arg1->x10;
    e->a38 = arg1->x14;
    e->a5D = arg1->x18;
    e = (S_e *)(D_80143EAC + arg0 * 0x68);
    if (e->a38 == 0) {
        e->a3C = 0;
    } else {
        e->a3C = e->a30 - (e->a34 + e->a38);
        if (e->a3C < 0xA) {
            e->a3C = 0;
        }
    }
    if ((arg1->x4 & 0xF0000000) != 0x80000000) {
        e = (S_e *)(D_80143EAC + arg0 * 0x68);
        e->a2 |= 1;
    }
}
