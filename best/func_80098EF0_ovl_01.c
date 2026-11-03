/* with explicit prototype matching context.h declaration */
#ifndef FUNC_800990B4_PROTO
#define FUNC_800990B4_PROTO
s32 func_800990B4_ovl_01(s32, s32, s32, s32);
#endif

extern s32 D_800C7650_ovl_01;
extern s32 D_800E7650_ovl_01;
extern s32 D_8012BF38_ovl_01;
extern s32 D_8012C0B0_ovl_01;
extern s32 D_8012F8A8_ovl_01;
extern s32 D_8012F8AC_ovl_01;
extern s32 D_80131438_ovl_01;
extern s32 D_80131444_ovl_01;
extern s32 D_801314F0_ovl_01;

void func_80098EF0_ovl_01(void) {
    s32 var_s1 = 4;
    s32 var_s6 = (s32)&D_8012BF38_ovl_01 + 0x2AE8;
    s32 var_s7 = 0x1E;
    s32 var_s0;
    s32 temp_a0;
    s32 var_a3;
    s32 var_a1;

    var_s1 = 4;
    var_s7 = 0x1E;
    do {
        var_s6 -= 0xAA0;
        var_s1 -= 1;
        func_80042B24_ovl_01(0);
        func_800990B4_ovl_01(var_s6, 0, var_s1, 0);
        var_s0 = (var_s1 != 3) ? 8 : 0x10;

loop_4:
        var_s0 -= 1;
        temp_a0 = ((var_s7 + var_s0) * 0x110) + (s32)&D_8012C0B0_ovl_01;
        if (var_s1 == ((s32)D_8012BF38_ovl_01 + 0x11)) {
            if (var_s0 == ((s32)D_8012BF38_ovl_01 + 0x12)) {
                temp_a0 = (s32)D_8012F8A8_ovl_01;
            } else {
                goto block_8;
            }
        } else {
block_8:
            temp_a0 = (s32)D_8012F8AC_ovl_01;
        }
        var_a3 = 3;
        if (var_s1 != 3) {
            var_a3 = (s32)&D_800C7650_ovl_01;
            var_a1 = 1;
            goto block_14;
        } else if (((s32)D_800E7650_ovl_01 + 0x196B) != 0xFF) {
            var_a1 = 2;
            if (var_s0 < (u8)((s32)D_800E7650_ovl_01 + 0x196B)) {
block_14:
                func_800990B4_ovl_01(temp_a0, var_a1, var_s0, var_a3);
            }
        }
        if (var_s0 != 0) {
            goto loop_4;
        }
        func_80042B08_ovl_01();
        var_s7 -= 0xA;
    } while (var_s1 != 0);
}
