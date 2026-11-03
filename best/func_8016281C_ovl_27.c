typedef struct S_func_8016281C_ovl_27_arg0 {
    u8 pad_00[4];
    union {
        s32 unk_04;
        struct { u16 pad_04h; u8 unk_06; u8 unk_07; } b;
    } u04;
    u8 pad_08[0x1F2 - 0x08];
    s16 unk_1F2;
    u8 pad_1F4[0x270 - 0x1F4];
    s16 unk_270;
    u8 pad_272[0x2C9 - 0x272];
    u8 unk_2C9;
    u8 unk_2CA;
} S_func_8016281C_ovl_27_arg0;

void func_801628B0_ovl_27(void);
void func_80162994_ovl_27(void *);
extern u8 D_800C7650_ovl_01;

void func_8016281C_ovl_27(S_func_8016281C_ovl_27_arg0 *arg0) {
    u8 v6, v7;
    s32 flag;
    if (arg0->u04.b.unk_06 == 0) {
        func_801628B0_ovl_27();
    } else {
        func_80162994_ovl_27(arg0);
    }
    v6 = arg0->u04.b.unk_06;
    v7 = arg0->u04.b.unk_07;
    arg0->unk_2C9 = v6;
    arg0->unk_2CA = v7;
    if (arg0->unk_270 == 1) {
        flag = 1;
    } else {
        union { u64 q; struct { u32 lo; u32 hi; } w; } base;
        u8 *p;
        base.q = (u64)(u32)&D_800C7650_ovl_01;
        p = (u8 *)(base.w.lo + 0x18000);
        flag = *(u16 *)(p + 0x1A78) & 0x10;
    }
    if (flag) {
        arg0->unk_1F2 = -1;
        arg0->u04.unk_04 = 0x030A0000;
    }
}
