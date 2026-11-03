void func_8008386C_ovl_01(s16 arg0, s32 arg1, s16 *arg2, s16 *arg3);
s32 func_8006A81C_ovl_01(s32 arg0);
s32 func_80032D44_ovl_01(s16 arg0, s16 arg1, s16 arg2, s16 arg3);

typedef struct S32A {
    s16 a;
    s16 b;
} S32A;

extern u8 D_800B8660_ovl_01[];

void func_80036F94_ovl_01(u8 *arg0, u8 *arg1, s32 arg2) {
    s16 sp[4];
    u8 *src;
    s32 idx;
    s16 ang;
    s16 t;
    s16 u;
    s16 d;

    src = D_800B8660_ovl_01;
    *(S32A *)&sp[0] = *(S32A *)(src + 0);
    *(S32A *)&sp[2] = *(S32A *)(src + 4);
    func_8008386C_ovl_01(*(s16 *)(arg0 + 0x66), *(s32 *)(arg0 + 0x70), sp, sp);
    idx = func_8006A81C_ovl_01(*(s32 *)(arg0 + 0x70));
    switch (idx) {
    case 0:
        t = func_80032D44_ovl_01(*(s16 *)(arg0 + 0x2A), *(s16 *)(arg0 + 0x32),
                                 *(s16 *)(arg1 + 0x2), *(s16 *)(arg1 + 0xA));
        u = func_80032D44_ovl_01(0, 0, sp[0], sp[2]);
        ang = t - u;
        break;
    case 1:
        t = func_80032D44_ovl_01(*(s16 *)(arg0 + 0x2A), *(s16 *)(arg0 + 0x32),
                                 *(s16 *)(arg1 + 0x2), *(s16 *)(arg1 + 0xA));
        u = func_80032D44_ovl_01(0, 0, sp[0], sp[2]);
        ang = -t + u;
        break;
    case 2:
        t = func_80032D44_ovl_01(*(s16 *)(arg0 + 0x32), *(s16 *)(arg0 + 0x2E),
                                 *(s16 *)(arg1 + 0xA), *(s16 *)(arg1 + 0x6));
        u = func_80032D44_ovl_01(0, 0, sp[2], sp[1]);
        ang = t - u;
        break;
    case 3:
        t = func_80032D44_ovl_01(*(s16 *)(arg0 + 0x32), *(s16 *)(arg0 + 0x2E),
                                 *(s16 *)(arg1 + 0xA), *(s16 *)(arg1 + 0x6));
        u = func_80032D44_ovl_01(0, 0, sp[2], sp[1]);
        ang = -t + u;
        break;
    case 4:
        t = func_80032D44_ovl_01(*(s16 *)(arg0 + 0x2E), *(s16 *)(arg0 + 0x2A),
                                 *(s16 *)(arg1 + 0x6), *(s16 *)(arg1 + 0x2));
        u = func_80032D44_ovl_01(0, 0, sp[1], sp[0]);
        ang = t - u;
        break;
    case 5:
        t = func_80032D44_ovl_01(*(s16 *)(arg0 + 0x2E), *(s16 *)(arg0 + 0x2A),
                                 *(s16 *)(arg1 + 0x6), *(s16 *)(arg1 + 0x2));
        u = func_80032D44_ovl_01(0, 0, sp[1], sp[0]);
        ang = -t + u;
        break;
    }
    d = (s16)arg2;
    if ((s32)((ang + d) & 0xFFF) >= d * 2) {
        if ((s32)((ang + d) & 0xFFF) < 0x801)
            *(u16 *)(arg0 + 0x66) = *(u16 *)(arg0 + 0x66) + arg2;
        else
            *(u16 *)(arg0 + 0x66) = *(u16 *)(arg0 + 0x66) - arg2;
    }
}
