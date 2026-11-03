extern volatile u32 D_80167D9C_ovl_30[];
extern s16 D_80167CEC_ovl_30[];
void func_801672F4_ovl_30(void *arg0, s32 arg1, s32 arg2);

void func_801631EC_ovl_30(void *p)
{
    s32 n;
    void *q = p;
    ((void (*)(void))D_80167D9C_ovl_30[*((u8 *)q + 6)])();
    n = *(s16 *)((u8 *)D_80167CEC_ovl_30 + (*(s16 *)((u8 *)q + 0x2b6) * 4));
    if (*(s8 *)((u8 *)q + 0x207)) {
        func_801672F4_ovl_30(q, (n + 1) & 0xff, 1);
        func_801672F4_ovl_30(q, (n + 3) & 0xff, 1);
        *((u8 *)q + 0x207) = *((u8 *)q + 0x207) - 1;
    }
}
