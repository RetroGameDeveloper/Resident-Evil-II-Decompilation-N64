typedef struct {
    u8 b[12];
} Blob12;

extern Blob12 D_8017DD74_ovl_05;
extern Blob12 D_8017DD80_ovl_05;
extern u8 D_8017DDAC_ovl_05[];
extern u8 D_8017E55C_ovl_05[];
extern u8 D_8017E4DC_ovl_05[];
extern u8 *D_8017E558_ovl_05;
extern u8 D_800DF650_ovl_01[];

extern void func_80043650_ovl_01(void);
extern s32 func_8004500C_ovl_01(s32, void *, s32, s16);

void func_8017D920_overlay_005(void) {
    Blob12 sp10;
    Blob12 sp20;
    s32 i;
    u8 *a0;
    u8 *bb;
    u8 *a1;
    u16 ca;
    u16 cb;
    u8 c2;
    u8 c1;

    sp10 = D_8017DD74_ovl_05;
    sp20 = D_8017DD80_ovl_05;
    func_80043650_ovl_01();
    i = 6;
    while (i-- != 0) {
        a0 = D_8017E55C_ovl_05 + i;
        if (*a0 == 0xFF) {
            i -= 2;
        } else {
            bb = D_8017DDAC_ovl_05 + (*a0) * 4;
            ca = *(u16 *)((u8 *)&sp10 + i * 2) + bb[2];
            cb = *(u16 *)((u8 *)&sp20 + i * 2) + bb[3];
            c2 = bb[0] + bb[2];
            c1 = bb[1] + bb[3];
            a1 = D_8017E558_ovl_05;
            *(u32 *)(a1 + 0x00) = 0x2C58A058;
            *(u16 *)(a1 + 0x04) = *(u16 *)((u8 *)&sp10 + i * 2);
            *(u16 *)(a1 + 0x06) = *(u16 *)((u8 *)&sp20 + i * 2);
            *(u8 *)(a1 + 0x08) = bb[0];
            *(u8 *)(a1 + 0x09) = bb[1];
            *(u16 *)(a1 + 0x0A) = 0;
            *(u16 *)(a1 + 0x0C) = ca;
            *(u16 *)(a1 + 0x0E) = *(u16 *)((u8 *)&sp20 + i * 2);
            *(u8 *)(a1 + 0x10) = c2;
            *(u16 *)(a1 + 0x12) = 0x9E;
            *(u8 *)(a1 + 0x11) = bb[1];
            *(u16 *)(a1 + 0x14) = *(u16 *)((u8 *)&sp10 + i * 2);
            *(u16 *)(a1 + 0x16) = cb;
            *(u8 *)(a1 + 0x18) = bb[0];
            *(u8 *)(a1 + 0x19) = c1;
            *(u16 *)(a1 + 0x1A) = 0;
            *(u16 *)(a1 + 0x1C) = ca;
            *(u16 *)(a1 + 0x1E) = cb;
            *(u8 *)(a1 + 0x20) = c2;
            *(u8 *)(a1 + 0x21) = c1;
            *(u8 *)(a1 + 0x03) = 0;
            *(u32 *)(a1 + 0x24) = (u32)D_8017E4DC_ovl_05;
            *(s32 *)(D_800DF650_ovl_01 + 0x204) = func_8004500C_ovl_01(*(s32 *)(D_800DF650_ovl_01 + 0x204), a1, 0, (s16)ca);
            D_8017E558_ovl_05 = D_8017E558_ovl_05 + 0x28;
        }
    }
}
