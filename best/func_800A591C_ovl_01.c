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
extern f64 D_800BA668_ovl_01;
extern f32 D_800BA670_ovl_01;

void func_800A58BC_ovl_01(s32 arg0, u16 *arg1) {
    S_entry *e = &D_80143EAC[arg0];

    e->unk20 = arg1[0];
    e->unk22 = arg1[1];
    e->unk24 = (f32)((f64)(f32)arg1[2] * D_800BA668_ovl_01);
    e->unk28 = arg1[3];
}

void func_800A5864_ovl_01(s32 arg0, u8 arg1) {
    S_entry *e = &D_80143EAC[arg0];

    e->unk28 = 0x14;
    if (arg1 != 0) {
        e->unk5C = 3;
        e->unk54.i = 0;
        e->unk50 = 0;
        e->unk48 = 0x14;
        e->unk58.f = e->unk4C.f;
    }
}

void func_800A591C_ovl_01(u16 arg0) {
    S_entry *e = &D_80143EAC[arg0];
    u16 t = e->unk20;

    e->unk5C = 0;
    e->unk50 = 0;
    e->unk58.i = 0;
    e->unk4C.i = 0;
    e->unk54.f = D_800BA670_ovl_01;
    e->unk00 = 1;
    e->unk48 = t;
}

s32 func_800A5830_ovl_01(s32 arg0) {
    S_entry *e = &D_80143EAC[arg0];

    return e->unk00 != 0;
}
