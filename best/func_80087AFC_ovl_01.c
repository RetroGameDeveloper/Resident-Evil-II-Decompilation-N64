extern u8 D_80129FD4_ovl_01[];
extern u8 D_80129E34_ovl_01[];
extern s32 D_8013A2C0;
extern s32 D_8013A1D0;

s32 func_80007F50_ovl_01(void *arg0, s32 arg1, u32 arg2);
s32 func_80008110_ovl_01(void *arg0, s32 arg1, u32 arg2);
s32 func_8000CB60(s32 arg0, s32 arg1, s32 arg2);
s32 func_8000CEC0(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6, void *arg7);
void func_80087AFC_ovl_01(void *arg0);

void func_80087AFC_ovl_01(void *arg0) {
    s32 a1;
    u32 a2;
    u32 s1;
    s32 v1;
    u8 *s0;
    u8 *dp;

    s0 = *(u8 **)((u8 *)arg0 + 4);
    a1 = *(s32 *)(s0 + 0);
    dp = (u8 *)((u32)D_80129FD4_ovl_01 + (u32)a1);
    if (*dp == 3) {
        v1 = *(s32 *)(s0 + 0x10);
        if (v1 & 1) {
            a2 = *(u32 *)(s0 + 0xC);
            s1 = 0;
            if (a2 >= 0x97 || v1 == 1) {
                s1 = a2;
                func_80007F50_ovl_01(D_80129E34_ovl_01 + a1 * 0x68, a1, a2);
            }
        } else {
            a2 = *(u32 *)(s0 + 0x8);
            s1 = 0;
            if (a2 >= 0x97) {
                s1 = a2;
                func_80008110_ovl_01(D_80129E34_ovl_01 + a1 * 0x68, a1, a2);
            }
        }
        v1 = *(s32 *)(s0 + 0x10) - 1;
        *(s32 *)(s0 + 0x10) = v1;
        if (v1 == 0) {
            dp = (u8 *)((u32)D_80129FD4_ovl_01 + (u32)*(s32 *)(s0 + 0));
            *dp = 2;
            if (*(s32 *)(s0 + 0x14) != 0) {
                func_8000CB60(*(s32 *)(s0 + 0x14), 0, 0);
            }
        } else if (s1 != 0) {
            func_8000CEC0(&D_8013A2C0, arg0, 0, s1, 0, 0, &D_8013A1D0, arg0);
        } else {
            func_80087AFC_ovl_01(arg0);
        }
    }
}
