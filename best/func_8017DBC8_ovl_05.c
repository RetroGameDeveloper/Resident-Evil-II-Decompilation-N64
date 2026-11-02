extern u8 D_8017E55C_ovl_05[];
extern u8 D_8017DDA0_ovl_05[];
extern u8 D_8017DECC_ovl_05[];
void func_8017DBC8_ovl_05(s32 arg0, u32 arg1, s32 arg2) {
    u8 *buf;
    s32 q;
    s32 idx;
    s32 a;
    u32 n;
    a = arg0;
    n = arg1;
    if (n != 0) {
        if (n >= 0x64) {
            buf = D_8017E55C_ovl_05 + a;
            buf[0] = 0x17;
            buf[1] = 0x17;
            buf[2] = 0x18;
        } else {
            q = n / 10;
            if (q != 0) {
                buf = D_8017E55C_ovl_05 + a;
                buf[1] = q + 0x17;
            } else {
                buf = D_8017E55C_ovl_05 + a;
                buf[1] = 0x37;
            }
            buf = D_8017E55C_ovl_05 + a;
            buf[0] = n % 10 + 0x17;
            buf[2] = 0x37;
        }
        if (a != 0) {
            idx = D_8017DDA0_ovl_05[arg2 * 2] + 6;
        } else {
            idx = D_8017DDA0_ovl_05[arg2 * 2] + 5;
        }
        D_8017DECC_ovl_05[idx * 8] = 0;
    } else {
        buf = D_8017E55C_ovl_05 + a;
        buf[0] = 0xFF;
        buf[1] = 0xFF;
        buf[2] = 0xFF;
        if (a != 0) {
            idx = D_8017DDA0_ovl_05[arg2 * 2] + 6;
        } else {
            idx = D_8017DDA0_ovl_05[arg2 * 2] + 5;
        }
        D_8017DECC_ovl_05[idx * 8] = 1;
    }
}
