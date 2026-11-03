typedef struct S_Node {
    struct S_Node *next;
    struct S_Node *prev;
    s32 value;
    s32 id;
    u16 state;
} S_Node;

typedef struct S_Ent {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} S_Ent;

extern S_Node *D_80143F24;
extern S_Node *D_80143F28;
extern u16 D_80143F6C;
extern u8 *D_80143F70;
extern u8 *D_80143F7C;
extern S_Ent *D_80143F8C;
extern void *func_80135C50_ovl_01(void *, u8 *);

s32 func_800A3314_ovl_01(s32 arg0) {
    S_Node *node;
    S_Node *n;
    S_Node *old;
    u16 idx;

    node = D_80143F24;
    while (node != NULL) {
        if (node->id == arg0) {
            node->state = 2;
            return node->value;
        }
        node = node->next;
    }
    node = D_80143F28;
    if (node != NULL) {
        n = node->next;
        D_80143F28 = n;
        if (n != NULL) {
            n->prev = NULL;
        }
        if (D_80143F24 != NULL) {
            D_80143F24->prev = node;
        }
        old = D_80143F24;
        D_80143F24 = node;
        node->next = old;
    } else {
        node = D_80143F24;
        while (node != NULL && node->state != 0) {
            node = node->next;
        }
    }
    node->state = 2;
    node->id = arg0;
    D_80143F70 += 0xC;
    D_80143F7C = func_80135C50_ovl_01(D_80143F7C, D_80143F70);
    idx = D_80143F6C;
    D_80143F8C[idx].unk4 = arg0;
    D_80143F8C[idx].unk0 = 0x100;
    D_80143F6C = idx + 1;
    D_80143F8C[idx].unk8 = node->value;
    return node->value;
}
