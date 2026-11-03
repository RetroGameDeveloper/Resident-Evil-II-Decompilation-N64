extern u8 D_80017730;
s32 func_800072E0(void);
s32 func_80007300(s32);

void func_8000CC90(s32 arg0, s32 arg1, s32 arg2) {
    s32 t;
    u32 *p;
    t = func_800072E0();
    p = (u32 *)((u8 *)&D_80017730 + arg0 * 8);
    p[0] = arg1;
    p[1] = arg2;
    func_80007300(t);
}
