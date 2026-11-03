s32 func_800022BC(s32, void *, void *);

s32 func_80002FE8(void *arg0) {
    s32 sp10;
    s32 ret;

    if (arg0 == NULL) {
        ret = -2;
    } else {
        s32 a0 = *(s32 *)((u8 *)arg0 + 0x1C);

        if (a0 == 0) {
            ret = -2;
        } else if (*(s32 *)((u8 *)arg0 + 0x24) == 0) {
            ret = -2;
        } else {
            s32 x = *(s32 *)((u8 *)a0 + 0x14);

            if (x != 0) {
                func_800022BC(x, arg0, &sp10);
            }
            ((void (*)(s32, void *))*(void **)((u8 *)arg0 + 0x24))(
                *(s32 *)((u8 *)arg0 + 0x28), *(void **)((u8 *)arg0 + 0x1C));
            ret = 0;
            *(void **)((u8 *)arg0 + 0x1C) = NULL;
        }
    }
    return ret;
}
