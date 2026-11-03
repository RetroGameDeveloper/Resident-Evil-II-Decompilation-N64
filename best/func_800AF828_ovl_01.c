/* func_800AF828_ovl_01 */
extern u32 func_800AB4A4_ovl_01(u32 *);
extern u32 func_800AB4B4_ovl_01(u32 *, void *);

void func_800AF828_ovl_01(void *arg0, void *arg1) {
    u32 sp10;
    u32 temp_v0;
    u32 temp_a0;
    u32 temp_v1;
    s32 var_a2;
    u8 *v0 = (u8 *)arg1;

    if (v0[0] & 3) {
        ((u32 *)arg0)[4] = ((u32 *)arg0)[4] | 0x8000;
    } else {
        ((u32 *)arg0)[4] = ((u32 *)arg0)[4] & 0xFFFF7FFF;
    }
    sp10 = (u32)(u16)((u32 *)arg1)[4];
    if (((u32 *)arg1)[4] >> 8 & 1) {
        func_800AB4A4_ovl_01(&sp10);
    } else {
        func_800AB4B4_ovl_01(&sp10, arg0);
    }
    if (sp10 == 0) {
        ((u32 *)arg0)[4] = ((u32 *)arg0)[4] & ~0x4000;
    } else {
        ((u32 *)arg0)[70] = sp10;
        ((u32 *)arg0)[4] = ((u32 *)arg0)[4] | 0x4000;
        temp_v0 = ((u32 *)arg1)[0];
        temp_a0 = temp_v0 >> 8;
        temp_v1 = temp_v0 >> 0x10;
        var_a2 = temp_a0;
        if ((s8)temp_a0 < 0) {
            if (!(temp_v1 & 0x80)) {
                ((s8 *)arg0)[0x79] = (s8)temp_v1;
            } else {
                ((s8 *)arg0)[0x79] = (s8) -(s8)temp_v1;
            }
            ((s8 *)arg0)[0x78] = (s8) -(s8)var_a2;
            ((u32 *)arg0)[0x6C] = (u32)((u32)((u32 *)arg0)[70] >> 1);
        } else {
            if (!(temp_v1 & 0x80)) {
                ((s8 *)arg0)[0x79] = (s8)temp_v1;
            } else {
                var_a2 = temp_a0 - 1;
                ((s8 *)arg0)[0x79] = (s8)(0x64 - temp_v1);
                ((u32 *)arg0)[0x6C] = 0U;
            }
            ((s8 *)arg0)[0x78] = (s8)var_a2;
        }
    }
}
