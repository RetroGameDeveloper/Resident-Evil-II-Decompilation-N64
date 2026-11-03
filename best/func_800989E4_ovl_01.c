typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
M2C_UNK func_8004789C_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_800478DC_ovl_01(s32, s32, M2C_UNK);
M2C_UNK func_800479EC_ovl_01(s32, M2C_UNK, M2C_UNK);
M2C_UNK func_800479F8_ovl_01(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK func_8006C0A0_ovl_01(M2C_UNK);
extern s32 D_800C527C_ovl_01;
extern s32 D_80112724_ovl_01;
extern M2C_UNK D_8012F55C_ovl_01;
void func_800989E4_ovl_01(s32 arg0) {
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    void *var_s0;
    if (D_80112724_ovl_01 != 0) {
        func_8006C0A0_ovl_01(0);
    }
    var_s1 = D_800C527C_ovl_01 + 0x3F800;
    var_s4 = 2;
    var_s3 = 0x40;
    func_800479F8_ovl_01((arg0 + 7) & ~7, &D_8012F55C_ovl_01, 0x15C2, 0);
    var_s3 -= 8;
    do {
        var_s4 -= 1;
        var_s2 = 2;
        var_s0 = var_s1 + 0xC;
loop_4:
        {
            s32 n = 0x80;
            func_8004789C_ovl_01(var_s1, n, n, n);
        }
        func_800478DC_ovl_01(var_s1, var_s3 & 0xFFFF, 0);
        {
            s32 n8 = 8;
            func_800479EC_ovl_01(var_s1, n8, n8);
        }
        M2C_FIELD(var_s0, s16 *, -2) = 0;
        M2C_FIELD(var_s0, s8 *, -9) = 0;
        M2C_FIELD(var_s0, M2C_UNK **, 0) = &D_8012F55C_ovl_01;
        var_s0 += 0x14;
        var_s2 -= 1;
        var_s1 += 0x14;
        if (var_s2 != 0) {
            goto loop_4;
        }
        var_s3 -= 8;
    } while (var_s4 != 0);
}
