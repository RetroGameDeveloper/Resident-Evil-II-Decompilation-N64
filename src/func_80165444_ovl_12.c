typedef struct S_80165444 {
    u8 pad0[7];
    u8 unk_7;
    u8 pad1[0x66 - 8];
    u16 unk_66;
    u8 pad2[0x1F4 - 0x68];
    s16 unk_1F4;
} S_80165444;

extern s32 func_80033634_ovl_01(void);
extern void func_80032B8C_ovl_01(void *, s32);
extern void func_80164E94_ovl_12(void *, s32, s32);

void func_80165444_ovl_12(S_80165444 *arg0, s32 arg1, s32 arg2) {
    u32 add;
    if (arg0->unk_7 == 0) {
        arg0->unk_7 = 1;
        func_80032B8C_ovl_01(arg0, (arg0->unk_1F4 + ((func_80033634_ovl_01() & 0xFF) * 2)) - 0x100);
        add = 0xFF80;
        arg0->unk_66 = (u16)(arg0->unk_66 + ((func_80033634_ovl_01() & 0xFF) + add));
    }
    func_80164E94_ovl_12(arg0, arg1, arg2);
}
