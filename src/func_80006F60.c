extern s32 D_800128F0;
s32 func_8000BE30(void);
s32 func_80007450(s32, void *, s32);
s32 func_8000CB60(s32, void *, s32);

s32 func_80006F60(s32 a, u8 *p, s32 c)
{
    if (D_800128F0 == 0) {
        return -1;
    }
    *(s32 *)(p + 0x14) = a;
    if (c == 0) {
        *(s16 *)p = 0xF;
    } else {
        *(s16 *)p = 0x10;
    }
    if (*(u8 *)(p + 2) != 1) {
        return func_8000CB60(func_8000BE30(), p, 0);
    }
    return func_80007450(func_8000BE30(), p, 0);
}
