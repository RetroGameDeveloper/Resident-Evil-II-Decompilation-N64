typedef struct S_node_a {
    struct S_node_a *next;
    struct S_node_a *prev;
    u8 pad[0x10];
} S_node_a;

typedef struct S_node_b {
    struct S_node_b *next;
    struct S_node_b *prev;
} S_node_b;

extern u8 D_8013BC30[];
extern S_node_a *D_8013BC20;
extern S_node_a D_8013A420[];
extern s32 D_80143BFC;

extern u8 D_801362B0_ovl_01;

extern S_node_b *D_80143F34;
extern S_node_b *D_80143F38;
extern S_node_b *D_80143F3C;

extern s32 D_80134494_ovl_01;
extern u8 D_8013447C_ovl_01[];

s32 func_8000CB60(void *arg0, s32 arg1, s32 arg2);

void func_800A1E6C_ovl_01(void) {
    u8 *p;
    S_node_a *prev;
    S_node_a *cur;
    s32 i;

    p = D_8013BC30;
    for (i = 0; i < 8; i++) {
        p[0xFC0] = 0;
        p[0xFC1] = 1;
        p += 0xFF8;
    }
    D_8013BC20 = D_8013A420;
    prev = NULL;
    cur = D_8013A420;
    for (i = 0; i < 0x100; i++) {
        if (prev != NULL) {
            cur->prev = prev;
            prev->next = cur;
        }
        prev = cur;
        cur++;
    }
    prev->next = NULL;
    D_80143BFC = 0;
}

s32 func_800A2148_ovl_01(u32 arg0) {
    u32 i;
    u32 v;
    u8 *p;

    if (D_801362B0_ovl_01 == 0)
        return 0;
    i = 0;
    p = D_8013BC30;
    for (;;) {
        if (p[0xFC1] != 0 || ((u32 *)p)[0] != (arg0 & 0x7FFFFFFF)) {
            i++;
            if (i >= 8) {
                v = -1;
                break;
            }
            p += 0xFF8;
        } else {
            v = (arg0 & 0x80000000) | i;
            break;
        }
    }
    return ~v != 0;
}

S_node_b *func_800A3568_ovl_01(void) {
    S_node_b *a3;
    S_node_b *v0;
    S_node_b *a1;

    a3 = D_80143F3C;
    if (a3 == NULL)
        goto L35C8;
    v0 = a3->next;
    if (v0 != NULL) {
        D_80143F3C = v0;
        v0->prev = NULL;
    }
    v0 = D_80143F38;
    if (v0 != NULL) {
        a3->next = NULL;
        a3->prev = v0;
        v0->next = a3;
        D_80143F38 = a3;
        return a3;
    }
    v0 = D_80143F34;
    a3->next = v0;
    if (v0 != NULL)
        v0->prev = a3;
    D_80143F34 = a3;
    D_80143F38 = a3;
    return a3;

L35C8:
    a3 = D_80143F34;
    v0 = D_80143F38;
    a1 = a3->next;
    a1->prev = NULL;
    a3->next = NULL;
    a3->prev = v0;
    v0->next = a3;
    D_80143F38 = a3;
    D_80143F34 = a1;
    return a3;
}

void func_8009F7D4_ovl_01(void) {
    switch (D_80134494_ovl_01) {
    case 1:
        func_8000CB60(D_8013447C_ovl_01, 0, 0);
        /* fallthrough */
    case 2:
    case 4:
        D_80134494_ovl_01 = 0;
        break;
    }
}
