void func_8002844C_ovl_01(void *arg0) {
    void *obj;
    void *result;
    obj = *(void **)((u8 *)arg0 + 4);
    { void *fn = *(void **)obj; result = ((void *(*)(void *, s32, s32))fn)(arg0, 0, 0x118); }
    *(s32 *)((u8 *)result + 0x114) = 0;
}
extern u8 D_80129E30_ovl_01;
extern s32 D_8010B660_ovl_01[];
s32 func_8004D168_ovl_01(s32 arg0, s32 arg1) {
    if ((u32)arg1 < 5) {
        if (((D_80129E30_ovl_01 >> arg1) & 1) != 0)
            return D_8010B660_ovl_01[arg1];
    }
    return 0;
}
extern s32 D_800C7650_ovl_01[];
extern s32 *D_800E1388_ovl_01[];
void func_8004DA70_ovl_01(void *);
s32 func_8004D3D0_ovl_01(void *, void *);
void func_8004DB8C_ovl_01(void *arg0) {
    s32 **p;
    s32 *end;
    void *base;
    func_8004DA70_ovl_01((u8 *)arg0 + 0x28);
    *((u8 *)arg0 + 0xD) = 0xFF;
    base = (u8 *)D_800C7650_ovl_01 + 0x18000;
    end = *(s32 **)((u8 *)base + 0x28C);
    p = D_800E1388_ovl_01;
    if (p != (s32 **)end) {
        do {
            s32 *entry = *p;
            if (arg0 != entry) {
                if (*entry & 1)
                    func_8004D3D0_ovl_01(entry, arg0);
            }
            p++;
        } while (p != (s32 **)end);
    }
}
void func_8004DC28_ovl_01(void *arg0) {
    s32 **p;
    s32 *end;
    void *base;
    s32 mask = 0x8000;
    s32 result = 0;
    func_8004DA70_ovl_01((u8 *)arg0 + 0x28);
    *((u8 *)arg0 + 0xD) = 0xFF;
    base = (u8 *)D_800C7650_ovl_01 + 0x18000;
    end = *(s32 **)((u8 *)base + 0x1028C);
    p = D_800E1388_ovl_01;
    if (p != (s32 **)end) {
        do {
            s32 *entry = *p;
            if (arg0 != entry) {
                if (*entry & 1) {
                    if (func_8004D3D0_ovl_01(entry, arg0))
                        result |= mask;
                }
            }
            p++;
            mask >>= 1;
        } while (p != (s32 **)end);
    }
    *(s16 *)((u8 *)arg0 + 0xE) = result;
}
