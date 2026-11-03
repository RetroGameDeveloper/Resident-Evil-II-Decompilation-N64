extern s32 D_800C5268_ovl_01;
extern s32 D_800C7618_ovl_01;
extern s32 D_800C7620_ovl_01;
extern void func_800879D0_ovl_01(void *);

void func_80025EF0(void)
{
    s32 *p = (s32 *)&D_800C7618_ovl_01;
    s32 *q = (s32 *)&D_800C7620_ovl_01;

    p[1] = (s32)q;
    p[0] = 2;
    q[0] = D_800C5268_ovl_01;
    q[2] = 0;
    func_800879D0_ovl_01(p);
}
