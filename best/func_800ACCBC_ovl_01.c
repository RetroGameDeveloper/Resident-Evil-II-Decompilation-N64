static __inline__ int __repair_inline(s32 a, s32 b) { return a > b; }
typedef struct { s32 unk0; u16 unk4; u16 unk6; } Entry;
extern Entry D_80152190[];
extern s32 D_80152180;
void func_800A5618_ovl_01(void);
void func_800A5660_ovl_01(void);
s32 func_800ACCBC_ovl_01(u32 id) {
    s32 i;
    s32 count;
    s32 j;
    Entry *e;
    func_800A5618_ovl_01();
    i = 0;
    count = D_80152180;
    if (__repair_inline(count, 0)) {
        e = D_80152190;
        while (i < count && e->unk4 != (id & 0xFFFF)) {
            i++;
            e++;
        }
    }
    if (i != D_80152180) {
        e = &D_80152190[i];
        e->unk6--;
        if (e->unk6 == 0) {
            if (i + 1 < D_80152180) {
                for (j = i + 1; j < D_80152180; j++) {
                    D_80152190[j-1] = D_80152190[j];
                }
            }
            D_80152180--;
            func_800A5660_ovl_01();
            return 1;
        }
    }
    func_800A5660_ovl_01();
    return 0;
}
