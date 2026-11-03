typedef struct Node8000DD70 {
    struct Node8000DD70 *next;
    struct Node8000DD70 *prev;
    s32 unk08;
    s32 unk0C;
    u32 hi;
    u32 lo;
} Node8000DD70;

extern Node8000DD70 *D_80012960;
s32 func_800072E0(void);
void func_80007300(s32);
void func_8000DE30(s32);

s32 func_8000DD70(Node8000DD70 *p)
{
    s32 s1;
    Node8000DD70 *n;

    if (p->next == 0)
        return -1;
    s1 = func_800072E0();
    n = p->next;
    if (n != D_80012960) {
        *(u64 *)&n->hi += *(u64 *)&p->hi;
    }
    p->prev->next = p->next;
    p->next->prev = p->prev;
    p->next = 0;
    p->prev = 0;
    if (D_80012960->next == D_80012960)
        func_8000DE30(0);
    func_80007300(s1);
    return 0;
}
