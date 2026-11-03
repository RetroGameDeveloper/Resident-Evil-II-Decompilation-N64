extern u8 D_800B92C8_ovl_01[];
extern u8 D_800B92D0_ovl_01[];
void func_8008386C_ovl_01(s32, s32, s16 *, s16 *);

typedef struct {
    u32 v;
} __attribute__((packed)) P32;

s32 func_8006A78C_ovl_01(s32 arg0) {
    s16 buf[4];
    s32 x;
    s32 y;
    s32 r;

    ((P32 *)buf)->v = ((P32 *)D_800B92C8_ovl_01)->v;
    ((P32 *)((u8 *)buf + 4))->v = ((P32 *)(D_800B92C8_ovl_01 + 4))->v;
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

    ((P32 *)buf)->v = ((P32 *)D_800B92D0_ovl_01)->v;
    ((P32 *)((u8 *)buf + 4))->v = ((P32 *)(D_800B92D0_ovl_01 + 4))->v;
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
    switch (arg0) {
    case 0:
        return arg1[0] + *(u16 *)((u8 *)arg1 + 0x4);
    case 1:
        return arg1[1];
    case 2:
        return arg1[0];
    case 3:
        return arg1[1] + *(u16 *)((u8 *)arg1 + 0x6);
    }
    return;
}
