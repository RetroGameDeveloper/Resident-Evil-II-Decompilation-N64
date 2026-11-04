typedef struct S_func_800307F8_ovl_01_arg1 {
    s32 *unk0;
    s32 unk04;
    s32 unk08;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 unk_1C[0xC];
    s32 (*unk28)(s32, void *, s32, s32);
    s32 (*unk2C)(s32, void *, s32, s32);
} S_func_800307F8_ovl_01_arg1;

void func_800307F8_ovl_01(s32 arg0, void *arg1, s32 arg2) {
int __repair_literal;

    S_func_800307F8_ovl_01_arg1 *a1 = arg1;
    s32 p0 = arg0;
    s32 p2 = arg2;
    s32 temp_s4 = a1->unk08 << 7;
    s32 s3 = a1->unk18 * temp_s4;
    s32 i;
    s32 s2;

    i = 0;
__repair_literal = 0;


    if (a1->unk10 > __repair_literal) {
        do {
            s32 m = a1->unk10 - i;

            if (a1->unk14 < m) {
                m = a1->unk14;
            }
            {
                s32 d = a1->unk04 - (a1->unk18 + i);
                if (m < d) {
                    d = m;
                }

                s2 = d * temp_s4;
                if (d <= 0) {
                    return;
                }
            }

            if (p2 == 0) {
                a1->unk28(p0, (void *)&a1->unk28, a1->unk0[i], s3);
            } else {
                a1->unk2C(p0, (void *)&a1->unk28, a1->unk0[i], s3);
            }

            i += a1->unk14;
            if (i < a1->unk10) {
                s3 += s2;
            } else {
                break;
            }
        } while (1);
    }
}
