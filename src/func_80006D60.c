extern s32 func_800072E0(void);
extern void func_80007300(s32);
extern void *D_8001294C;
extern u8 func_80000F60[];

typedef struct {
    s32 f00;
    s32 f04;
    s32 f08;
    void *f0C;
    s16 f10;
    s16 f12;
    s32 f14;
    s32 f18;
    u8 pad1C[0x1C];
    s64 f38;
    u8 pad40[0xB0];
    s64 fF0;
    u8 padF8[8];
    s64 f100;
    u8 pad108[0x10];
    s32 f118;
    s32 f11C;
    u8 pad120[8];
    s32 f128;
    s32 f12C;
} Obj;

void func_80006D60(Obj *s0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s64 a4ext = (s64)arg4 - 0x10;
    s64 a3ext = arg3;
    s32 ie;
    void *prev;
    s0->f100 = (s64)(s32)((u8 *)func_80000F60 + 0x20C);
    s0->f118 = 0xFF03;
    s0->f128 = 0x3F;
    s0->f14 = arg1;
    s0->f00 = 0;
    s0->f08 = 0;
    s0->f11C = arg2;
    s0->f38 = a3ext;
    s0->f12C = 0x01000800;
    s0->f18 = 0;
    s0->f10 = 1;
    s0->f12 = 0;
    s0->f04 = arg5;
    s0->fF0 = a4ext;
    ie = func_800072E0();
    prev = D_8001294C;
    D_8001294C = s0;
    s0->f0C = prev;
    func_80007300(ie);
}
