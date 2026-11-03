typedef struct S_800AE370_arg0 {
    u8 pad_00[0x2E];
    u8 unk_2E;
    u8 pad_2F[0x34];
    u8 unk_63;
} S_800AE370_arg0;

typedef struct S_800AE370_node {
    u8 prev;
    u8 next;
    u16 state;
} S_800AE370_node;

typedef struct S_800AE370_node2 {
    u16 f0;
    u16 f2;
} S_800AE370_node2;

extern S_800AE370_node D_801587E0_ovl_01[];
extern S_800AE370_node2 D_801583D8_ovl_01[];
extern u8 D_801588E0_ovl_01[];
extern u16 D_801587DA_ovl_01;

void func_800AE370_ovl_01(S_800AE370_arg0 *arg0) {
    S_800AE370_node *base;
    S_800AE370_node2 *base2;
    S_800AE370_node *a1;
    S_800AE370_node2 *a0;
    u8 *tab;

    base = D_801587E0_ovl_01;
    tab = D_801588E0_ovl_01;
    a1 = &base[arg0->unk_63];
    if (a1->state == 1) {
        if (a1->prev != 0xFF) {
            base[a1->prev].next = a1->next;
        } else {
            tab[arg0->unk_2E] = a1->next;
        }
        if (a1->next != 0xFF) {
            base[a1->next].prev = a1->prev;
        } else if (a1->prev == a1->next) {
            base2 = D_801583D8_ovl_01;
            a0 = &base2[arg0->unk_2E];
            if (a0->f2 != 0xFFFF) {
                base2[a0->f2].f0 = a0->f0;
            } else {
                D_801587DA_ovl_01 = a0->f0;
            }
            if (a0->f0 != 0xFFFF) {
                base2[a0->f0].f2 = a0->f2;
            }
        }
        a1->state = 0;
    }
}
