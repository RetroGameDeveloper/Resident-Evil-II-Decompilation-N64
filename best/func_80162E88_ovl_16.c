void func_80162E88_ovl_16(void *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 var_t0;
    void *var_v1;

    var_t0 = 0;
    if (arg1 != 0) {
        var_v1 = *(void **)((u8 *)arg0 + 0x234);
        do {
            var_t0 += 1;
            *(s32 *)((u8 *)var_v1 + 0x60) = (*(s32 *)((u8 *)var_v1 + 0x60) & 0xFF000000) | ((arg3 << 8) | (arg4 << 0x10) | arg2);
            var_v1 = (u8 *)var_v1 + 0x178;
        } while (var_t0 < arg1);
    }
}
