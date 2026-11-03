typedef struct {
    s16 unk0;
    s8 unk2;
    u8 unk3;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} SBuf;

extern s32 D_8012BA90_ovl_01;
extern u32 D_8012BA94_ovl_01;
extern s32 D_8012BA98_ovl_01;
extern s32 D_8012BA9C_ovl_01;
extern u8 D_8012BC98_ovl_01[];
extern u8 D_8012BCD0_ovl_01[];

s32 func_800072E0(void);
void func_80007300(s32, s32);
void func_80007320(s32, s32);
void func_8000EFA0(s32, s32);
s32 func_8000BD80(void *, s32, s32, s32, s32, s32, void *);
s32 func_8000C9E0(void *, s32, s32);
void func_80011390(void);

void func_80088744_ovl_01(s32 arg0, s32 arg1, u32 arg2)
{
    SBuf buf;
    s32 tmp;
    s32 zero;
    u32 i;
    u32 chunk;

    zero = 0;
    tmp = func_800072E0();
    D_8012BA98_ovl_01++;
    if (D_8012BA9C_ovl_01 < D_8012BA98_ovl_01) {
        D_8012BA9C_ovl_01 = D_8012BA98_ovl_01;
    }
    func_80007300(tmp, D_8012BA98_ovl_01);
    func_8000EFA0(arg0, arg2);
    i = 0;
    if (D_8012BA90_ovl_01 != 0) {
        do {
            chunk = arg2 - i;
            if (D_8012BA94_ovl_01 < chunk) {
                chunk = D_8012BA94_ovl_01;
            }
            func_8000BD80(&buf, zero, zero, arg1 + i, arg0 + i, chunk, &D_8012BCD0_ovl_01);
            func_8000C9E0(&D_8012BC98_ovl_01, 0, 1);
            i += chunk;
        } while (i != arg2);
    } else {
        func_8000BD80(&buf, zero, zero, arg1, arg0, arg2, &D_8012BCD0_ovl_01);
        func_8000C9E0(&D_8012BC98_ovl_01, 0, 1);
    }
    func_80007320(arg0, arg2);
    func_80011390();
    tmp = func_800072E0();
    D_8012BA98_ovl_01--;
    func_80007300(tmp, D_8012BA98_ovl_01);
}
