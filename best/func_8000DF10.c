/* func_8000C7D4 */
extern s32 D_80012920;
extern u8 D_80017700[];
extern u8 D_80017710[];
void func_80006D30(void *a, void *b, s32 c);
void func_8000C9E0(void *a, void *b, s32 c);
void func_8000CB60(void *a, s32 b, s32 c);

void func_8000C7D4(void) {
    s32 buf[2];
    if (D_80012920 == 0) {
        D_80012920 = 1;
        func_80006D30(D_80017710, D_80017700, 1);
        func_8000CB60(D_80017710, 0, 0);
    }
    func_8000C9E0(D_80017710, buf, 1);
}

/* func_8000DF10 */
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
extern s32 D_80017820;
extern s32 D_80017824;
extern s32 D_80017828;
extern s32 D_8001782C;

void func_8000DF10(void) {
    Node8000DF10 *p = D_80012960;
    s32 a = 0;
    s32 b = 0;
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

/* func_8000E0A0 */
s32 func_800072E0(void);
s32 func_80007000(void);
void func_80007300(s32);
void func_8000DE30(s32, s32);
extern s32 D_80017830;

void func_8000E0A0(s32 arg0, s32 arg1) {
    s32 h = func_800072E0();
    s32 v = func_80007000();
    D_80017830 = v;
    func_8000DE30(arg1 + v, v);
    func_80007300(h);
}

/* func_8000E350 */
extern u16 *D_800129D4;
void func_8000E350(s32 arg0) {
    s32 h = func_800072E0();
    if (arg0 & 0xFF) {
        *D_800129D4 |= 0x20;
    } else {
        *D_800129D4 &= 0xFFDF;
    }
    func_80007300(h);
}
