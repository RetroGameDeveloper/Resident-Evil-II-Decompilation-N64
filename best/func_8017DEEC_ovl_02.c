/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_8017BB30_ovl_02(M2C_UNK);                  /* extern */
M2C_UNK func_8017BB68_ovl_02(M2C_UNK);              /* extern */
M2C_UNK func_8017BD0C_ovl_02();                     /* extern */
s32 func_8017BE48_ovl_02(M2C_UNK);                  /* extern */
M2C_UNK func_8017BEB0_ovl_02(s32, s32 *);           /* extern */
M2C_UNK func_8017C30C_ovl_02(s32);                  /* extern */
M2C_UNK func_8017C708_ovl_02(s32, s32 *);           /* extern */
M2C_UNK func_8017CC14_ovl_02(s32);                  /* extern */
M2C_UNK func_8017D194_ovl_02();                     /* extern */
s32 func_8017D4A4_ovl_02();                         /* extern */
M2C_UNK func_8017EB38_ovl_02(s32 *, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *); /* extern */
M2C_UNK func_8017ED64_ovl_02(s32);                  /* extern */
M2C_UNK func_8017EE08_ovl_02(s32);                  /* extern */
M2C_UNK func_8017EE54_ovl_02(s32, s32, s32, s32, s32); /* extern */
s32 func_8017F75C_ovl_02();                         /* extern */
s32 func_8017F7F0_ovl_02();                         /* extern */
M2C_UNK func_8017FEF8_ovl_02(void *);               /* extern */
M2C_UNK func_801800D0_ovl_02(s32 *, M2C_UNK *, s32 *, M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80180228_ovl_02(s32 *, M2C_UNK *, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80181820_ovl_02(s32, s32, s32, s32, s32 *, s32 *, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_801854E0_ovl_02;
extern s32 D_801856CC_ovl_02;
extern s32 D_801856D0_ovl_02;
extern s32 D_801856DC_ovl_02;
extern s32 D_801856E8_ovl_02;
extern s32 D_801856EC_ovl_02;
extern s32 D_801856F0_ovl_02;
extern s32 D_801856F4_ovl_02;
extern s32 D_801856F8_ovl_02;
extern s32 D_801856FC_ovl_02;
extern s32 D_80185700_ovl_02;
extern s32 D_8018570C_ovl_02;
extern s32 D_80185710_ovl_02;
extern s32 D_80185714_ovl_02;
extern s32 D_80185718_ovl_02;
extern s32 D_80185720_ovl_02;
extern s32 D_8018572C_ovl_02;
extern s32 D_80185790_ovl_02;
extern M2C_UNK D_801857A4_ovl_02;
extern M2C_UNK D_801861DC_ovl_02;
extern s32 D_801865FC_ovl_02;
extern M2C_UNK *D_80186C14_ovl_02;

void func_8017DEEC_ovl_02(void) {
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    M2C_UNK sp68;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 sp9C;
    s32 spA0;
    s32 spA4;
    s32 spA8;
    s32 spAC;
    s32 spB0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_lo;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    temp_lo = D_801856CC_ovl_02 * D_801856D0_ovl_02;
    spA4 = temp_lo;
    if (D_80185720_ovl_02 == 3) {
        goto block_2;
    }
    spA4 = temp_lo >> 1;
block_2:
    spA0 = 0;
    spA8 = 0;
    if (D_80185790_ovl_02 == 0) {
        goto block_5;
    }
    if (D_801865FC_ovl_02 != 3) {
        goto block_6;
    }
    spAC = 0;
    spB0 = 0;
block_5:
block_6:
    D_80185700_ovl_02 = 0;
loop_7:
    D_80186C14_ovl_02 = &D_801857A4_ovl_02;
    if (spA8 != 0) {
        goto block_26;
    }
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x420) != 1) {
        goto block_11;
    }
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x430) != 1) {
        goto block_11;
    }
    D_80186C14_ovl_02 = &D_801861DC_ovl_02;
block_11:
    if (func_8017BB30_ovl_02(0x17) == 0) {
        goto loop_13;
    }
    if (D_80185700_ovl_02 == 0) {
        goto block_21;
    }
