typedef struct { u8 pad0[0x28]; s32 x; s32 y; s32 z; u8 pad1[0x66-0x34]; s16 a; u8 pad2[0x200-0x68]; s16 b; s16 c; s16 d; } Obj3334C;
typedef struct { s32 w[8]; } Data3334C;
extern Data3334C D_800E8FC8_ovl_01;
void func_80033434_ovl_01(s16 *out, s32 a, s32 b, s32 c);
void func_80041484_ovl_01(s32 a, s32 *b);
void func_8004279C_ovl_01(s32 *a, s16 *b, s16 *c);

void func_8003334C_ovl_01(Obj3334C *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 tmp[8];
    s16 out[3];

    func_80033434_ovl_01(out, arg3, arg1, arg2);
    *(Data3334C *)tmp = D_800E8FC8_ovl_01;
    func_80041484_ovl_01(arg0->a, tmp);
    func_8004279C_ovl_01(tmp, out, out);
    arg0->x = arg0->b + out[0];
    arg0->y = arg0->c + out[1];
    arg0->z = arg0->d + out[2];
}
