extern u8 *D_800EBB34_ovl_01;
extern void func_80039AD0_ovl_01(u8 *obj, u8 *p);

void func_80039BD8_ovl_01(void) {
    volatile u8 *p1;
    volatile u8 *p2;
    volatile u8 *p3;
    volatile u8 *p4;
    u16 a;
    u8 b;
    u16 c;
    u16 d;

    p1 = D_800EBB34_ovl_01;
    a = *(volatile u16 *)(p1 + 0x12);
    b = *(volatile u8 *)(p1 + 0x2);
    *(volatile u16 *)(p1 + 0x18) = a;
    c = *(volatile u16 *)(p1 + 0x2A);
    *(volatile u8 *)(p1 + 0x21) = b;
    d = *(volatile u16 *)(p1 + 0x14);
    *(volatile u16 *)(p1 + 0x2A) = c | d;

    p2 = D_800EBB34_ovl_01;
    *(volatile u8 *)(p2 + 0x20) =
        *(volatile u8 *)(*(volatile u8 **)(p2 + 0x70) +
                         *(volatile u8 *)(p2 + 0x21) * 8 + 2);

    p3 = D_800EBB34_ovl_01;
    *(volatile u8 *)(p3 + 0x1F) += *(volatile u8 *)(p3 + 0xB);

    p4 = D_800EBB34_ovl_01;
    func_80039AD0_ovl_01((u8 *)p4,
                         (u8 *)(*(volatile u8 **)(p4 + 0x78) +
                                *(volatile u8 *)(p4 + 0x1F) * 24));
}
