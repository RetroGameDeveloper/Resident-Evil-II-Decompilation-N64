typedef struct S_node_b {
    struct S_node_b *next;
    struct S_node_b *prev;
} S_node_b;

extern u32 D_80134494_ovl_01;
extern u8 D_8013447C_ovl_01[];

extern u8 D_8013BC30;
extern void *D_8013BC20;
extern u8 D_8013A420;
extern s32 D_80143BFC;

extern S_node_b *D_80143F34;
extern S_node_b *D_80143F38;
extern S_node_b *D_80143F3C;

typedef struct S_xy {
    s32 x;
    s32 y;
} S_xy;

extern S_xy D_801342B8_ovl_01;
extern s32 D_801343C0_ovl_01;
extern u8 D_80134408_ovl_01[];
extern u32 D_80134494_ovl_01;

s32 func_8000CB60(void *arg0, s32 arg1, s32 arg2);
void func_8000EFA0(void *arg0, s32 arg1, s32 arg2);
s32 func_8006C074_ovl_01(void *arg0, s32 arg1);

void func_8009F7D4_ovl_01(void) {
    switch (D_80134494_ovl_01) {
    case 1:
        func_8000CB60(D_8013447C_ovl_01, 0, 0);
        /* fallthrough */
    case 2:
    case 4:
        D_80134494_ovl_01 = 0;
        return;
    }
}

#define FIELD(expr, type, off) (*(type *)((u8 *)(expr) + (off)))

void func_800A1E6C_ovl_01(void) {
    void *var_a0_2;
    u8 *var_v1;
    u8 *var_v1_2;
    s32 var_a1;
    u32 var_a0;

    var_a0 = 0;
    var_v1 = &D_8013BC30;
    do {
        FIELD(var_v1, u8, 0xFC0) = 0;
        FIELD(var_v1, u8, 0xFC1) = 1;
        var_a0 += 1;
        var_v1 += 0xFF8;
    } while (var_a0 < 8U);
    var_a0_2 = NULL;
    D_8013BC20 = &D_8013A420;
    var_a1 = 0;
    var_v1_2 = &D_8013A420;
    do {
        FIELD(var_v1_2, void *, 4) = var_a0_2;
        if (var_a0_2 != NULL) {
            *(void **)var_a0_2 = var_v1_2;
        }
        var_a0_2 = var_v1_2;
        var_a1 += 1;
        var_v1_2 = (u8 *)var_a0_2 + 0x18;
    } while (var_a1 < 0x100);
    FIELD(var_a0_2, s32, 0) = 0;
    D_80143BFC = 0;
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

void func_8009EE80_ovl_01(s32 arg0, s32 arg1) {
    D_801342B8_ovl_01.x = (arg0 + D_801343C0_ovl_01) & 0x0FFFFFFF;
    D_801342B8_ovl_01.y = (arg1 + D_801343C0_ovl_01) & 0x0FFFFFFF;
    func_8000EFA0(&D_801342B8_ovl_01, 0x80, D_801343C0_ovl_01);
    D_80134494_ovl_01 = 4;
    func_8006C074_ovl_01(D_80134408_ovl_01, 0);
}
