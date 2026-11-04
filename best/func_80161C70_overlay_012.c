extern u8 D_800C7650_ovl_01[];
typedef void (*TickFn)(void *, s32, s32);
extern volatile TickFn D_80166C88_ovl_12[];
void func_8004DB8C_ovl_01(void *);
void func_8004DCE8_ovl_01(void *, s32);
void func_80161C70_overlay_012(void *arg0) {
    u8 *p=(u8 *)arg0;
    if ((*(u32 *)(D_800C7650_ovl_01+0x18000+0x1A60) & 0x20000000)) return;
    {
        u8 x=p[0x26F];
        if (x & 0x7F) p[0x26F]=x-1;
    }
    {
        u8 x=p[0x2CE];
        if (x) p[0x2CE]=x-1;
    }
    D_80166C88_ovl_12[p[4]](arg0,*(s32 *)(p+0x1A4),*(s32 *)(p+0x218));
    func_8004DB8C_ovl_01(arg0);
    func_8004DCE8_ovl_01(arg0,0x400);
    if (*(s32 *)(p+0x28)!=*(s16 *)(p+0x34) || *(s32 *)(p+0x30)!=*(s16 *)(p+0x38)) {
        if (p[0xD]==0xFF) {
            p[0x2CC]=0;
            return;
        }
    }
    p[0x2CC]++;
}
