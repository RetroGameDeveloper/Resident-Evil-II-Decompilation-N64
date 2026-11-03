typedef struct S_Node8000CDF0 {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    u8 padC[4];
    u16 unk10;
} S_Node8000CDF0;

extern S_Node8000CDF0 *D_80012950;
extern S_Node8000CDF0 *D_80012948;
s32 func_800072E0(void);
void func_80007300(s32);
void func_8000DED0(s32, void *);
void func_80000F08(s32, void *);
void func_80000DD4(void *);

void func_8000CDF0(S_Node8000CDF0 *arg0, s32 arg1)
{
    s32 s1;
    S_Node8000CDF0 *s0;
    s32 s2;

    s1 = arg1;
    s0 = arg0;
    s2 = func_800072E0();
    if (s0 == NULL)
        s0 = D_80012950;
    if (s0->unk4 != s1) {
        s0->unk4 = s1;
        if (s0 != D_80012950) {
            if (s0->unk10 != 1) {
                func_8000DED0(s0->unk8, s0);
                func_80000F08(s0->unk8, s0);
            }
        }
        if (D_80012950->unk4 < D_80012948->unk4) {
            D_80012950->unk10 = 2;
            func_80000DD4(&D_80012948);
        }
    }
    func_80007300(s2);
}
