extern s32 D_800128B0;
extern u8 D_80014F80;
extern u8 D_80014F98;
extern s8 D_80014F9C;
extern u8 D_80014FA0;
extern s8 D_80014FE0;

void func_80006D30(void *, void *, s32);
u64 func_80007030(void);
s32 func_8000C9E0(void *, void *, s32);
s32 func_8000CEC0(void *, u64, u64, void *, void *);
void func_80006B20(s32);
s32 func_8000D1F0(s32, void *);
void func_80006A6C(void *, void *);
void func_8000CF60(void);

s32 func_800068D0(void *arg0, void *arg1, void *arg2) {
    s32 buf20[8];
    s32 buf40[6];
    s32 buf58[2];
    u64 t;
    s32 ret;

    if (D_800128B0 != 0) {
        return 0;
    }
    D_800128B0 = 1;
    t = func_80007030();
    if (t <= 0x165A0BB) {
        func_80006D30(buf40, buf58, 1);
        func_8000CEC0(buf20, (u64)0x165A0BC - t, 0, buf40, buf58);
        func_8000C9E0(buf40, buf58, 1);
    }
    D_80014F9C = 4;
    func_80006B20(0);
    func_8000D1F0(1, &D_80014FA0);
    func_8000C9E0(arg0, buf58, 1);
    ret = func_8000D1F0(0, &D_80014FA0);
    func_8000C9E0(arg0, buf58, 1);
    func_80006A6C(arg1, arg2);
    D_80014FE0 = 0;
    func_8000CF60();
    func_80006D30(&D_80014F80, &D_80014F98, 1);
    return ret;
}