loop_13:
    D_80185700_ovl_02 = 0;
    D_80186C14_ovl_02 = &D_801857A4_ovl_02;
    if (spA0 >= spA4) {
        goto block_157;
    }
    func_8017D194_ovl_02();
    var_s0 = func_8017BB30_ovl_02(0x20);
    if ((u32) (var_s0 - 0x101) >= 0xAFU) {
        goto block_157;
    }
    func_8017BD0C_ovl_02();
    var_s1 = func_8017D4A4_ovl_02();
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x420) != 1) {
        goto block_19;
    }
    D_80186C14_ovl_02 = &D_801861DC_ovl_02;
    func_8017D194_ovl_02();
    var_s0 = func_8017BB30_ovl_02(0x20);
    if ((u32) (var_s0 - 0x101) >= 0xAFU) {
        goto block_157;
    }
    func_8017BD0C_ovl_02();
    var_s1 = func_8017D4A4_ovl_02();
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x430) == 1) {
        goto block_19;
    }
    D_80186C14_ovl_02 = &D_801857A4_ovl_02;
block_19:
    spA8 = func_8017F7F0_ovl_02();
    if (D_80185700_ovl_02 != 0) {
        goto loop_13;
    }
    sp30 = 0;
    sp2C = 0;
    sp28 = 0;
    sp4C = 0;
    sp48 = 0;
    sp3C = 0;
    sp38 = 0;
    sp54 = 0;
    sp50 = 0;
    sp44 = 0;
    sp40 = 0;
    spA0 = (((((var_s1 << 7) + (var_s0 & 0xFF)) - 1) * D_801856CC_ovl_02) + spA8) - 1;
    spA8 = 1;
    goto block_26;
block_21:
    if (spA0 >= spA4) {
        goto block_157;
    }
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x420) != 1) {
        goto block_25;
    }
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x430) != 1) {
        goto block_25;
    }
    D_80186C14_ovl_02 = &D_801861DC_ovl_02;
block_25:
    spA8 = func_8017F7F0_ovl_02();
    if (D_80185700_ovl_02 != 0) {
        goto loop_13;
    }
block_26:
    if (spA0 >= spA4) {
        goto block_157;
    }
    if (spA8 != 1) {
        goto block_96;
    }
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x420) != spA8) {
        goto block_33;
    }
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x430) < 3) {
        goto block_31;
    }
    D_80186C14_ovl_02 = &D_801857A4_ovl_02;
    goto block_33;
block_31:
    D_80186C14_ovl_02 = &D_801861DC_ovl_02;
block_33:
    func_8017EB38_ovl_02(&sp70, &sp74, &sp78, &sp7C, &sp80, &sp84, &sp88, &sp8C, &sp90);
    if (D_80185700_ovl_02 != 0) {
        goto loop_13;
    }
    if (!(sp70 & 0x10)) {
        goto block_42;
    }
    temp_a1 = func_8017BE48_ovl_02(5);
    if (M2C_FIELD(D_80186C14_ovl_02, s32 *, 0x41C) == 0) {
        goto block_39;
    }
    if (M2C_FIELD(D_80186C14_ovl_02, s32 *, 0x424) == 0) {
        goto block_38;
    }
    M2C_FIELD(D_80186C14_ovl_02, s32 *, 0x434) = (s32) *(temp_a1 + &D_801854E0_ovl_02);
    goto block_40;
block_38:
    M2C_FIELD(D_80186C14_ovl_02, s32 *, 0x434) = (s32) (temp_a1 * 2);
    goto block_40;
block_39:
    M2C_FIELD(D_80186C14_ovl_02, s32 *, 0x434) = temp_a1;
block_40:
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x420) != 1) {
        goto block_42;
    }
    M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x434) = (s32) M2C_FIELD(D_80186C14_ovl_02, s32 *, 0x434);
block_42:
    if (sp70 & 8) {
        goto block_45;
    }
    if (!(sp70 & 1)) {
        goto block_48;
    }
    if (D_8018572C_ovl_02 == 0) {
        goto block_49;
    }
