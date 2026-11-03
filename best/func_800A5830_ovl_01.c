typedef struct S_entry S_entry;
struct S_entry {
    u8 unk00;
    u8 pad01[0x1F];
    u16 unk20;
    u16 unk22;
    f32 unk24;
    u16 unk28;
    u8 pad2A[0x1E];
    u16 unk48;
    u8 pad4A[2];
    union { f32 f; s32 i; } unk4C;
    s32 unk50;
    union { f32 f; s32 i; } unk54;
    union { f32 f; s32 i; } unk58;
    u8 unk5C;
    u8 pad5D[0xB];
};

extern S_entry *D_80143EAC;

s32 func_800A5830_ovl_01(s32 arg0) {
    s32 base = (s32)D_80143EAC;
    S_entry *e = (S_entry *)(arg0 * 0x68 + base);
    u8 v = e->unk00;

    return v != 0;
}
