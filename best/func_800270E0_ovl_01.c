extern s32 func_800072E0(void);
extern void func_80007300(s32);
extern void func_80024D60_ovl_01(void);
extern void func_80026AE0_ovl_01(void);
extern void func_8006B40C_ovl_01(s32, s32, s32);
extern void func_8006B6E4_ovl_01(void);
extern s32 D_800E90AC_ovl_01;
extern s32 D_800E90B4_ovl_01;
extern u8 D_80112720_ovl_01;
extern u8 D_80112908_ovl_01[];

void func_80026948_ovl_01(s32 arg0)
{
    s32 *p = &D_800E90AC_ovl_01;
    *p = arg0;
}

void func_8002686C_ovl_01(s32 idx, s8 val)
{
    u8 *base = D_80112908_ovl_01;
    s32 t = func_800072E0();
    base[idx] = val;
    func_80007300(t);
}

void func_80026858_ovl_01(void)
{
    u8 *p = &D_80112720_ovl_01;
    *p = 10;
}

void func_800267DC_ovl_01(s32 idx, void (*fn)(void), s8 val)
{
    u8 *base = D_80112908_ovl_01;
    u8 *flag = &D_80112720_ovl_01;
    s32 t;

    t = func_800072E0();
    *flag = idx;
    base[idx] = 1;
    func_80007300(t);
    fn();
    t = func_800072E0();
    base[idx] = val;
    func_80007300(t);
}

void func_80026AC0_ovl_01(void)
{
    s32 *p = &D_800E90B4_ovl_01;
    *p = 1;
}

void func_800270E0_ovl_01(void)
{
    u8 *base = D_80112908_ovl_01;
    u8 *flag = &D_80112720_ovl_01;
    s32 t;

    func_80026AE0_ovl_01();
    func_80024D60_ovl_01();
    t = func_800072E0();
    base[0] = 4;
    func_8006B40C_ovl_01(0, 0, 2);
    *flag = 1;
    func_8006B40C_ovl_01(1, 0, 1);
    base[*flag] = 1;
    func_80007300(t);
    func_8006B6E4_ovl_01();
}
