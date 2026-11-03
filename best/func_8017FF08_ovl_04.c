extern u8 D_80180A58_ovl_04[];
extern u8 D_80180A64_ovl_04[];
extern s32 D_80181F14_ovl_04[];
extern s32 D_80131EB0;

s32 func_800879D0_ovl_01(void *);
s32 func_8000CB60(s32 *, s32, s32);

s32 func_8017FF08_ovl_04(s32 arg0) {
    s32 n;
    s32 *data = D_80181F14_ovl_04;

    *(s32 *)(D_80180A58_ovl_04 + 4) = 5;
    *(void **)(D_80180A58_ovl_04 + 8) = D_80180A64_ovl_04;
    n = arg0 >> 4;
    *(s32 *)D_80180A64_ovl_04 = n;
    *(void **)(D_80180A64_ovl_04 + 4) = D_80180A58_ovl_04;
    *(s32 **)(D_80180A64_ovl_04 + 8) = data;
    if (n == 0) {
        *(s32 *)D_80180A58_ovl_04 = 0;
        goto common;
    }
    if (D_80131EB0 != 0) {
        func_800879D0_ovl_01(D_80180A58_ovl_04 + 4);
        return 1;
    }
    *(s32 *)D_80180A58_ovl_04 = 10;
common:
    func_8000CB60(data, 0, 0);
    return 1;
}
