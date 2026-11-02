
extern u8 D_800C7650_ovl_01;
void func_801636E0_ovl_21(void *arg0, s32 *arg1) {
    if (*((u8 *)&D_800C7650_ovl_01 + 0x21962) & 8) *arg1 |= 0x4A;
    else *arg1 = 0;
    *(u16 *)((u8 *)arg1+0x130) = *(u16 *)((u8 *)arg0+0x66) + 0x800;
    *(s16 *)((u8 *)arg1+0x138)=0;
    *(s16 *)((u8 *)arg1+0x134)=0;
    *(s16 *)((u8 *)arg1+0x132)=-10;
    *(s16 *)((u8 *)arg1+0x136)=0;
    *(s16 *)((u8 *)arg1+0x13C)=0;
}
extern void func_80163664_ovl_21(void *, s32, s32, s32);
void func_801635B8_ovl_21(void *arg0, s32 arg1) {
    switch (arg1) {
    case 1: func_80163664_ovl_21(arg0,0,0x10,0x1000); break;
    case 2: func_80163664_ovl_21(arg0,4,9,0x800); break;
    case 3: func_80163664_ovl_21(arg0,0,0x10,0x1000); break;
    case 4: ((u8 *)arg0)[0x2C4]=7; break;
    case 5: func_80163664_ovl_21(arg0,0,0x10,0x1000); break;
    case 6: func_80163664_ovl_21(arg0,0,0x10,0x1000); break;
    case 7: func_80163664_ovl_21(arg0,5,4,0x1300); break;
    }
}
extern s32 func_80033634_ovl_01(void);
extern u32 D_80163A80_ovl_21;
u32 func_8016350C_ovl_21(void) {
    s32 count=0, bit; u32 mask;
    for (;;) {
        bit=((u32)func_80033634_ovl_01() & 0xFF)>>3;
        mask=1u<<bit;
        if (!(D_80163A80_ovl_21 & mask)) { D_80163A80_ovl_21 |= mask; return bit; }
        count++;
        if (count < 0x20) continue;
        break;
    }
    bit=0; mask=1;
    while (bit < 0x20) {
        if (D_80163A80_ovl_21 & mask) { bit++; mask <<= 1; continue; }
        D_80163A80_ovl_21 |= bit; return bit;
    }
    return 0;
}
extern s32 func_80077B0C_ovl_01(s32, void *);
extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_801633D4_ovl_21(void *arg0) {
    u8 *p=arg0;
    u8 state=p[6];
    if (state == 0) {
        *(s32 *)(p+0x1E8)=0x0F000000;
        func_80077B0C_ovl_01(0x04000001,p+0x28);
        p[6]=state+1;
        state++;
    }
    if (state == 1) func_80089D34_ovl_01(p,*(s32 *)(p+0x22C),*(s32 *)(p+0x230),0x400);
}
