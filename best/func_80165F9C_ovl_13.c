typedef struct {
    u8 pad_00[5];
    u8 unk_05;
    u8 pad_06[0x2B7];
    s8 unk_2BD;
    u8 pad_2BE[8];
    u16 unk_2C6;
} S_arg0;

extern u8 D_800C7650_ovl_01[];

void func_80165F9C_ovl_13(S_arg0 *arg0) {
    u16 v;

    if ((arg0->unk_2C6 & 4) && ((u32)(arg0->unk_05 - 0xB) >= 4U)) {
        u32 off = 0x18000;
        u64 b = (u64)(u32)D_800C7650_ovl_01;
        u8 *p = (u8 *)(u32)(b & 0xFFFFFFFF);
        p = (u8 *)((u32)p + off);
        *(u16 *)(p + 0x1A78) &= 0xFFFE;
        arg0->unk_2C6 = arg0->unk_2C6 & 0xFFFB;
    }
    v = arg0->unk_2C6;
    if (v & 0x80) {
        arg0->unk_2C6 = v & 0xFF7F;
        arg0->unk_2BD = 0x78;
    }
}
