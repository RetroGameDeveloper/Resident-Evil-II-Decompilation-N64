extern u8 *D_800EBB34_ovl_01;
extern u8 D_800C7650_ovl_01[];
extern s32 func_80033634_ovl_01(u8 *arg0);
extern void func_8003AA6C_ovl_01(void);

void func_8003AE30(void)
{
int __repair_literal;

    u8 **pp;
    u8 *o;
    u8 *base;
    u32 v;

    pp = &D_800EBB34_ovl_01;
    base = D_800C7650_ovl_01 + 0x18000;
    o = *pp;
    o[0x1B] = base[0x1C2B] - 9;
    o = *pp;
    o[0] = 0x16;
    o = *pp;
    o[1] = 0xF;
    o = *pp;
    *(u16 *)(o + 0x18) = 0xB403;
    o[0x21] = 0x12;
    *(u16 *)(o + 0x2A) |= 0x20;
    o = *pp;
__repair_literal = 8;

    o[0x20] = *(u8 *)(*(s32 *)(o + 0x70) + o[0x21] * __repair_literal + 2);
    if ((*(u16 *)(base + 0x1C2A) & 0x1F) == 9) {
        v = func_80033634_ovl_01(o) & 0xFF;
        o = *pp;
        o[0xB] = v % 3 + 0xA;
    } else {
        o = *pp;
        o[0xB] = 0xF;
    }
    func_8003AA6C_ovl_01();
}