block_45:
    if (M2C_FIELD(D_80186C14_ovl_02, s32 *, 0x41C) == 0) {
        goto block_47;
    }
    func_801800D0_ovl_02(&sp38, &sp68, &sp58, 0, sp80, sp84, D_8018570C_ovl_02, D_80185710_ovl_02, sp88, sp8C);
    goto block_49;
block_47:
    func_80180228_ovl_02(&sp38, &sp68, D_801856F0_ovl_02, D_801856F0_ovl_02, 0, 0, D_801856F8_ovl_02);
block_48:
block_49:
    if (D_80185700_ovl_02 != 0) {
        goto loop_13;
    }
    if (!(sp70 & 4)) {
        goto block_54;
    }
    if (M2C_FIELD(D_80186C14_ovl_02, s32 *, 0x41C) == 0) {
        goto block_53;
    }
    func_801800D0_ovl_02(&sp38, &sp68, &sp58, 1, sp80, sp84, D_80185714_ovl_02, D_80185718_ovl_02, 0, sp8C);
    goto block_54;
block_53:
    func_80180228_ovl_02(&sp40, &sp68, D_801856F4_ovl_02, D_801856F4_ovl_02, 0, 0, D_801856FC_ovl_02);
block_54:
    if (D_80185700_ovl_02 != 0) {
        goto loop_13;
    }
    if (!(sp70 & 1)) {
        goto block_58;
    }
    if (D_8018572C_ovl_02 == 0) {
        goto block_58;
    }
    func_8017BB68_ovl_02(1);
block_58:
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x420) != 1) {
        goto block_61;
    }
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x430) != 3) {
        goto block_61;
    }
    D_80186C14_ovl_02 = &D_801861DC_ovl_02;
block_61:
    if (!(sp70 & 2)) {
        goto block_66;
    }
    var_s3 = func_8017F75C_ovl_02();
    if (D_801856DC_ovl_02 != 2) {
        goto block_64;
    }
    var_s3 = (var_s3 * 4) | func_8017BE48_ovl_02(2);
    goto block_69;
block_64:
    if (D_801856DC_ovl_02 != 3) {
        goto block_70;
    }
    var_s3 = (var_s3 << 6) | func_8017BE48_ovl_02(6);
    goto block_69;
block_66:
    if (!(sp70 & 1)) {
        goto block_68;
    }
    var_s3 = (1 << D_801856E8_ovl_02) - 1;
    goto block_69;
block_68:
    var_s3 = 0;
block_69:
block_70:
    if (D_80185700_ovl_02 != 0) {
        goto loop_13;
    }
    var_s0_2 = 0;
    if (D_801856E8_ovl_02 <= 0) {
        goto block_84;
    }
loop_72:
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x420) != 1) {
        goto block_74;
    }
    D_80186C14_ovl_02 = &D_801857A4_ovl_02;
block_74:
    func_8017ED64_ovl_02(var_s0_2);
    if (!((var_s3 >> (D_801856E8_ovl_02 - (var_s0_2 + 1))) & 1)) {
        goto block_83;
    }
    if (!(sp70 & 1)) {
        goto block_79;
    }
    if (M2C_FIELD(D_80186C14_ovl_02, s32 *, 0x41C) == 0) {
        goto block_78;
    }
    func_8017C708_ovl_02(var_s0_2, &sp28);
    goto block_82;
block_78:
    func_8017BEB0_ovl_02(var_s0_2, &sp28);
    goto block_82;
block_79:
    if (M2C_FIELD(D_80186C14_ovl_02, s32 *, 0x41C) == 0) {
        goto block_81;
    }
    func_8017CC14_ovl_02(var_s0_2);
    goto block_82;
block_81:
    func_8017C30C_ovl_02(var_s0_2);
block_82:
    if (D_80185700_ovl_02 != 0) {
        goto loop_13;
    }
block_83:
    var_s0_2 += 1;
    if (var_s0_2 < D_801856E8_ovl_02) {
        goto loop_72;
    }
block_84:
    if (sp70 & 1) {
        goto block_86;
    }
    sp30 = 0;
    sp2C = 0;
    sp28 = 0;
    goto block_88;
