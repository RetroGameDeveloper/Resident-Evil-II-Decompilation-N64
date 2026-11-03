typedef struct { u8 v; u8 pad[4]; } W8;
typedef struct {
    u8 pad[0x18000];
    u8 r18[0x8000];
    u8 r20[0x2000];
} Big7650;

extern Big7650 D_800C7650_ovl_01;
extern W8 D_800E9127_ovl_01;
extern s32 func_80083D1C_ovl_01(s16);

void func_80027180_ovl_01(s32 arg0) {
    u16 old = *(u16 *)&D_800C7650_ovl_01.r20[0x15FC];

    *(u16 *)&D_800C7650_ovl_01.r20[0x1600] = old;
    if ((s16)old != arg0) {
        *(u16 *)&D_800C7650_ovl_01.r20[0x15FC] = arg0;
        D_800E9127_ovl_01.v = 1;
        *(u32 *)&D_800C7650_ovl_01.r18[0x1A5C] |= 0x100000;
    }
    *(u32 *)&D_800C7650_ovl_01.r18[0x290] = func_80083D1C_ovl_01(*(s16 *)&D_800C7650_ovl_01.r20[0x15FC]);
}
