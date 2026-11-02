typedef struct { u8 b[0x28]; } Blob28;

extern u32 D_800128E0[];
extern u8 D_80014FE0;
extern u8 D_80016350[];
extern u8 D_80016450[];
extern u8 D_80016470[];

extern void func_8000CFB4(void);
extern void func_8000D1F0(s32 arg0, void *arg1);
extern void func_8000C9E0(s32 arg0, s32 arg1, s32 arg2);
extern s32 func_80008F78(void *arg0);
extern void func_8000D020(void);

s32 func_80007F50(u8 *o)
{
    Blob28 tmp;
    u8 *p;
    s32 i;
    s32 r;
    s32 n1;

    p = D_80016470;
    if (D_800128E0[*(s32 *)(o + 8)] == 0) {
        return 5;
    }
    func_8000CFB4();
    n1 = *(s32 *)(o + 8);
    D_80014FE0 = 3;
    func_8000D1F0(1, D_80016350 + (n1 << 6));
    func_8000C9E0(*(s32 *)(o + 4), 0, 1);
    func_8000D1F0(0, p);
    func_8000C9E0(*(s32 *)(o + 4), 0, 1);
    if (*(s32 *)(o + 8) != 0) {
        for (i = 0; i < *(s32 *)(o + 8); i++) {
            p++;
        }
    }
    tmp = *(Blob28 *)p;
    r = (tmp.b[2] & 0xC0) >> 4;
    if (r == 0 && (func_80008F78(D_80016450) & 0xFF) != tmp.b[0x26]) {
        r = 4;
    }
    func_8000D020();
    return r;
}
