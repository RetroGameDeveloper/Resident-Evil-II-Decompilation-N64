extern s32 D_800E1008;
s32 func_80066804_ovl_01(s32, s16, s32, s32);

typedef struct S_ent { u8 pad[0xC]; u32 unk_0C; } S_ent;

s32 func_80166E50_ovl_17(u8 *arg0, s16 arg1) {
    S_ent **p;
    if (func_80066804_ovl_01((s32)(arg0 + 0x28), arg1, 1 << arg0[0x1A2], 0x400) != 0) {
        if (D_800E1008 != 0) {
            s32 idx = *(s32 *)(arg0 + 0x2C4);
            s32 thresh;
            p = (S_ent **)&D_800E1008;
            do {
                if ((s32)*p != idx) {
                    thresh = -(*(s32 *)(arg0 + 0x2C)) / 1800;
                    if ((*p)->unk_0C >= (u32)thresh)
                        return 1;
                }
                p++;
            } while (*p != 0);
        }
    }
    return 0;
}
