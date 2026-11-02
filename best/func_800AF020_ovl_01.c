typedef struct Node { struct Node *next; struct Node *prev; u8 pad[8]; } Node;
extern s32 D_801581C0;
extern s32 D_801583D0;
extern Node *D_801583D4;
extern Node D_801581D0[];

void func_800AF020_ovl_01(void) {
    Node *prev;
    Node *cur;
    s32 i;
    prev = NULL;
    cur = D_801581D0;
    i = 0;
    D_801581C0 = 0;
    D_801583D0 = 0;
    D_801583D4 = cur;
    do {
        cur->prev = prev;
        if (prev != NULL) {
            prev->next = cur;
        }
        prev = cur;
        i++;
        cur = prev + 1;
    } while (i < 0x20);
    prev->next = NULL;
}

typedef struct LNode { struct LNode *next; u8 pad[4]; u32 key; s32 val; } LNode;

s32 func_800AF074_ovl_01(u32 arg0) {
    LNode *p;
    if (arg0 == 0xFFFFFFFF) {
        return -1;
    }
    p = (LNode *)D_801583D0;
    while (p != NULL) {
        if (p->key == arg0) {
            return p->val;
        }
        if (arg0 < p->key) {
            break;
        }
        p = p->next;
    }
    return -1;
}

extern u8 D_801443E8[];
extern s32 func_800AE654_ovl_01(s32, s32, s32, s32);
extern s32 func_800AE140_ovl_01(void *);
extern s32 func_800A5830_ovl_01(s32);
extern void func_800A5A6C_ovl_01(s32);
extern void func_800AE478_ovl_01(void *, s32);

s32 func_800AED60_ovl_01(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0;
    u8 *temp_s1;
    temp_s2 = arg0 & 0xFF;
    temp_v0 = func_800AE654_ovl_01(temp_s2, 0xFF, 0xFFFF, 1);
    if (temp_v0 != -1) {
        temp_s1 = (u8 *)D_801443E8 + temp_v0 * 0x1A0;
        *(s8 *)(temp_s1 + 0xBD) = 1;
        *(s8 *)(temp_s1 + 0x4C) = 1;
        func_800AE140_ovl_01(temp_s1);
        *(s32 *)(temp_s1 + 0x60) = temp_v0 | ~0xFF;
        if (func_800A5830_ovl_01(temp_v0) & 0xFF) {
            func_800A5A6C_ovl_01(temp_v0);
        }
        *(s32 *)temp_s1 = 0;
        func_800AE478_ovl_01(temp_s1, temp_s2);
    }
    return temp_v0;
}
