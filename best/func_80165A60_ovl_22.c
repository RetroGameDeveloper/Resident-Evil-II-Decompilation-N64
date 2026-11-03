extern s32 func_80036C98_ovl_01(void *, s32, s32, s32);

void func_80165A60_ovl_22(void *arg0)
{
    switch (*(u8 *)((u8 *)arg0 + 7)) {
    case 0:
        *(u8 *)((u8 *)arg0 + 7) = *(u8 *)((u8 *)arg0 + 7)
                                  + func_80036C98_ovl_01(arg0, 9, 15, 0);
        break;
    case 1:
        *(s32 *)((u8 *)arg0 + 4) = 0x01010000;
        break;
    }
}
