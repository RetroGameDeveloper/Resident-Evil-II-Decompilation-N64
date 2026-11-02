extern s32 D_800E10D0_ovl_01;
s32 func_80167730_ovl_30(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0;
    s32 result;
    temp_v0 = func_8016758C_ovl_30();
    if (temp_v0 == 0) goto no_work;
    temp_a0 = 0x14;
    if (arg1 & 2) temp_a0 = 0xA;
    temp_v0 = func_80059E30_ovl_01(temp_a0, 0);
    if (temp_v0 == 2) goto special;
    temp_s1 = (s32)&D_800E10D0_ovl_01;
    if (arg1 != 0) {
        temp_v0 = func_80033174_ovl_01(arg0, (s32 *)temp_s1);
        func_8016753C_ovl_30(arg0, 2, temp_v0 & 0xFF);
    } else {
        temp_v0 = func_80033174_ovl_01(arg0, (s32 *)temp_s1);
        temp_v0 += 2;
        func_80167518_ovl_30(temp_v0 & 0xFF);
    }
    func_80052C00_ovl_01(8, 0);
    func_80052C9C_ovl_01(8, 0xFA, 4);
    *(s16 *)(temp_s1 + 0x1F4) = arg1 & 1;
    result = 1;
    goto done;
special:
    func_8016756C_ovl_30();
    result = -1;
    goto done;
no_work:
    result = 0;
done:
    return result;
}
