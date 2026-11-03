extern s32 D_80181F14_ovl_04;
extern s32 D_80180A58_ovl_04;
extern void * volatile jtbl_80180338_ovl_04[];
void func_8000C9E0(void *arg0, s32 arg1, s32 arg2);

s32 func_8017FE8C_ovl_04(void) {
    static void * const keep[3] = {&&L0, &&L2, &&L3};
    s32 x;
    s32 i;

    func_8000C9E0(&D_80181F14_ovl_04, 0, 1);
    i = D_80180A58_ovl_04;
    if ((u32)i < 12) {
        goto *jtbl_80180338_ovl_04[i];
    }
    goto end;
L0:
    x = 0;
    goto end;
L2:
    x = 2;
    goto end;
L3:
    x = 3;
end:
    return x;
}