block_86:
    if (D_8018572C_ovl_02 != 0) {
        goto block_89;
    }
    sp4C = 0;
    sp48 = 0;
    sp3C = 0;
    sp38 = 0;
    sp54 = 0;
    sp50 = 0;
    sp44 = 0;
    sp40 = 0;
block_88:
block_89:
    if (D_801856EC_ovl_02 != 2) {
        goto block_94;
    }
    if (sp70 & 9) {
        goto block_94;
    }
    sp4C = 0;
    sp48 = 0;
    sp3C = 0;
    sp38 = 0;
    if (D_80185720_ovl_02 != 3) {
        goto block_93;
    }
    sp7C = 2;
    goto block_94;
block_93:
    sp7C = 1;
    sp58 = D_80185720_ovl_02 == 2;
block_94:
    if (sp78 != 4) {
        goto block_107;
    }
    sp4C = 0;
    sp48 = 0;
    sp3C = 0;
    sp38 = 0;
    sp54 = 0;
    sp50 = 0;
    sp44 = 0;
    sp40 = 0;
    goto block_107;
block_96:
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x420) != 1) {
        goto block_98;
    }
    D_80186C14_ovl_02 = &D_801857A4_ovl_02;
block_98:
    var_s0_3 = 0;
    if (D_801856E8_ovl_02 <= 0) {
        goto block_101;
    }
loop_100:
    func_8017ED64_ovl_02(var_s0_3);
    var_s0_3 += 1;
    if (var_s0_3 < D_801856E8_ovl_02) {
        goto loop_100;
    }
block_101:
    sp30 = 0;
    sp2C = 0;
    sp28 = 0;
    if (D_801856EC_ovl_02 != 2) {
        goto block_103;
    }
    sp4C = 0;
    sp48 = 0;
    sp3C = 0;
    sp38 = 0;
block_103:
    if (D_80185720_ovl_02 != 3) {
        goto block_105;
    }
    sp7C = 2;
    goto block_106;
block_105:
    temp_v0 = D_80185720_ovl_02 == 2;
    sp7C = 1;
    sp5C = temp_v0;
    sp58 = temp_v0;
block_106:
    var_s3 = 0;
    sp74 = (D_801856EC_ovl_02 == 1) * 8;
    sp70 &= ~1;
block_107:
    var_s2 = 0;
    if (D_80185790_ovl_02 == 0) {
        goto block_140;
    }
    if (M2C_FIELD(&D_801861DC_ovl_02, s32 *, 0x420) != 3) {
        goto block_141;
    }
    D_80186C14_ovl_02 = &D_801861DC_ovl_02;
    if (spB0 != 0) {
        goto block_115;
    }
    if (func_8017BB30_ovl_02(0x17) != 0) {
        goto block_113;
    }
    func_8017D194_ovl_02();
    temp_v0_2 = func_8017BB30_ovl_02(0x20);
    if ((u32) (temp_v0_2 - 0x101) >= 0xAFU) {
        goto block_157;
    }
    func_8017BD0C_ovl_02();
    temp_s1 = func_8017D4A4_ovl_02();
    temp_v0_3 = func_8017F7F0_ovl_02();
    spB0 = 1;
    spAC = (((((temp_s1 << 7) + (temp_v0_2 & 0xFF)) - 1) * D_801856CC_ovl_02) + temp_v0_3) - 1;
    goto block_115;
block_113:
    if (spAC >= spA4) {
        goto block_157;
    }
    spB0 = func_8017F7F0_ovl_02();
block_115:
    if (spAC != spA0) {
        goto block_157;
    }
    if (spB0 != 1) {
        goto block_136;
    }
    func_8017EB38_ovl_02(&sp94, &sp98, &sp98, &sp98, &sp98, &sp98, &sp98, &sp98, &sp9C);
    var_v0 = sp94 & 0x10;
    if (!(sp94 & 2)) {
        goto block_119;
    }
    sp90 = sp9C;
    var_v0 = sp94 & 0x10;
block_119:
    if (var_v0 == 0) {
        goto block_123;
    }
    temp_a1_2 = func_8017BE48_ovl_02(5);
    if (M2C_FIELD(D_80186C14_ovl_02, s32 *, 0x424) == 0) {
        goto block_122;
    }
    M2C_FIELD(D_80186C14_ovl_02, s32 *, 0x434) = (s32) *(temp_a1_2 + &D_801854E0_ovl_02);
    goto block_123;
