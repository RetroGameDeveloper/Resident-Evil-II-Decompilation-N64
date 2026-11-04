typedef void (*Fn)(void *);

extern Fn D_80166D48_ovl_12[];
void func_80163374_ovl_12(void *p) {
    D_80166D48_ovl_12[((u8 *)p)[6]](p);
}

extern void func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_80166458_ovl_12(void *);

void func_80163E14_ovl_12(void *p, s32 a1, s32 a2) {
    u16 v;
    if (((u8 *)p)[6] == 0) {
        ((u8 *)p)[6] = 1;
        *(u16 *)((u8 *)p + 0x1F4) = 0x3C;
        *(s32 *)((u8 *)p + 0x1E8) = 0xF00;
    }
    v = *(u16 *)((u8 *)p + 0x1F4) - 1;
    *(u16 *)((u8 *)p + 0x1F4) = v;
    if ((v << 16) == 0) {
        ((u8 *)p)[5] = 0;
        *(u16 *)((u8 *)p + 6) = 0;
        *(s32 *)((u8 *)p + 0x1E8) = 0x1000F00;
    }
    func_80089D34_ovl_01(p, a1, a2, 0x100);
    func_80166458_ovl_12(p);
}

extern u8 D_800C7650_ovl_01[];
extern void func_80162120_ovl_12(void *);

void func_80163E90_ovl_12(void *p) {
    u8 *q;
    func_80162120_ovl_12(p);
    q = D_800C7650_ovl_01 + 0x18000;
    if (q[0x1C22] == ((u8 *)p)[0x1A2] &&
        (*(u32 *)((u8 *)p + 0x28C) < 0xFA0 ||
         (*(u16 *)(q + 0x1A78) & 0x20) ||
         (*(u16 *)(q + 0x1A7A) & 1))) {
        ((u8 *)p)[5] = 2;
        *(u16 *)((u8 *)p + 6) = 0;
    }
}

extern Fn D_80166D18_ovl_12[];
extern void func_80166AE0_ovl_12(void *);
extern void func_80166B20_ovl_12(void *);

void func_801626C8_ovl_12(void *p, s32 a1, s32 a2) {
    D_80166D18_ovl_12[((u8 *)p)[6]](p);
    func_80089D34_ovl_01(p, a1, a2, 0x100);
    func_80166458_ovl_12(p);
    func_80166AE0_ovl_12(p);
    func_80166B20_ovl_12(p);
}
