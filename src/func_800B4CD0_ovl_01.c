typedef struct {
    u8 pad0[0x11A8];
    s32 unk11A8;
    u8 pad1[0x28];
    u32 unk11D4;
    u32 unk11D8;
    u8 pad2[1];
    u8 unk11DD;
} S4CD0;

u32 func_800B4CD0_ovl_01(S4CD0 *arg0, u32 arg1) {
    s32 tmp;
    u32 v0;
    u32 v1;

    if (arg0->unk11DD == 3) {
        tmp = arg0->unk11A8;
        if (tmp > 0) {
            tmp -= arg1;
            arg0->unk11A8 = tmp;
            if (tmp <= 0) {
                arg0->unk11DD = 4;
                arg0->unk11A8 = 0;
            }
        }
        v0 = arg0->unk11D8 - arg0->unk11D4;
        if (arg1 < v0) {
            v1 = arg1;
        } else {
            v1 = v0;
        }
        arg0->unk11D4 += v1;
        return v1;
    }
    return 0;
}
