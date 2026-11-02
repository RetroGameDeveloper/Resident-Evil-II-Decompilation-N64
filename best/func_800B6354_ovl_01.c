/* func_800B47AC_ovl_01 */
extern s32 D_80143F74;

void func_800B47AC_ovl_01(void) {
    D_80143F74 = 0;
}

/* func_800B4CD0_ovl_01 */
typedef struct {
    u8 pad0[0x11A8];
    s32 unk11A8;
    u8 pad1[0x28];
    u32 unk11D4;
    u32 unk11D8;
    u8 pad2[1];
    u8 unk11DD;
} S4CD0;

u32 func_800B4CD0_ovl_01(S4CD0 *arg0, u32 arg1) {
    s32 tmp;
    u32 v1;

    if (arg0->unk11DD == 3) {
        tmp = arg0->unk11A8;
        if (tmp > 0) {
            tmp -= arg1;
            arg0->unk11A8 = tmp;
            if (tmp <= 0) {
                arg0->unk11DD = 4;
                arg0->unk11A8 = 0;
            }
        }
        v1 = arg0->unk11D8 - arg0->unk11D4;
        if (arg1 < v1) {
            v1 = arg1;
        }
        arg0->unk11D4 += v1;
        return v1;
    }
    return 0;
}

/* func_800B6354_ovl_01 */
typedef struct {
    s16 unk0;
    u8 pad0[0x4E];
    u16 unk50;
    u8 pad1[0x9E];
    s16 unkF0;
    u8 pad2[0x74];
    s16 unk166;
} S6354;

extern u16 func_800B6408_ovl_01[];

void func_800B6354_ovl_01(S6354 *arg0, s16 arg1, s32 arg2, s16 *arg3) {
    s16 t3;
    u16 scale;
    s32 i;
    S6354 *p;
    S6354 *src;

    t3 = arg0->unk166;
    if (arg1 >= 0x28 && arg1 <= 0x78) {
        t3 = arg1;
    }
    arg0->unk166 = t3;

    scale = func_800B6408_ovl_01[arg2];

    p = arg0;
    for (i = 0x77; i >= 0; i--) {
        p->unk0 = p->unk50;
        p = (S6354 *)((u8 *)p + 2);
    }

    p = arg0;
    src = (S6354 *)((u8 *)arg0 - t3 * 2);
    for (i = 0x27; i > 0; i--) {
        p->unkF0 = (s16)(((src->unkF0 * scale) + 0x4000) >> 15) + *arg3;
        arg3++;
        p = (S6354 *)((u8 *)p + 2);
        src = (S6354 *)((u8 *)src + 2);
    }
}
