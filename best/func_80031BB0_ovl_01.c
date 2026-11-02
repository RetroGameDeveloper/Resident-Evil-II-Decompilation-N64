/* func_80025474_ovl_01 */
typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f2C;
    s32 f30;
    s32 f34;
    s32 f38;
    s32 f3C;
} S25474;

extern volatile S25474 * volatile D_800C568C_ovl_01;
extern s32 D_800C4E40_ovl_01;
extern s32 D_800C5684_ovl_01;
extern u8 D_80018B50_ovl_01;
extern u8 D_800C5280_ovl_01;
extern u8 D_800C5698_ovl_01;
void func_80018A80_ovl_01(void);

void func_80025474_ovl_01(volatile S25474 *arg0) {
    s32 v1, v2;

    D_800C568C_ovl_01 = arg0;
    arg0->f0 = 1;
    arg0->fC = (s32)((u8 *)&D_80018B50_ovl_01 - (u8 *)func_80018A80_ovl_01);
    arg0->f14 = 0x1000;
    arg0->f1C = 0x800;
    arg0->f20 = (s32)&D_800C5280_ovl_01;
    arg0->f8 = (s32)func_80018A80_ovl_01;
    arg0->f24 = 0x400;
    v1 = D_800C4E40_ovl_01;
    v2 = D_800C5684_ovl_01;
    arg0->f30 = (s32)&D_800C5698_ovl_01;
    arg0->f38 = 0;
    arg0->f3C = 0;
    arg0->f28 = v1;
    arg0->f2C = v2;
}

/* func_80031BB0_ovl_01 */
typedef struct {
    s32 f0;
    s32 f4;
    u8 *f8;
    s32 fC;
} Entry31BB0;

typedef struct {
    s32 pad0;
    s32 count;
    Entry31BB0 *entries;
} List31BB0;

typedef struct {
    u8 pad0[0x48];
    s32 f48;
    List31BB0 *f4C;
} Obj31BB0;

s32 func_80031BB0_ovl_01(Obj31BB0 *arg0, s32 arg1) {
    s32 t1, t0;
    List31BB0 *list;
    s32 count;
    Entry31BB0 *entry;
    s32 n;
    u8 *p;
    u8 *q;
    s32 val;

    t0 = t1 = 0;
    list = arg0->f4C;
    count = list->count;
    entry = list->entries;
loop:
    count -= 1;
    if (count != -1) {
        p = entry->f8;
        if (p == 0) {
            entry++;
        } else {
            n = entry->f0 - 1;
            if (n != -1) {
                q = p + 0xE;
                do {
                    val = *(s16 *)q;
                    *(s16 *)(q - 2) = t0;
                    q += 0x10;
                    n -= 1;
                    t1 += val;
                    t0 += val;
                } while (n != -1);
            }
            entry++;
        }
        goto loop;
    }
    if (t1 > 0) {
        arg1 = (arg1 + 7) & ~7;
        arg0->f48 = arg1;
        arg1 += t1 << 4;
    } else {
        arg0->f48 = 0;
    }
    return arg1;
}

/* func_8003281C_ovl_01 */
typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
} S3281C;

typedef struct {
    u8 pad[0x14];
    s32 result;
    u8 pad2[0x40];
} Buf3281C;

extern s32 D_8010B698_ovl_01;
void func_80004550(void *buf, s32 a, s32 b);
void func_800045DC(void *buf, s32 a, s32 b, s32 c);
void func_80004594(void *buf, s32 a);
void func_800888CC_ovl_01(s32 a, s32 b, s32 c);

s32 func_8003281C_ovl_01(S3281C *arg0, S3281C *arg1) {
    s32 count = arg0->f4;
    s32 a1 = arg0->f8;

    if (count != 0) {
        if (count != arg0->fC - a1) {
            Buf3281C buf;
            s32 result;
            func_80004550(&buf, D_8010B698_ovl_01, count);
            func_800045DC(&buf, arg0->f0, arg1->f8, arg0->f4);
            result = buf.result;
            func_80004594(&buf, 2);
            return result;
        }
        func_800888CC_ovl_01(arg0->f0, a1, count);
    }
    return 0;
}

/* func_80032D44_ovl_01 */
s16 func_80040A44_ovl_01(s32, s16, s16, s16);

s32 func_80032D44_ovl_01(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    s32 v;
    s32 dx;
    s32 dy;
    s32 base;

    v = 0x400;
    dx = arg2 - arg0;
    dy = arg3 - arg1;
    if (dy > 0) {
        v = 0xC00;
    } else {
        v = 0x400;
    }
    if (dx != 0) {
        s16 r = func_80040A44_ovl_01((dy << 12) / dx, arg1, arg2, arg3);
        base = 0x1000;
        if (dx < 0) {
            base = 0x800;
        }
        v = (base - r) & 0xFFF;
    }
    return v;
}
