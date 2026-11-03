typedef struct S_80165874_q {
    u8 pad[4];
    u16 unk_4;
    u16 unk_6;
} S_80165874_q;
typedef struct S_80165874_arg0 {
    u8 pad0[0x207];
    u8 unk_207;
    S_80165874_q *unk_208;
    u8 pad2[0x2CD - 0x20C];
    u8 unk_2CD;
} S_80165874_arg0;

extern void func_8003420C_ovl_01(void *, u32);

void func_80165874_ovl_35(S_80165874_arg0 *p) {
    u8 one = 1;
    u8 temp;
    S_80165874_q *q;
    s32 state;

    state = p->unk_2CD;
    q = p->unk_208;
    if (state == one)
        goto active;
    if (state >= 2)
        return;
    if (state != 0)
        return;
    p->unk_2CD = one;
    func_8003420C_ovl_01(q, 0xAF4FAF00);
    p->unk_207 = 90;
active:
    q->unk_4 += 10;
    q->unk_6 += 14;
    temp = p->unk_207 - 1;
    p->unk_207 = temp;
    if ((temp << 24) == 0)
        p->unk_2CD = 2;
}
