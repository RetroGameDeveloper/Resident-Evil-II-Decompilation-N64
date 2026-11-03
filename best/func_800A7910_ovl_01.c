s32 func_800AF074_ovl_01(void);
void func_800AC5B4_ovl_01(s32, s32, u8, s32);

typedef struct {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad14[0x24 - 0x14];
    s32 unk24;
    u8 pad28[0x4B - 0x28];
    u8 unk4B;
    u8 pad4C[0x55 - 0x4C];
    u8 unk55;
    u8 pad56[0x60 - 0x56];
    s32 unk60;
    u8 pad64[0x1A0 - 0x64];
} T_801443E8;

extern T_801443E8 D_801443E8[];

s32 func_800A7910_ovl_01(s32 arg0, s32 arg1) {
    s32 res = -1;
    s32 id;
    s32 cur;
    T_801443E8 *p;
    u32 hi;
    u32 lo;

    id = func_800AF074_ovl_01();
    if (id != -1) {
        hi = (arg1 & 0xFFFF) >> 7;
        lo = arg1 & 0x7F;
        do {
            cur = id & 0xFF;
            p = &D_801443E8[cur];
            if (p->unk60 != id) {
                return res;
            }
            if (p->unk24 & 2) {
                res = cur;
                func_800AC5B4_ovl_01(0x80, cur, p->unk55, hi & 0xFF);
                func_800AC5B4_ovl_01(0x81, cur, p->unk55, lo & 0xFF);
            } else {
                res = cur;
                func_800AC5B4_ovl_01(0x80, cur, p->unk4B, hi & 0xFF);
                func_800AC5B4_ovl_01(0x81, cur, p->unk4B, lo & 0xFF);
            }
            id = D_801443E8[cur].unk10;
            res = 0;
        } while (id != -1);
    }
    return res;
}
