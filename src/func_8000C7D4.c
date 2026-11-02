extern s32 D_80012920;
extern s32 D_80017700;
extern s32 D_80017710;
void func_80006D30(s32 *, s32 *, s32);
void func_8000C9E0(s32 *, s32 *, s32);
void func_8000CB60(s32 *, s32, s32);

void func_8000C7D4(void) {
    s32 buf[2];
    if (D_80012920 == 0) {
        D_80012920 = 1;
        func_80006D30(&D_80017710, &D_80017700, 1);
        func_8000CB60((s32 *)((u8 *)&D_80012920 + 0x4DF0), 0, 0);
    }
    func_8000C9E0(&D_80017710, buf, 1);
}

typedef struct {
    void *f0;
    void *f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
} Node8000DF10;
extern Node8000DF10 *D_80012960;
extern s32 D_80017820, D_80017824, D_80017828, D_8001782C;

void func_8000DF10(void) {
    Node8000DF10 *p = D_80012960;
    register s32 a = 0;
    register s32 b = 0;
    D_80017828 = a;
    D_8001782C = b;
    D_80017820 = 0;
    D_80017824 = 0;
    p->f10 = a;
    p->f14 = b;
    p->f8 = a;
    p->fC = b;
    p->f4 = p;
    p->f0 = p;
    p->f18 = 0;
    p->f1C = 0;
}

s32 func_800072E0(void);
s32 func_80007000(void);
void func_80007300(s32);
void func_8000DE30(u32);
extern s32 D_80017830;

void func_8000E0A0(u32 arg0, u32 arg1) {
    u32 ie = func_800072E0();
    u32 now = func_80007000();
    D_80017830 = now;
    func_8000DE30((arg0 -= arg0, arg1 + now));
    func_80007300(ie);
}
