s32 func_80065F80_ovl_01(void *, s32);
s32 func_80066078_ovl_01(void *, s32, s32, s16);

void func_8006671C_ovl_01(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *saved_arg1;
    void *saved_arg3;
    s32 loop_counter;
    s32 const_1000;
    s32 call_result;
    s32 shifted_val;
    u16 loop_count;
    s32 accumulator;
    s32 temp_v0;
    s32 temp_v1;
    s16 temp_a3;

    saved_arg1 = arg1;
    saved_arg3 = arg3;
    loop_counter = 1;
    temp_v0 = *(s32*)((u8*)arg0 + 0x258);
    temp_v1 = *(s32*)((u8*)saved_arg3 + 0x0);
    func_80065F80_ovl_01(saved_arg1, temp_v1 + temp_v0);
    call_result = temp_v1 + temp_v0;
    shifted_val = (u32)*(s32*)((u8*)saved_arg3 + 0x4) >> 1;
    loop_count = *(u16*)((u8*)saved_arg3 + 0xA);
    accumulator = shifted_val;
    const_1000 = 0x1000;

    do {
        temp_a3 = *(s16*)((u8*)saved_arg3 + (loop_counter * 4) + 0x8);
        if (temp_a3 != 0) {
            func_80066078_ovl_01(saved_arg1, call_result + (accumulator * 2), const_1000 - temp_a3, temp_a3);
        }
        accumulator += shifted_val;
        loop_count -= 1;
        loop_counter += 1;
    } while (loop_count != 0);
}
