s32 func_800072E0(void);
u32 func_80007000(void);
void func_80007300(s32);
void func_8000DE30(s32);
extern s32 D_80017830;

void func_8000E0A0(u64 time) {
    s32 ie = func_800072E0();
    u32 now = func_80007000();
    u64 ext = now;
    u64 sum = ext + time;
    D_80017830 = now;
    func_8000DE30((s32)sum);
    func_80007300(ie);
}
