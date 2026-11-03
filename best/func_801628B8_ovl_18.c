extern void func_8003420C_ovl_01();
extern void func_80077D48_ovl_01(s32, void *);
extern void func_80162B1C_ovl_18(void *, s32, s32);
extern void func_800324AC_ovl_01(void *);
extern u8 D_80162CD4_ovl_18[];
void func_801628B8_ovl_18(O *p)
{
    s32 idx;
    if (p->p[6] == 0)
    {
        p->p[6] = 1;
        if (p->p[0x2BE] == 0)
        {
            func_8003420C_ovl_01(*(s32 *)(p->p + 0x208), 0xBF10BF00);
        }
        else
        {
            *(s32 *)p->p |= 0x400;
        }
        func_80077D48_ovl_01(7, p);
        idx = p->p[5];
        func_80162B1C_ovl_18(p, 0, D_80162CD4_ovl_18[idx]);
    }
    else
    {
        func_800324AC_ovl_01(p);
    }
}
