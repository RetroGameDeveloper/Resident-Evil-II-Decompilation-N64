typedef struct { s32 off; s32 len; } E;
extern s32 D_80012874;
extern s32 D_800128A8;
s32 func_800888CC_ovl_01(s32, void *, s32);

s32 func_80004C9C(s32 idx) {
    E *e = (E *)(D_80012874 + idx * 8);
    s32 base = D_800128A8 + e->off;
    s32 len = e->len;
    s32 buf[2];
    s32 v = 0;
    if (len != 0) {
        if (len & 1) len++;
        func_800888CC_ovl_01(base + len, buf, 8);
        v = buf[1];
    }
    return v;
}
