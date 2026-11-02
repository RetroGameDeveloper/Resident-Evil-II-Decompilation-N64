typedef struct {
    u32 unk0;
    u8 pad[0x5C];
    s32 unk60;
    u8 unk64;
} S0A900;

s32 func_8000A2D0(void *arg0);
s32 func_8000A394(void *arg0, u16 *arg1, s32 arg2, s32 arg3);

s32 func_8000A900(S0A900 *arg0, s32 *arg1) {
    u16 buf[128];
    u32 i;
    s32 j;
    s32 start;
    u32 k;
    u32 count;
    s32 r;

    count = 0;
    if ((arg0->unk0 & 1) == 0) {
        return 5;
    }
    if (func_8000A2D0(arg0) == 2) {
        return 2;
    }
    i = 0;
    if (count < arg0->unk64) {
        do {
            k = i & 0xFF;
            r = func_8000A394(arg0, buf, 0, k);
            if (r != 0) {
                return r;
            }
            start = k ? 1 : arg0->unk60;
            for (j = start; j < 0x80; j++) {
                count += (buf[j] == 3);
            }
            i++;
        } while ((i & 0xFF) < arg0->unk64);
    }
    *arg1 = count << 8;
    return 0;
}
