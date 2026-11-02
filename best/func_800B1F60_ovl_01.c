/* func_800B22AC_ovl_01 */
extern s32 func_800AF074_ovl_01(void);

s32 func_800B22AC_ovl_01(s32 arg0) {
    s32 r = func_800AF074_ovl_01();
    if (r != -1) {
        return arg0;
    }
    return -1;
}

/* func_800B20D8_ovl_01 */
extern u8 D_80147F49;

void func_800B20D8_ovl_01(u8 arg0) {
    D_80147F49 = arg0;
}

/* func_800B1F60_ovl_01 */
typedef struct { s32 w[8]; } S;
extern S D_80143F90;

void func_800B1F60_ovl_01(S *arg0) {
    D_80143F90 = *arg0;
}
