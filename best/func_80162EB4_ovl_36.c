s32 func_80032020_ovl_01(s32 arg0);

typedef struct {
    u8 pad[2];
    u8 count;
    u8 pad2[7];
    u8 max;
} Q;

s32 func_80162EB4_ovl_36(u8 *arg0, s16 arg1, s32 arg2, s32 arg3) {
    Q *q = (Q *)(arg0 + 0x2B4);

    if (q->count < q->max) {
        u8 *obj = (u8 *)func_80032020_ovl_01(0x3B);
        if (obj != NULL) {
            if (*(u32 *)arg0 & 0x2000) {
                *(u32 *)obj |= 0x2000;
            }
            *(s16 *)(obj + 0x1AA) = arg1;
            *(s32 *)(obj + 0x28) = arg2;
            *(s32 *)(obj + 0x2C) = *(s32 *)(arg0 + 0x2C);
            *(s32 *)(obj + 0x30) = arg3;
            q->count++;
            return (s32)obj;
        }
    }
    return 0;
}
