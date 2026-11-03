extern u8 D_800B92C8_ovl_01[];
extern u8 D_800B92D0_ovl_01[];
void func_8008386C_ovl_01(s32, s32, s16 *, s16 *);

typedef struct {
    s16 a;
    s16 b;
} S32A;

s32 func_8006A78C_ovl_01(s32 arg0) {
    s16 buf[4];
    s32 x;
    s32 y;
    s32 r;

    *(S32A *)&buf[0] = *(S32A *)(D_800B92C8_ovl_01 + 0x0);
    *(S32A *)&buf[2] = *(S32A *)(D_800B92C8_ovl_01 + 0x4);
    func_8008386C_ovl_01(0, arg0, buf, buf);
    x = buf[0];
    y = buf[2];
    r = 0;
    if (x < 0) {
        x = -x;
    }
    if (x >= 0x4001) {
        r = 1;
    }
    if (y < 0) {
        y = -y;
    }
    if (y >= 0x4001) {
        r = 2;
    }
    return r;
}

s32 func_8006A81C_ovl_01(s32 arg0) {
    s16 buf[4];
    s32 r;

    *(S32A *)&buf[0] = *(S32A *)(D_800B92D0_ovl_01 + 0x0);
    *(S32A *)&buf[2] = *(S32A *)(D_800B92D0_ovl_01 + 0x4);
    func_8008386C_ovl_01(0, arg0, buf, buf);
    r = buf[1] < -0x4000;
    if (buf[0] >= 0x4001) {
        r = 2;
    }
    if (buf[0] < -0x4000) {
        r = 3;
    }
    if (buf[2] >= 0x4001) {
        r = 4;
    }
    if (buf[2] < -0x4000) {
        r = 5;
    }
    return r;
}

s32 func_8006A8B0_ovl_01(s32 arg0, s16 *arg1) {
    if (arg0 == 1) {
        return arg1[1];
    }
    if (arg0 < 2) {
        if (arg0 == 0) {
            return arg1[0] + *(u16 *)((u8 *)arg1 + 0x4);
        }
        return 1;
    }
    if (arg0 == 2) {
        return arg1[0];
    }
    if (arg0 == 3) {
        return arg1[1] + *(u16 *)((u8 *)arg1 + 0x6);
    }
    return 3;
}
