typedef struct Obj {
    u8 pad[0x5A];
    u16 unk5A;
    u8 pad5c[0xD4];
    u16 unk130;
    u16 unk132;
    u16 unk134;
    u8 pad136[2];
    u16 unk138;
    u8 pad13a[2];
    u8 unk13c;
    u8 pad13d[0x234-0x13d];
    void *unk234;
    u8 pad238[0x18];
    void *unk250;
    u8 pad254[4];
    u8 flags;
    u8 index;
} Obj;

typedef struct Top {
    u8 pad[0x234];
    Obj *unk234;
    u8 pad238[0x18];
    Obj *unk250;
    u8 pad254[8];
    u8 flags;
    u8 index;
} Top;

void func_80034A00_ovl_01(Top *arg0, s16 arg1, u16 *arg2) {
    s32 sp10[2];
    s16 sp12;
    s16 sp14;
    s32 sp18[4];
    s16 temp_s4;
    s32 temp_a1_2;
    s32 temp_v1_2;
    u16 temp_a0;
    u16 temp_a0_2;
    u16 temp_a1_3;
    u16 temp_s5;
    u16 var_a2;
    Obj *temp_a1;
    Obj *temp_s0;
    Top *temp_s3;
    Obj *temp_v1;
    if (!(arg0->flags & 1)) {
        temp_s3 = arg0->unk250;
        temp_a1 = arg0->unk234;
        temp_s5 = temp_a1->unk5A;
        temp_s4 = arg1 + temp_s5;
        temp_v1 = (Obj *)((u8 *)temp_s3->unk234 + ((temp_s3->index * 0x178)));
        temp_s0 = (Obj *)((u8 *)temp_a1 + (arg0->index * 0x178));
        sp18[0] = *(s32 *)((u8 *)temp_v1 + 0x4C);
        sp18[1] = *(s32 *)((u8 *)temp_v1 + 0x50);
        sp18[2] = *(s32 *)((u8 *)temp_v1 + 0x54);
        sp18[3] = *(s32 *)((u8 *)temp_v1 + 0x58);
        func_80034C0C_ovl_01((u8 *)temp_s0 + 0x4C, sp18, sp10, temp_s4);
        if (arg0->flags & 2) {
            sp12 = temp_s5 + (arg1 + temp_s0->unk5A);
        }
        if (arg0 == temp_s3) {
            sp14 = 0;
            sp12 = temp_s5 + (arg1 + temp_s0->unk5A);
        }
        var_a2 = temp_s0->unk134;
        temp_a0 = temp_s0->unk138;
        if (arg0->flags & 0x80) var_a2 = temp_s0->unk13c;
        temp_a1_2 = (sp12 - arg1) - (s16)temp_s5;
        if (((s16)temp_a0 * 2) < ((temp_a1_2 + (s16)temp_a0) & 0xFFF)) {
            s16 var_v0 = temp_s4 - temp_a0;
            if (!(temp_a1_2 & 0x800)) var_v0 = temp_a0 + temp_s4;
            sp12 = var_v0;
        }
        temp_a0_2 = temp_s0->unk130;
        temp_a1_3 = temp_a0_2 - var_a2;
        temp_v1_2 = var_a2 + ((u16)sp12 - (temp_a0_2 + (temp_s5 + (arg1 + temp_s0->unk5A))));
        temp_s0->unk130 = temp_a1_3;
        if (!(temp_v1_2 & 0x800)) temp_s0->unk130 = (u16)(temp_a1_3 + (var_a2 * 2));
        if ((temp_v1_2 & 0xFFF) < ((s32)(var_a2 << 16) >> 15))
            temp_s0->unk130 = (u16)((u16)sp12 - (temp_s5 + (arg1 + temp_s0->unk5A)));
        *arg2 = temp_s0->unk130;
    }
}
