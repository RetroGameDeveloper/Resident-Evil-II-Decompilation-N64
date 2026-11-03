typedef struct S800138B0 { s32 unk0; s32 unk4; s32 unk8; } S800138B0;
extern S800138B0 D_800138B0[];
extern s32 D_800138A4;
extern s32 D_80013EB0;
extern u32 D_80013EB4;

s32 func_800013D4(u32 size) {
    u32 i;
    S800138B0 *p;
    s32 base;
    u32 last;
    s32 used;

    if (size & 3) size = (size + 7) & ~7;

    if (D_80013EB4 != 0) {
        used = 1;
        last = D_80013EB4 - 1;
        p = D_800138B0;
        i = 0;
        do {
            if (p->unk8 == 0 && p->unk4 >= size) {
                p->unk8 = used;
                if (i == last) {
                    p->unk4 = size;
                }
                return p->unk0;
            }
            i++;
            p++;
        } while (i < D_80013EB4);
    }

    base = D_800138A4;
    {
        u32 count = D_80013EB4;
        S800138B0 *basep = D_800138B0;
        p = basep + count;
        p->unk0 = base;
        p->unk4 = size;
        p->unk8 = 1;
        D_80013EB4 = count + 1;
    }
    D_800138A4 = base + size;
    D_80013EB0 = base + size;
    return base;
}
