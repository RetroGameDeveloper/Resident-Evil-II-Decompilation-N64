extern s32 func_800072E0(void);
extern void func_80007300(s32);
extern volatile u8 D_80112908_ovl_01[];

void func_8002686C_ovl_01(s32 idx, s8 val)
{
    s32 t = func_800072E0();
    volatile u8 *base = D_80112908_ovl_01;

    base[idx] = val;
    func_80007300(t);
}
