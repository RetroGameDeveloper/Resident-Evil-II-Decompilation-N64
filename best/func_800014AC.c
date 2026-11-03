typedef struct S800138B0 { s32 unk0; s32 pad; s32 unk8; } S800138B0;
extern S800138B0 D_800138B0[];
extern u32 D_80013EB4;

void func_800014AC(s32 arg0) {
    s32 i = 0;
    if (D_80013EB4 != 0) {
        volatile u32 *cnt = &D_80013EB4;
        S800138B0 *p = D_800138B0;
loop:
        if (arg0 == p->unk0) {
            if (i == *cnt) {
                p->unk8 = 0;
                *cnt = i - 1;
                return;
            } else {
                return;
            }
        } else {
            i += 1;
            p += 1;
            if (i < *cnt) {
                goto loop;
            }
        }
    }
}
