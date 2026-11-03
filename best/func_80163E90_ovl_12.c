extern u8 D_800C7650_ovl_01[];
extern void func_80162120_ovl_12(void);

void func_80163E90_ovl_12(void *arg0)
{
    u8 *p = arg0;
    u64 bb;
    u32 addr;

    func_80162120_ovl_12();
    bb = (u32)D_800C7650_ovl_01;
    addr = (u32)(bb & 0xFFFFFFFF);
    addr += 0x18000;

    if (*(u8 *)(addr + 0x1C22) == p[0x1A2] &&
        (*(u32 *)(p + 0x28C) < 0xFA0 ||
         (*(u16 *)(addr + 0x1A78) & 0x20) ||
         (*(u16 *)(addr + 0x1A7A) & 1))) {
        p[5] = 2;
        *(u16 *)(p + 6) = 0;
    }
}