block_122:
    M2C_FIELD(D_80186C14_ovl_02, s32 *, 0x434) = (s32) (temp_a1_2 * 2);
block_123:
    if (sp94 & 2) {
        goto block_125;
    }
    var_s2 = 0;
    goto block_130;
block_125:
    var_s2 = func_8017F75C_ovl_02();
    if (D_801856DC_ovl_02 != 2) {
        goto block_128;
    }
    var_s2 = (var_s2 * 4) | func_8017BE48_ovl_02(2);
    goto block_130;
block_128:
    if (D_801856DC_ovl_02 != 3) {
        goto block_131;
    }
    var_s2 = (var_s2 << 6) | func_8017BE48_ovl_02(6);
block_130:
block_131:
    var_s0_4 = 0;
    if (D_801856E8_ovl_02 <= 0) {
        goto block_139;
    }
loop_132:
    func_8017ED64_ovl_02(var_s0_4);
    temp_s1_2 = var_s0_4 + 1;
    if (!((var_s2 >> (D_801856E8_ovl_02 - temp_s1_2)) & 1)) {
        goto block_134;
    }
    func_8017CC14_ovl_02(var_s0_4);
block_134:
    var_s0_4 = temp_s1_2;
    if (var_s0_4 < D_801856E8_ovl_02) {
        goto loop_132;
    }
    D_80186C14_ovl_02 = &D_801857A4_ovl_02;
    goto block_140;
block_136:
    var_s0_5 = 0;
    if (D_801856E8_ovl_02 <= 0) {
        goto block_139;
    }
loop_138:
    func_8017ED64_ovl_02(var_s0_5);
    var_s0_5 += 1;
    if (var_s0_5 < D_801856E8_ovl_02) {
        goto loop_138;
    }
block_139:
    D_80186C14_ovl_02 = &D_801857A4_ovl_02;
block_140:
block_141:
    temp_s5 = (spA0 % (s32) D_801856CC_ovl_02) * 0x10;
    temp_s4 = (spA0 / (s32) D_801856CC_ovl_02) * 0x10;
    if (sp70 & 1) {
        goto block_143;
    }
    func_80181820_ovl_02(temp_s5, temp_s4, sp70, sp7C, &sp38, &sp58, &sp68, sp74);
block_143:
    if (M2C_FIELD(&D_801857A4_ovl_02, s32 *, 0x420) != 1) {
        goto block_145;
    }
    D_80186C14_ovl_02 = &D_801857A4_ovl_02;
block_145:
    var_s0_6 = 0;
    if (D_801856E8_ovl_02 <= 0) {
        goto block_154;
    }
    var_s1_2 = 0x438;
loop_147:
    temp_v1 = D_801856E8_ovl_02 - (var_s0_6 + 1);
    if (!(((s32) (var_s3 | var_s2) >> temp_v1) & 1)) {
        goto block_153;
    }
    if (D_80185790_ovl_02 == 0) {
        goto block_152;
    }
    if (M2C_FIELD(&D_801861DC_ovl_02, s32 *, 0x420) != 3) {
        goto block_152;
    }
    if (!((var_s2 >> temp_v1) & 1)) {
        goto block_152;
    }
    func_8017EE08_ovl_02(var_s0_6);
block_152:
    func_8017FEF8_ovl_02(D_80186C14_ovl_02 + var_s1_2);
    func_8017EE54_ovl_02(var_s0_6, temp_s5, temp_s4, sp90, (sp70 ^ 1) & 1);
block_153:
    var_s0_6 += 1;
    var_s1_2 += 0x80;
    if (var_s0_6 < D_801856E8_ovl_02) {
        goto loop_147;
    }
block_154:
    spA0 += 1;
    spA8 -= 1;
    if (D_80185790_ovl_02 == 0) {
        goto loop_7;
    }
    if (M2C_FIELD(&D_801861DC_ovl_02, s32 *, 0x420) != 3) {
        goto loop_7;
    }
    spAC += 1;
    spB0 -= 1;
    goto loop_7;
block_157:
    return;
}
