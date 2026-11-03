typedef struct Node { struct Node *next; struct Node *prev; u8 pad8[2]; u16 unkA; u8 padC[0x28]; s32 unk34; } Node;
extern Node *D_80148B74; extern u8 D_801362B0_ovl_01;
void func_800AAE48_ovl_01(void) {
 Node *s0 = D_80148B74; Node *s1; Node *s3; volatile u8 *s4 = &D_801362B0_ovl_01; s32 s2 = -1;
 if (s0 != 0) {
   do {
    s1 = s0->next;
    if (*s4 == 0) { s0 = s1; continue; }
    func_800A5618_ovl_01();
    if (s0->next != 0) s0->next->prev = s0->prev;
    if (s0->prev != 0) s0->prev->next = s0->next;
    else D_80148B74 = s0->next;
    *(u32 *)((u8*)s0 + 8) = *(u16 *)((u8*)s0 + 10);
    if (s0->unk34 != s2) func_800A81E8_ovl_01();
    func_800A5660_ovl_01();
    s0 = s1;
   } while (s0 != 0);
 }
}
