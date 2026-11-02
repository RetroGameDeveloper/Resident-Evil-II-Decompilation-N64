typedef struct S_800EBB34 { u8 unk_00[4]; u16 unk_04; } S_800EBB34;
extern S_800EBB34 *D_800EBB34_ovl_01;

void func_8003AF28(void) {
    D_800EBB34_ovl_01->unk_04 += 0x100;
}
