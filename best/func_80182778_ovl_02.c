#define P(n) arg1[n] = (u8)(((u32)arg1[n] + (u32)arg0[n] + 1) >> 1)

void func_80182778_ovl_02(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 i = 0;

    if (arg3 > 0) {
        do {
            P(0);
            P(1);
            P(2);
            P(3);
            P(4);
            P(5);
            P(6);
            P(7);
            P(8);
            P(9);
            P(10);
            P(11);
            P(12);
            P(13);
            P(14);
            P(15);
            arg0 += arg2;
            arg1 += arg2;
            i++;
        } while (i < arg3);
    }
}
