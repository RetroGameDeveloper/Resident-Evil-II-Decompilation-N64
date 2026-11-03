typedef struct S_func_801622B8_arg0 {
    u8 unk_00[4];
    union { s32 unk_04; struct { u16 unk_04h; u8 unk_06; u8 unk_07; } unk_04b; } u04;
    u8 unk_08[0x20];
    s32 unk_28;
    union { s32 unk_2C; struct { s16 unk_2Ch; s16 unk_2E; } unk_2Cw; } u2C;
    union { s32 unk_30; struct { s16 unk_30h; s16 unk_32; } unk_30w; } u30;
    u8 unk_34[0x32];
    u16 unk_66;
    u8 unk_68[8];
    s32 unk_70;
    u8 unk_74[0x164];
    s16 unk_1D8[3];
    u8 unk_1DE[2];
    union { volatile u16 u; s16 s; } unk_1E0;
    u8 unk_1E2[0xD2];
    u16 unk_2B4;
    s16 unk_2B6;
    s16 unk_2B8;
    u16 unk_2BA;
} S_func_801622B8_arg0;

u16 func_80032D44_ovl_01(s32 arg0, s32 arg1, s16 arg2, s16 arg3);
s32 func_80032F94_ovl_01(void *arg0, s16 arg1, s32 arg2);
s32 func_80033634_ovl_01(void);
s32 func_800408F0_ovl_01(s16 arg0);
s32 func_80040998_ovl_01(s16 arg0);
void func_80040E88_ovl_01(void *arg0, s32 arg1);
void func_80077D48_ovl_01(s32 arg0, void *arg1);
void func_80083800_ovl_01(s16 arg0, s16 *arg1, s16 *arg2);

void func_801622B8_ovl_21(S_func_801622B8_arg0 *arg0) {
    s16 buf[3];
    s32 ret;
    s16 t;
    u16 v;
    s16 *pbuf;
    u8 st;
    s32 sh;
    s16 u;
    s16 q;
    u16 sum;

    arg0->unk_2BA |= 8;
    switch (arg0->u04.unk_04b.unk_06) {
    case 0:
        arg0->unk_2B4 = func_80032D44_ovl_01(-0x6270, -0x708,
            arg0->u30.unk_30w.unk_32, arg0->u2C.unk_2Cw.unk_2E);
        arg0->unk_1E0.u = 0;
        arg0->u04.unk_04b.unk_06++;
    case 1:
        if ((func_80033634_ovl_01() & 3) == 0) {
            if (arg0->u2C.unk_2C < -0x708 && (func_80033634_ovl_01() & 3) == 0) {
                arg0->u04.unk_04 = 0x01020000;
                return;
            }
            arg0->u04.unk_04 = 0x01000000;
            return;
        }
        if ((func_80033634_ovl_01() & 3) == 2) {
            func_80077D48_ovl_01(0, arg0);
        }
        sh = (func_80033634_ovl_01() & 0xFF) << 3;
        u = arg0->unk_66 - 0x400;
        arg0->unk_2B8 = u + sh;
        st = ((u8 *)arg0)[6];
        ((u8 *)arg0)[6] = st + 1;
    case 2:
        t = arg0->unk_1E0.s;
        v = arg0->unk_1E0.u;
        if (t < 0x8C) {
            arg0->unk_1E0.u = v + 0x14;
        }
        buf[2] = arg0->unk_1E0.u;
        buf[0] = 0;
        buf[1] = 0;
        ret = func_80032F94_ovl_01(arg0, arg0->unk_2B8, 0x20);
        pbuf = buf;
        if ((s16)ret == 0) {
            arg0->u04.unk_04b.unk_06 = 1;
        }
        arg0->unk_66 += ret;
        func_80083800_ovl_01((s16)arg0->unk_66, pbuf, pbuf);
        q = (s16)((s32)buf[2] * 0x64000 / 1130400);
        sum = (arg0->unk_2B4 + q) & 0xFFF;
        arg0->unk_2B6 = q;
        arg0->unk_2B4 = sum;
        arg0->unk_28 += buf[0];
        arg0->u30.unk_30 = func_800408F0_ovl_01((s16)arg0->unk_2B4) * 1800 / 4096 - 0x6270;
        arg0->u2C.unk_2C = -(func_80040998_ovl_01((s16)arg0->unk_2B4) * 1800) / 4096 - 0x708;
        arg0->unk_1D8[1] = 0xC00;
        arg0->unk_1D8[2] = 0xC00 - arg0->unk_2B4;
        func_80040E88_ovl_01(arg0->unk_1D8, arg0->unk_70);
        break;
    }
}
