extern s32 D_80012878;
extern s32 D_80012884;
extern s32 func_800B4340(s32);
extern s32 func_800B42BC(s32);

void func_80004B5C(void) {
    s32 *p = &D_80012878;
    if (func_800B4340(*p) & 0xFF) {
        func_800B42BC(*p);
    }
    D_80012884 = 3;
}
