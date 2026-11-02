s32 func_8017BB30_ovl_02(s32);
s32 func_8017BB68_ovl_02(s8);
extern s8 D_80184CFC_ovl_02[];
extern s8 D_80184D1C_ovl_02[];
extern s32 D_80185700_ovl_02;
s32 func_8017F7F0_ovl_02(void) {
    s32 count=0;
    s32 value;
    s32 index;
    s8 *table;
    for (;;) {
        value=func_8017BB30_ovl_02(11);
        if (value < 0x18) {
            if (value == 0xF) {
                func_8017BB68_ovl_02(11);
                continue;
            }
            count += 0x21;
            if (value == 8) {
                func_8017BB68_ovl_02(11);
                continue;
            }
            D_80185700_ovl_02=1;
            return 1;
        }
        if (value >= 0x400) {
            func_8017BB68_ovl_02(1);
            return count+1;
        }
        if (value < 0x80) {
            index=value-0x18;
            table=D_80184D1C_ovl_02;
        } else {
            index=value>>6;
            table=D_80184CFC_ovl_02;
        }
        table += index*2;
        func_8017BB68_ovl_02(table[1]);
        return count+table[0];
    }
}
