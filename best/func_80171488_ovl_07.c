typedef struct S_1C34_07 { s32 unk_00; s32 unk_04; s32 unk_08; } S_1C34_07;
typedef struct S_blob32_07 { s32 w[8]; } S_blob32_07;

extern u8 D_800C5694_ovl_01;
extern u8 D_800C7650_ovl_01[];
extern void *D_8010B680_ovl_01;
extern void *D_8010B684_ovl_01;
extern s32 D_80113778_ovl_01;
extern s32 D_8011377C_ovl_01;
extern S_1C34_07 D_80171C34_ovl_07[];
extern s32 D_801722C8_ovl_07;
extern u8 D_801722CC_ovl_07;
extern s32 D_800241E0(s32);

void func_8002751C_ovl_01(s32, s32);
void func_8004CDB8_ovl_01(s32);
s32 func_80171204_ovl_07(void **, void *);
s32 func_80171268_ovl_07(void **, void *);
s32 func_801712D4_ovl_07(void **);
s32 func_801712F8_ovl_07(u32);
void func_80171428_ovl_07(u32);

void func_80171488_ovl_07(void) {
    void *sp10;
    u32 i;
    u32 total;
    u32 j;
    u32 n;
    u8 flag;
    void *src;
    void *dst;
    S_1C34_07 *p;
    S_blob32_07 *bp;
    S_blob32_07 *bq;
    s32 r;
    u8 *base;
    u8 *g5694;
    void **gB680;
    void **gB684;
    s32 *g13778;
    s32 *g1377C;
    u8 *g22CC;

    D_801722C8_ovl_07 = -1;
    func_8002751C_ovl_01(1, 0);
    total = 0;
    i = 0;
    p = D_80171C34_ovl_07;
    do {
        total += p->unk_04;
        i++;
        p++;
    } while (i < 9);
    g5694 = &D_800C5694_ovl_01;
    gB680 = &D_8010B680_ovl_01;
    gB684 = &D_8010B684_ovl_01;
    g13778 = &D_80113778_ovl_01;
    g1377C = &D_8011377C_ovl_01;
    g22CC = &D_801722CC_ovl_07;
    i = 0;
loop:
    if (i >= total) {
        goto end;
    }
    flag = *g5694;
    if (flag == 0) {
        src = *gB680;
    } else {
        src = *gB684;
    }
    if (flag == 0) {
        dst = *gB684;
    } else {
        dst = *gB680;
    }
    n = ((u32)((*g1377C - 1) * *g13778)) >> 2;
    bp = (S_blob32_07 *)((u8 *)src + *g13778 * 2);
    bq = (S_blob32_07 *)dst;
    for (j = 0; j < n; j += 4) {
        *bq = *bp;
        bp++;
        bq++;
    }
    sp10 = (u8 *)dst + ((*g13778 * *g1377C - *g13778) * 2);
    r = func_801712F8_ovl_07(i);
    switch (r) {
    case 0:
        func_80171204_ovl_07(&sp10, g22CC);
        break;
    case 1:
        func_80171268_ovl_07(&sp10, g22CC);
        break;
    case 2:
        func_801712D4_ovl_07(&sp10);
        break;
    }
    func_8004CDB8_ovl_01(1);
    func_80171428_ovl_07(i);
    i++;
    goto loop;
end:
    base = D_800C7650_ovl_01 + 0x18000;
    *(s32 *)(base + 0x200) = D_800241E0(*(s32 *)(base + 0x200));
    func_8004CDB8_ovl_01(1);
}
