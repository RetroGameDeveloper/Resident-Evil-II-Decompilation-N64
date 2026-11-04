typedef struct S_vtbl_29A2C { s32 (*unk_00)(void *, s32, s32); } S_vtbl_29A2C;
typedef struct S_arg0_29A2C { u8 unk_00[4]; S_vtbl_29A2C *unk_04; } S_arg0_29A2C;

typedef struct S_out_29A2C {
    u8 unk_00[4];
    s32 unk_04[16];
    u8 unk_44[4];
    s32 unk_48[16];
    s32 unk_88;
    u8 unk_8C[4];
    s32 unk_90[16];
    s32 unk_D0;
    s32 unk_D4[0x100];
    u8 unk_4D4[0x100];
} S_out_29A2C;

void func_8002FC30_ovl_01(void *arg0, s32 arg1, s32 arg2);

void func_80029A2C_ovl_01(S_arg0_29A2C *arg0, u8 *arg1, S_out_29A2C **arg2) {
    u8 sp10[0x108];
    s32 sp118[0x102];
    S_out_29A2C *out;
    s32 i;
    s32 j;
    s32 a0;
    s32 a1;
    
    s32 a3;
    s32 *p118;
    u8 *p10;

    if (*arg2 == NULL) {
        *arg2 = (S_out_29A2C *)arg0->unk_04->unk_00(arg0, 1, 0x5D4);
    }
    out = *arg2;
    out->unk_D0 = (s32)arg1;
    i = 0;
    {
        u8 *p;
        p = arg1 + 1;
        for (j = 1; j < 0x11; j++, p++) {
            a3 = 1;
            if (*p != 0) {
                do {
                    sp10[i] = j;
                    i++;
                } while (*p >= ++a3);
            }
        }
    }
    p10 = sp10;
    p10[i] = 0;
    a1 = 0;
    a0 = p10[0];
    if (a0 != 0) {
        p118 = sp118;
        i = a1;
        do {
            if (p10[i] == a0) {
                s32 *q;
                q = &p118[i];
                do {
                    *q++ = a1;
                    i++;
                    a1++;
                } while (p10[i] == a0);
            }
            a1 <<= 1;
            a0++;
        } while (p10[i] != 0);
    }
    i = 0;
    for (j = 1; j < 0x11; j++) {
        if (arg1[j] != 0) {
            ((s32 *)out)[j + 0x23] = i;
            ((s32 *)out)[j] = sp118[i];
            i += arg1[j];
            a0 = i - 1;
            ((s32 *)out)[j + 0x11] = sp118[a0];
        } else {
            ((s32 *)out)[j + 0x11] = -1;
        }
    }
    out->unk_88 = 0xFFFFF;
    func_8002FC30_ovl_01(out->unk_D4, 0, 0x400);
    i = 0;
    {
        s32 n;
        s32 *base;
        base = sp118;
        j = 1;
        n = j;
        for (; j < 9; j++) {
            a3 = 1;
            if (arg1[j] != 0) {
                s32 t4;
                s32 *t2;
                t4 = 8 - j;
                t2 = &base[i];
                do {
                    a1 = n << t4;
                    a0 = *t2 << t4;
                    if (a1 > 0) {
                        do {
                            out->unk_D4[a0] = j;
                            out->unk_4D4[a0] = arg1[i + 0x11];
                            a0++;
                            a1--;
                        } while (a1 > 0);
                    }/*__repair_loop_weight*/do {
                    a3++;} while (0);
                    i++;
                    t2++;
                } while (arg1[j] >= a3);
            }
        }
    }
}
