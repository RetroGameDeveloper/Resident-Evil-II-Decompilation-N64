void func_80165AB8_ovl_12(void);
s32 func_80033634_ovl_01(void);
void func_80166900_ovl_12(void *, s32, s32);

void func_80166100_ovl_12(void *arg0) {
    func_80165AB8_ovl_12();
    if (*(u8 *)((u8 *)arg0 + 0x26E) < 3) {
        u32 i = 0;
        u32 val = 0x3F2F;
        s32 off = i;
        do {
            i++;
            *(u32 *)(*(u8 **)((u8 *)arg0 + 0x234) + off + 0x60) = val;
            off += 0x178;
        } while (i < 0x11);
        *(u8 *)((u8 *)arg0 + 0x2BB) = 2;
        func_80166900_ovl_12(arg0, func_80033634_ovl_01() & 7, 9);
        func_80166900_ovl_12(arg0, (func_80033634_ovl_01() & 7) | 8, 0xA);
    }
}
