extern s32 func_80006650(void *arg0, s32 arg1);
extern s32 func_800072E0(void);
extern void func_80007300(s32);
extern void func_8000C940(s32 arg0, u32 *arg1);
extern void *D_8001290C;
extern void *D_80017680;
extern u8 D_80017684;
extern u8 D_80017685;
extern u8 D_80017686;
extern u8 D_80017687;
extern u8 D_80017688;
extern u8 D_80017689;
extern s32 D_8001768C;
extern s32 D_80017690;

void **func_8000BFF0(void) {
    u32 sp10;
    s32 ie;
    void *old;
    s32 *p;
    void **base;
    sp10 = 0;
    p = &D_8001768C;
    base = (void **)((u8 *)p - 0xC);
    if (*p != (s32)0xB0000000) {
        D_80017684 = 0;
        *p = (s32)0xB0000000;
        func_8000C940(0, &sp10);
        D_80017689 = 0;
        D_80017690 = 0;
        D_80017688 = (u8)(sp10 >> 8);
        D_80017685 = (u8)sp10;
        D_80017686 = (u8)((sp10 >> 16) & 0xF);
        D_80017687 = (u8)((sp10 >> 20) & 0xF);
        func_80006650((u8 *)p + 8, 0x60);
        ie = func_800072E0();
        old = D_8001290C;
        D_8001290C = base;
        p[-3] = (s32)old;
        func_80007300(ie);
    }
    return &D_80017680;
}
