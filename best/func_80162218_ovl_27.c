static __inline__ unsigned short __repair_inline(unsigned short a) { return a; }
extern unsigned char D_800C7650_ovl_01[];
extern unsigned char D_800E10D0_ovl_01[];
extern int func_80032EA4_ovl_01(void *, int, int, int);
extern int func_80033634_ovl_01(void);
extern int func_80089D34_ovl_01(void *, int, int, int);

int func_80162218_ovl_27(void *arg0, int arg1, int arg2) {
    unsigned char *obj;
    int *path;
    unsigned short a;
    unsigned char mode;
    int x, z;

    if (--*(unsigned short *)((char *)arg0 + 0x1F4) == 0) {
        *(int *)((char *)arg0 + 0x1E8) = 0x04000700;
        obj = *(unsigned char **)((char *)arg0 + 0x250);
        *(signed char *)((char *)arg0 + 0x2C5) = 0;
        *(unsigned char *)((char *)arg0 + 6) += 1;
        if (obj[0x2B4] == 0)
            path = (int *)D_800E10D0_ovl_01;
        else
            path = *(int **)(D_800C7650_ovl_01 + 0x18000 + 0x1D3C);
        a = __repair_inline(*(unsigned short *)(obj + 0x66));
        mode = *((unsigned char *)arg0 + 0x2B5);
        if (mode == 3) {
            *(unsigned short *)((char *)arg0 + 0x1F6) = a;
            *(unsigned short *)((char *)arg0 + 0x1F6) += 0x400 + ((func_80033634_ovl_01() & 1) << 11);
        } else {
            if (mode & 2) *(unsigned short *)((char *)arg0 + 0x1F6) = a + 0x400;
            else *(unsigned short *)((char *)arg0 + 0x1F6) = a - 0x400;
        }
        x = path[10];
        z = path[12];
        *(unsigned short *)((char *)arg0 + 0x1F6) += func_80032EA4_ovl_01(arg0, x, z, 0x100);
    }
    return func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
}
