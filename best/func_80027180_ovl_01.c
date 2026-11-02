typedef struct { s32 v; u8 pad[4]; } W32;
typedef struct { u8 v; u8 pad[4]; } W8;
typedef struct {
    u8 pad[0x18000];
    u8 r18[0x8000];
    u8 r20[0x2000];
} Big7650;

extern W32 D_800E90B4_ovl_01;
extern Big7650 D_800C7650_ovl_01;
extern W8 D_800E9127_ovl_01;
extern W32 D_800C5688_ovl_01;
extern W32 D_800C4EB8_ovl_01;
extern W32 D_800C4E68_ovl_01;
extern W32 D_8010B698_ovl_01;
extern W32 D_80113778_ovl_01;
extern W32 D_80012820;
extern W8 D_800E91E1_ovl_01;
extern s32 func_80083D1C_ovl_01(s16);
extern void func_8006BC70_ovl_01(s32);
extern void func_8006BB3C_ovl_01(s32);
extern void func_8002751C_ovl_01(s32, s32);
extern void func_8004CE44_ovl_01(s32);
extern void func_80075CCC_ovl_01(void);
extern void func_80075CA8_ovl_01(void);
extern void func_800278AC_ovl_01(void);
extern void func_8004CA04_ovl_01(void);
extern void func_8008459C_ovl_01(void);
extern void func_8004CCD8_ovl_01(s32, s32);

void func_80026AC0_ovl_01(void) {
    D_800E90B4_ovl_01.v = 1;
}

void func_80027180_ovl_01(s16 arg0) {
    u16 old = *(u16 *)&D_800C7650_ovl_01.r20[0x15FC];

    *(u16 *)&D_800C7650_ovl_01.r20[0x1600] = old;
    if ((s16)old != arg0) {
        *(u16 *)&D_800C7650_ovl_01.r20[0x15FC] = arg0;
        D_800E9127_ovl_01.v = 1;
        *(u32 *)&D_800C7650_ovl_01.r18[0x1A5C] |= 0x100000;
    }
    *(u32 *)&D_800C7650_ovl_01.r18[0x290] = func_80083D1C_ovl_01(*(s16 *)&D_800C7650_ovl_01.r20[0x15FC]);
}

void func_800260D0_ovl_01(void) {
    *(u16 *)&D_800C7650_ovl_01.r18[0x25C] = 0;
    func_8006BC70_ovl_01(0);
    func_8006BB3C_ovl_01(0);
    func_8002751C_ovl_01(2, 1);
    func_8004CE44_ovl_01(0);
    func_8004CE44_ovl_01(1);
    func_80075CCC_ovl_01();
    func_80075CA8_ovl_01();
    func_800278AC_ovl_01();
    D_800E91E1_ovl_01.v = 0;
    func_8004CA04_ovl_01();
    func_8008459C_ovl_01();
    D_80012820.v = 0;
    func_8004CCD8_ovl_01(0, 1);
}

void func_8002607C_ovl_01(s32 arg0) {
    D_800C5688_ovl_01.v = arg0;
    D_800C4EB8_ovl_01.v = D_8010B698_ovl_01.v;
    D_800C4E68_ovl_01.v = arg0 - (*(s16 *)&D_800C7650_ovl_01.r20[0x1270] * (D_80113778_ovl_01.v * 2));
}
