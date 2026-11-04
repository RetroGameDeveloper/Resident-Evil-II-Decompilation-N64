typedef struct { u8 b[17]; } S_80167E84;
typedef struct { u8 b[13]; } S_80167E98;

extern S_80167E84 D_80167E84_ovl_20;
extern S_80167E98 D_80167E98_ovl_20;
extern s8 D_80167F40_ovl_20;
extern s8 D_80167F41_ovl_20;
extern u16 D_80167F42_ovl_20;
extern u16 D_80167F44_ovl_20;
extern u16 D_80167F46_ovl_20;
extern u16 D_80167F48_ovl_20;
extern s8 D_80167F4A_ovl_20;
extern s8 D_80167F4B_ovl_20;
extern s32 D_800EB230_ovl_01;

void func_80167F48_ovl_28(void *arg0,  s32 dy,  s32 dx,  s32 id);

void func_80167A98_ovl_20(void *arg0, void *arg1) {
    u16 oldXvel;
    u16 oldYvel;
    s8 px;
    s8 tx;
    u8 txu;
    S_80167E84 a;
    S_80167E98 b;
    
    s8 oldPy;
    
    u8 y;

    oldXvel = D_80167F46_ovl_20;
    oldYvel = D_80167F48_ovl_20;
    px = D_80167F40_ovl_20;
    tx = D_80167F4A_ovl_20;
    txu = (u8)D_80167F4A_ovl_20;
    a = D_80167E84_ovl_20;
    b = D_80167E98_ovl_20;
    if (tx < px) {
        D_80167F46_ovl_20 = (u16)-1;
    }
    if (px < tx) {
        D_80167F46_ovl_20 = 1;
    }
    if (D_80167F4B_ovl_20 < D_80167F41_ovl_20) {
        D_80167F48_ovl_20 = (u16)-1;
    }
    if (D_80167F41_ovl_20 < D_80167F4B_ovl_20) {
        D_80167F48_ovl_20 = 1;
    }
    if (-(s16)D_80167F46_ovl_20 == (s16)oldXvel) {
        D_80167F42_ovl_20 = (u16)((s16)D_80167F42_ovl_20 * 2 / 3);
    }
    if (-(s16)D_80167F48_ovl_20 == (s16)oldYvel) {
        D_80167F44_ovl_20 = (u16)((s16)D_80167F44_ovl_20 * 2 / 3);
    }
    if (px == tx) {
        s16 v = (s16)D_80167F42_ovl_20;
        if (v < 0) {
            v = -v;
        }
        if (v < 3) {
            D_80167F40_ovl_20 = (s8)txu;
            D_80167F46_ovl_20 = 0;
            D_80167F42_ovl_20 = 0;
        }
    }
    if (D_80167F41_ovl_20 == D_80167F4B_ovl_20) {
        s16 v = (s16)D_80167F44_ovl_20;
        if (v < 0) {
            v = -v;
        }
        if (v < 3) {
            D_80167F41_ovl_20 = (s8)(u8)D_80167F4B_ovl_20;
            D_80167F48_ovl_20 = 0;
            D_80167F44_ovl_20 = 0;
        }
    }
    txu = (u8)D_80167F40_ovl_20;
    y = (u8)D_80167F41_ovl_20;
    tx = (s8)txu;
    oldPy = (s8)y;
    D_80167F44_ovl_20 = (u16)(D_80167F44_ovl_20 + D_80167F48_ovl_20);
    D_80167F42_ovl_20 = (u16)(D_80167F42_ovl_20 + D_80167F46_ovl_20);
    txu = (u8)(txu + (u8)D_80167F42_ovl_20);
    y = (u8)(y + (u8)D_80167F44_ovl_20);
    D_80167F40_ovl_20 = (s8)txu;
    D_80167F41_ovl_20 = (s8)y;
    if ((s8)txu >= 4) {
        D_80167F40_ovl_20 = 3;
    }
    if ((s8)D_80167F40_ovl_20 < -3) {
        D_80167F40_ovl_20 = -3;
    }
    if ((s8)y >= 0x10) {
        D_80167F41_ovl_20 = 0xF;
    }
    if ((s8)D_80167F41_ovl_20 < -0xF) {
        D_80167F41_ovl_20 = -0xF;
    }
    func_80167F48_ovl_28(arg1, 
        (s16)((s8)(u8)D_80167F41_ovl_20 - oldPy), 
        (s16)((s8)(u8)D_80167F40_ovl_20 - tx), 
        D_800EB230_ovl_01);
}
