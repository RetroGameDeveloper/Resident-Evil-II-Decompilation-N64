extern u8 D_800E8AFC_ovl_01[];
extern u8 D_801170B8_ovl_01[];
s16 func_800844FC_ovl_01(s16 arg0);

void func_80077AB0_ovl_01(u32 arg0)
{
    volatile u8 *base1 = D_801170B8_ovl_01;
    u32 i1 = arg0 >> 24;
    u8 v = *(base1 + i1 - 1);
    volatile u8 *base2 = D_800E8AFC_ovl_01;
    s16 *p = (s16 *)(base2 + v * 2 + ((arg0 >> 15) & 0x1FE));

    *p = func_800844FC_ovl_01((s16)arg0);
}
