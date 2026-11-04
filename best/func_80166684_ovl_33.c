extern s32 func_80032D44_ovl_01(s16, s16, s16, s16);

void func_80166684_ovl_33(S_func_80163254_ovl_33_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 ret;
    u16 timer;
    s32 x;
    u16 d;

    ret = func_80032D44_ovl_01(arg0->unk_2E, (s16)(-arg0->unk_32), arg1, (s16)(-arg2));
    timer = arg0->unk_64;
    x = (arg3 + (ret - timer)) & 0xFFF;
    if (x < ((arg3 << 16) >> 15)) {
        arg0->unk_64 = ret;
    } else {
        d = timer - arg3;
        arg0->unk_64 = d;
        if ((u32)x < 0x801U) {
            arg0->unk_64 = d + (arg3 << 1);
        }
    }
}
