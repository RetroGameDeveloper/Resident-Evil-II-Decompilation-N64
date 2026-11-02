typedef struct {
    u8 pad_00[4];
    union {
        s32 w;
        struct { u16 lo; u8 b6; u8 b7; } h;
    } u4;
    u8 pad_08[0x1D8];
    s16 unk_1E0;
    u8 pad_1E2[6];
    s32 unk_1E8;
    u8 pad_1EC[8];
    s16 unk_1F4;
    u8 pad_1F6[0x10];
    s8 unk_206;
    u8 pad_207[0x59];
    s16 unk_260;
    s16 unk_262;
    u8 pad_264[0x28];
    u32 unk_28C;
    u8 pad_290[0x26];
    u16 unk_2B6;
    u8 pad_2B8[0xA];
    u8 unk_2C2;
    u8 pad_2C3[0x10];
    u8 unk_2D3;
    u8 pad_2D4[2];
    u8 unk_2D6;
} T_func_80163FBC;

s32 func_80033634_ovl_01(void);
void func_80077D48_ovl_01(s32 arg0, void *arg1);
void func_800334F8_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80032DEC_ovl_01(void *arg0, s16 arg1, s16 arg2, s32 arg3);
s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80032B8C_ovl_01(void *arg0, s32 arg1);

extern s16 D_8016C29E_ovl_31;

void func_80163FBC_ovl_31(T_func_80163FBC *p, s32 arg1, s32 arg2) {
    s32 v;

    p->unk_2B6 |= 0x40;
    switch (p->u4.h.b6) {
    case 0:
        p->unk_1E8 = 0x05000F00;
        p->u4.h.b6 = 1;
        p->unk_1F4 = 0;
        v = func_80033634_ovl_01();
        p->unk_206 = (v & 0xF) + 1;
        func_80077D48_ovl_01(0, p);
        D_8016C29E_ovl_31 = 0;
    case 1:
        func_800334F8_ovl_01(p, arg1, arg2, 0);
        if (p->unk_1E0 >= 0x15) {
            func_80032DEC_ovl_01(p, p->unk_260, p->unk_262, 4);
        }
        if (p->unk_1E0 >= 0x1F) {
            func_80032DEC_ovl_01(p, p->unk_260, p->unk_262, 8);
        }
        if (p->unk_2B6 & 0x20) {
            func_80032DEC_ovl_01(p, p->unk_260, p->unk_262, 8);
            if (p->unk_206 != 0) {
                func_80032DEC_ovl_01(p, p->unk_260, p->unk_262, p->unk_206);
            }
        }
        if (p->unk_28C < 0xDAC) {
            if (!(p->unk_2B6 & 0x20)) {
                p->unk_2D3++;
                if (p->unk_2D3 >= 0x97) {
                    if (p->unk_2D6 >= 2) {
                        *(s32 *)((u8 *)p + 4) = 0x010B0000;
                        p->unk_2C2 = 4;
                        p->unk_2D3 = 0;
                    }
                }
            }
        }
        if (func_80089D34_ovl_01(p, arg1, arg2, 0x100) != 0) {
            func_80077D48_ovl_01(0xB, p);
        }
        func_80032B8C_ovl_01(p, 0);
        break;
    }
}
