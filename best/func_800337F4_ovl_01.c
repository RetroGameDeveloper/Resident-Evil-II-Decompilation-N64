typedef struct Blob28_800337F4 {
    u64 a;
    u64 b;
    u64 c;
    u32 d;
} Blob28_800337F4;

extern u8 D_80138640[];
extern u8 D_800EB900_ovl_01[];
extern u8 D_800B864C_ovl_01[];
extern u8 D_800DFBB4_ovl_01[];
extern u8 D_801379B0[];

s32 func_80004CFC(s32 arg0, void *arg1, s32 arg2, void *arg3);
s32 func_800824A4_ovl_01(void *arg0, void *arg1, s32 arg2);

void func_800337F4_ovl_01(void) {
    u8 *eb;
    u8 *dst;
    u8 *src;
    u8 *p;
    s32 t0;
    s32 size;
    s32 i;
    s32 n;

    func_80004CFC(0x1EC2, D_80138640, 1, D_800B864C_ovl_01);
    *(Blob28_800337F4 *)D_800EB900_ovl_01 = *(Blob28_800337F4 *)D_80138640;
    eb = D_800EB900_ovl_01;
    t0 = (*(s32 *)(eb + 4) * *(s32 *)(eb + 8)) >> 1;
    size = (*(s32 *)(eb + 0xC) * *(s32 *)(eb + 0x10)) << 1;
    dst = (u8 *)(((u32)(D_80138640 + 0x1B)) & ~7);
    *(s32 *)(eb + 0x14) = (s32)dst;
    if (dst != D_80138640 + 0x14) {
        n = t0 + size - 1;
        if (n != -1) {
            i = n;
            do {
                *(u8 *)(dst + i - 1) = *(u8 *)(D_80138640 + 0x14 + i - 1);
                i--;
            } while (i != -1);
        }
    }
    src = (u8 *)((s32)dst + t0);
    p = (u8 *)(((s32)src + 7) & ~7);
    *(s32 *)(eb + 0x18) = (s32)p;
    if (src != p) {
        if (size != 0) {
            i = size - 1;
            do {
                *(u8 *)(p + i - 1) = *(u8 *)(src + i - 1);
                i--;
            } while (i != -1);
        }
    }
    {
        u8 *elem = D_800DFBB4_ovl_01;
        u8 *slot = elem + 0x18;
        u8 *tbl = D_801379B0 + 0x32;
        i = 0x32;
        do {
            u8 *a0 = elem + 0x40;
            u8 *a1 = slot;
            slot[-0xA] = 0;
            *(s32 *)slot = 0x80808000;
            *(s16 *)(tbl - 0x2A) = (u16)(*(u16 *)(eb + 6) - 1) << 6;
            slot += 0x68;
            *(s16 *)(tbl - 0x1A) = 0;
            *(s16 *)(tbl - 0x28) = (u16)(*(u16 *)(eb + 0xA) - 1) << 6;
            elem += 0x68;
            *(s16 *)(tbl - 0xA) = 0;
            *(s16 *)(tbl - 8) = 0;
            *(s16 *)(tbl - 0x18) = (u16)(*(u16 *)(eb + 0xA) - 1) << 6;
            *(s16 *)(tbl + 8) = 0;
            *(s16 *)(tbl - 0x30) = 0;
            *(s16 *)(tbl - 0x20) = 0;
            *(s16 *)(tbl - 0x10) = 0;
            *(s16 *)(tbl + 0) = 0;
            *(s16 *)(tbl + 6) = (u16)(*(u16 *)(eb + 6) - 1) << 6;
            i--;
            func_800824A4_ovl_01(a0, a1, 0x28);
            tbl += 0x40;
        } while (i != 0);
    }
}
