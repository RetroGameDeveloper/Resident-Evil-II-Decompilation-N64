extern unsigned char D_800C7650_ovl_01[];
extern int func_80032EA4_ovl_01(void *, int, int, int);
void func_80164278_ovl_29(void *arg0) {
    unsigned char *p = (unsigned char *)arg0;
    unsigned char *g = D_800C7650_ovl_01 + 0x18000;
    unsigned int saved = *(unsigned int *)(p + 0x28C);
    int temp_v1;
    int temp_a0;
    int result;
    temp_v1 = func_80032EA4_ovl_01(arg0, *(int *)(g+0x1AA8), *(int *)(g+0x1AB0), 0x5F4);
    func_80032EA4_ovl_01(arg0, *(int *)(g+0x1AA8), *(int *)(g+0x1AB0), 0x338);
    temp_v1 = func_80032EA4_ovl_01(arg0, *(int *)(g+0x1AA8), *(int *)(g+0x1AB0), 0x400);
    temp_a0 = temp_v1;
    if (*(unsigned short *)(p+0x2C0) == 0) {
        *(short *)(p+0x1AA) = 1;
        *(int *)(p+4) = 0x01060000;
        return;
    }
    if (*(short *)(p+0x1F2) < 100) {
        *(short *)(p+0x1AA) = 1;
        *(int *)(p+4) = 0x01060000;
        return;
    }
    if ((temp_v1 << 16) == 0) {
        if (saved >= 0x9C5) *(int *)(p+4) = 0x01010000;
    }
    if (*(unsigned char *)(g+0x1CEF) != 0) return;
    if (*(short *)(p+0x1F4) >= 10) return;
    if ((temp_a0 << 16) != 0) return;
    if (saved >= 0x9C4) return;
    if ((*(unsigned short *)(g+0x1A7A) & 4) == 0) return;
    result = 0x01040000;
    *(int *)(p+4) = result;
}
