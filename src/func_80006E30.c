extern s32 func_80000F60(void);
extern s32 func_800072E0(void);
extern s32 func_80007300(s32);
extern s32 func_8000DED0(s32, void *);
extern void *D_8001294C;
extern void *D_80012950;
void func_80006E30(void *arg0)
{
    void *s0 = arg0;
    void *v0;
    void *v1;
    s32 s1 = func_800072E0();
    if (!s0) {
        s0 = D_80012950;
    } else {
        if (*(u16 *)((u8 *)s0 + 0x10) != 1) {
            func_8000DED0(*(s32 *)((u8 *)s0 + 8), s0);
        }
    }
    if (D_8001294C == s0) {
        D_8001294C = *(void **)((u8 *)s0 + 0xC);
    } else {
        v1 = D_8001294C;
        v0 = *(void **)((u8 *)v1 + 0xC);
        while (v0) {
            if (v0 == s0) {
                *(void **)((u8 *)v1 + 0xC) = *(void **)((u8 *)s0 + 0xC);
                break;
            }
            v1 = v0;
            v0 = *(void **)((u8 *)v0 + 0xC);
        }
    }
    if (s0 == D_80012950) {
        func_80000F60();
    }
    func_80007300(s1);
}
