typedef struct { u8 pad0[4]; volatile u8 unk4; u8 unk5; u8 pad6[0x292]; s32 unk298; } S;
extern void (*volatile D_80166588_ovl_23[])(void);
void func_80164BF0_ovl_23(S *arg0) {
    u32 value = arg0->unk298;
    *(u32 *)&arg0->unk4 = value;
    if (arg0->unk4 == 1) {
        D_80166588_ovl_23[arg0->unk5]();
    } else {
        *(u32 *)&arg0->unk4 = 0x01010000;
    }
}
