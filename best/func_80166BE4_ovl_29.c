typedef struct {
    s32 f0;
    u8 pad[0x12C];
    s32 f130;
    s32 f134;
} Rec;

s32 func_80166BE4_ovl_29(u8 *arg0) {
    u8 *v1;
    volatile Rec *r;
    u16 v;

    if (*(u16 *)(arg0 + 0x2B8) & 0x40) {
        return 0;
    }
    v1 = *(u8 **)(arg0 + 0x234);

    r = (volatile Rec *)(v1 + 0x8D0);
    r->f0 |= 0x80;
    r->f130 = 0x40;
    r->f134 = 0x30;

    r = (volatile Rec *)(v1 + 0xA48);
    r->f0 |= 0x80;
    r->f130 = 0x40;
    r->f134 = 0x30;

    r = (volatile Rec *)(v1 + 0xBC0);
    r->f0 |= 0x80;
    r->f130 = 0x40;
    r->f134 = 0x30;

    v = *(u16 *)(arg0 + 0x2B8) | 0x40;
    *(u16 *)(arg0 + 0x2B8) = v;
    return v;
}
