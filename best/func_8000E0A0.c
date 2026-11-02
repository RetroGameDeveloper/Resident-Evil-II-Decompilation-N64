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
        func_8000CB60(&D_80017710, 0, 0);
    }
    func_8000C9E0(&D_80017710, buf, 1);
}

s32 func_800072E0(s32);
s32 func_80007000(void);
void func_80007300(s32);
void func_8000DE30(s32);
extern s32 D_80017830;

void func_8000E0A0(s32 arg0, s32 arg1) {
    s32 h = func_800072E0(arg0);
    s32 v = func_80007000();
    D_80017830 = v;
    func_8000DE30(arg1 + v);
    func_80007300(h);
}
