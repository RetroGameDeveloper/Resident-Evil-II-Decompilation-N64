extern u8 D_80028DE0_ovl_01[];
extern u8 D_80028EB4_ovl_01[];
extern u8 D_8002D00C_ovl_01[];
extern u8 D_80028F2C_ovl_01[];

typedef struct S_80028F34_vtbl { u32 (*fn)(void *, s32, s32); } S_80028F34_vtbl;
typedef struct S_80028F34_sub {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} S_80028F34_sub;
typedef struct S_80028F34 {
    u8 unk_00[4];
    S_80028F34_vtbl *unk_04;
    u8 unk_08[0xC];
    S_80028F34_sub *unk_14;
} S_80028F34;

void func_80028DF0_ovl_01(void *);

void func_80028F34_ovl_01(S_80028F34 *arg0, s32 arg1) {
    S_80028F34_sub *p;
    if (arg0->unk_14 == NULL) {
        p = (S_80028F34_sub *)arg0->unk_04->fn(arg0, 0, 0x28);
        arg0->unk_14 = p;
        p->unk_20 = arg0->unk_04->fn(arg0, 0, 0xA000);
    }
    p = arg0->unk_14;
    p->unk_08 = (s32)D_80028DE0_ovl_01;
    p->unk_0C = (s32)func_80028DF0_ovl_01;
    p->unk_10 = (s32)D_80028EB4_ovl_01;
    p->unk_14 = (s32)D_8002D00C_ovl_01;
    p->unk_18 = (s32)D_80028F2C_ovl_01;
    p->unk_1C = arg1;
    p->unk_04 = 0;
    p->unk_00 = 0;
}
