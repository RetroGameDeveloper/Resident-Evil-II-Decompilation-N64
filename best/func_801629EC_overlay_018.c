extern unsigned char D_800C7650_ovl_01[];
extern unsigned char D_800E10D0_ovl_01[];
extern int func_80033174_ovl_01(void *, void *);
extern int func_80059E30_ovl_01(int, int);
extern int func_80052C00_ovl_01(int, int);
extern int func_80162B1C_ovl_18(void *, int, int);
extern void func_80162BEC_ovl_18(void *, int);
extern int func_80080D94_ovl_01(void);
int func_801629EC_overlay_018(void *arg0, int arg1) {
    unsigned char *state = (unsigned char *)arg0 + 0x2B4;
    unsigned char *path;
    unsigned int value;
    int result = 0;
    if (arg1 == 0) {
        value = *(unsigned int *)((char *)arg0 + 0x28C);
        path = D_800E10D0_ovl_01;
    } else {
        value = *(unsigned int *)((char *)arg0 + 0x290) & 0x3FFFFFFF;
        path = *(unsigned char **)(D_800C7650_ovl_01 + 0x18000 + 0x1D3C);
    }
    if (value < *(unsigned short *)(path + 0x136) + 0xA &&
        (unsigned int)(*(int *)(path + 0x2C) - *(int *)((char *)arg0 + 0x2C)) < 0xBB8 &&
        state[9] == 0 && (path[0x26F] & 0x80) == 0) {
        if (arg1 == 0) {
            func_80162BEC_ovl_18(path, func_80033174_ovl_01(arg0, path) & 0xFF);
            func_80059E30_ovl_01(1, 1);
            func_80052C00_ovl_01(3, 0);
        } else {
            func_80080D94_ovl_01();
        }
        func_80162B1C_ovl_18(arg0, 0, 1);
        result = 1;
        state[9] = 1;
        *(unsigned short *)((char *)arg0 + 0x1E0) = 0x5A;
        *(unsigned short *)((char *)arg0 + 0x66) += 0x800;
    }
    return result;
}
