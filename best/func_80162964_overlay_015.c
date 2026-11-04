typedef struct { u8 b[0x2D0]; } Obj62964;
typedef struct { u8 b[0x1D00]; } Glob62964;
typedef struct { u8 b[0x14]; } Tex62964;
extern Glob62964 D_800C7650_ovl_01;
extern u8 D_800E9127_ovl_01;
extern u8 D_800E10D6_ovl_01;
extern Tex62964 D_800E8E58_ovl_01;
extern s32 func_800837DC_ovl_01(Tex62964 *, s32);
extern s32 func_80083C44_ovl_01(s32);
extern void func_8003334C_ovl_01(Obj62964 *, void *, void *, s32);
extern s32 func_80036BB4(Obj62964 *, s32, s32, s32);
extern s32 func_800331E8_ovl_01_44(void *, void *, void *, s32);
void func_80162964_overlay_015(Obj62964 *arg0, void *arg1, void *arg2) {
    s32 state;
    s32 *g;
    state = arg0->b[6];
    if (state == 1) goto state1;
    if (state >= 2) {
        if (state == 2) goto state2;
        if (state == 3) goto state3;
        goto done;
    }
    if (state != 0) goto done;
    g = (s32 *)((u8 *)&D_800C7650_ovl_01 + 0x18000);
    g[0x1A5C/4] |= 0x100;
    if ((g[0x1A5C/4] & 0x40000000) && func_800837DC_ovl_01(&D_800E8E58_ovl_01, 0x10))
        func_80083C44_ovl_01(0xE);
    else
        func_80083C44_ovl_01(7);
    D_800E9127_ovl_01 = 1;
    g[0x25B0/4] = 0;
    *(u16 *)(D_800E10D6_ovl_01) = 0;
    *(u16 *)(arg0->b + 0x2B4) |= 2;
    *((u8 *)g + 0x1A84) = 5;
    *((u8 *)g + 0x1A85) = 0;
    *(s16 *)((u8 *)g + 0x1C72) = -1;
    *(s32 *)(arg0->b + 0x28) = -0x5A26;
    *(u16 *)(arg0->b + 0x2C6) = 0;
    *(u16 *)(arg0->b + 0x2C4) = 0;
    arg0->b[0x2C0] = 0;
    *(u16 *)(arg0->b + 0x2B4) &= 0xFFFB;
    *(Obj62964 **)((u8 *)g + 0x1CD0) = arg0;
    *(s32 *)((u8 *)g + 0x1AB0) = -0x393;
    *(s32 *)((u8 *)g + 0x1AA8) = *(s32 *)(arg0->b + 0x28) + 0x2993;
    *(s32 *)((u8 *)g + 0x1CA4) = *(s32 *)(arg0->b + 0x224);
    *(s32 *)((u8 *)g + 0x1CA8) = *(s32 *)(arg0->b + 0x228);
    *(s32 *)arg0->b |= 0x100A;
    *(s32 *)((u8 *)g + 0x1A80) |= 0x1008;
    *((u8 *)g + 0x1CEF) |= 0x80;
    arg0->b[6]++;
state1:
    func_80036764_ovl_01_510_24(arg0, 4, 0, 0);
    if (*(u8 *)(arg0->b + 0x1E9) == 0xD) {
        g = (s32 *)((u8 *)&D_800C7650_ovl_01 + 0x18000);
        *(s32 *)((u8 *)&D_800E10D6_ovl_01 - 6) = *(s32 *)((u8 *)&D_800E10D6_ovl_01 - 6);
        *((s32 *)((u8 *)g + 0x1A3C)) |= 0x04000100;
        func_800331E8_ovl_01_44((u8 *)&D_800E10D6_ovl_01 - 6, arg1, arg2, 0);
        arg0->b[6]++;
        *(u16 *)((u8 *)g + 0x1C74) = 1;
        *(u16 *)((u8 *)g + 0x1AE6) = *(u16 *)(arg0->b + 0x66);
    }
    goto done;
state2:
    func_8003334C_ovl_01(arg0, arg1, arg2, 0);
    if (func_80036764_ovl_01_510_24(arg0, 5, 0, 0)) {
        g = (s32 *)((u8 *)&D_800C7650_ovl_01 + 0x18000);
        *((s32 *)((u8 *)g + 0x1A80)) |= 0x80000;
        arg0->b[6]++;
    }
    goto done;
state3:
    func_8003334C_ovl_01(arg0, arg1, arg2, 0);
    func_80036BB4(arg0, 0xB, 0, 0);
done:
    return;
}
