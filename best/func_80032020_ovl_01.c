typedef struct { u32 w[4]; } Blk16;
typedef struct { u32 a; u32 b; } __attribute__((packed)) Pack8;
typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

extern u8 D_800C7650_ovl_01[];
extern u16 D_800E8FE8_ovl_01[];
extern void func_80089210_ovl_01(void *arg0);
extern s32 func_800826A4_ovl_01(void *arg0, void *arg1, void *arg2);
extern s32 func_80088ECC_ovl_01(void *arg0, s32 arg1);
extern s32 func_80088EFC_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80066214_ovl_01(void *arg0, s32 arg1);

s32 func_80032020_ovl_01(s32 arg0)
{
    u8 *found;
    u8 *obj;
    s32 n;
    s32 ret;
    u8 *base;
    u8 *p1;
    u8 *p2;
    u8 *p3;
    u8 **slot;
    u8 **slot2;
    u8 *cand;
    u32 id;
    s32 i;
    s32 j;
    u16 *p;
    u16 *q;

    found = NULL;
    {
        U64 u;
        u.w.hi = 0x19D38;
        base = D_800C7650_ovl_01;
        u.w.lo = (u32)base;
        slot = (u8 **)(u.w.lo + u.w.hi);
    }
    id = arg0 & 0xFF;
    {
        U64 u;
        u.w.hi = 0x18000;
        u.w.lo = (u32)base;
        p1 = (u8 *)(u.w.lo + u.w.hi);
    }

    do {
        obj = *slot;
        if (obj[8] == id) {
            if ((*(u32 *)obj & 1) == 0) {
                *(u32 *)(obj + 4) = 0;
                func_80089210_ovl_01(obj);
                *(u32 *)obj |= 1;
                p1[0x1A76] = p1[0x1A76] + 1;
                return (s32)obj;
            }
            found = obj;
        }
        slot++;
    } while (slot != *(u8 ***)(p1 + 0x28C));

    if (found == NULL) {
        return 0;
    }

    {
        U64 u;
        u.w.hi = 0x19D40;
        u.w.lo = (u32)base;
        slot2 = (u8 **)(u.w.lo + u.w.hi);
    }
    cand = *slot2;
    n = 0x20;
    obj = NULL;
    for (;;) {
        if ((*(u32 *)cand & 1) == 0) {
            obj = cand;
            break;
        }
        n--;
        if (n == 0) {
            break;
        }
        slot2++;
        cand = *slot2;
    }
    if (obj == NULL) {
        return 0;
    }

    {
        U64 u;
        u.w.hi = 0x18000;
        u.w.lo = (u32)base;
        p2 = (u8 *)(u.w.lo + u.w.hi);
    }
    if ((u32)slot2 >= *(u32 *)(p2 + 0x28C)) {
        *(u32 *)(p2 + 0x28C) = (u32)(slot2 + 1);
    }

    obj = *(u8 **)(p2 + 0x284);
    *slot2 = obj;
    p2[0x1A76] = p2[0x1A76] + 1;

    *(u32 *)(obj + 0x258) = *(u32 *)(found + 0x258);
    *(u32 *)(obj + 0x218) = *(u32 *)(found + 0x218);
    *(u32 *)(obj + 0x1A4) = *(u32 *)(found + 0x1A4);
    *(u32 *)(obj + 0x220) = *(u32 *)(found + 0x220);
    *(u32 *)(obj + 0x21C) = *(u32 *)(found + 0x21C);
    *(u32 *)(obj + 0x228) = *(u32 *)(found + 0x228);
    *(u32 *)(obj + 0x224) = *(u32 *)(found + 0x224);
    *(u32 *)(obj + 0x230) = *(u32 *)(found + 0x230);
    *(u32 *)(obj + 0x22C) = *(u32 *)(found + 0x22C);
    *(u32 *)(obj + 0x6C) = 0x808080;
    *(u32 *)(obj + 0xC4) = *(u32 *)(found + 0xC4);
    obj[0x26B] = found[0x26B];
    obj[0x1A1] = found[0x1A1];
    *(u32 *)(obj + 0xCC) = *(u32 *)(obj + 0xC4) + 0x1C;
    obj[0x1A0] = found[0x1A0];
    obj[0x8] = found[0x8];
    *(u16 *)(obj + 0x1AA) = *(u16 *)(found + 0x1AA);
    obj[0x1A2] = found[0x1A2];
    *(u16 *)(obj + 0x25E) = *(u16 *)(found + 0x25E);
    *(u32 *)(obj + 0x2A0) = *(u32 *)(found + 0x2A0);
    *(u32 *)(obj + 0x2A4) = *(u32 *)(found + 0x2A4);
    obj[0x9] = found[0x9];
    *(Blk16 *)(obj + 0x120) = *(Blk16 *)(found + 0x120);
    *(Blk16 *)(obj + 0x130) = *(Blk16 *)(found + 0x130);
    *(Blk16 *)(obj + 0x140) = *(Blk16 *)(found + 0x140);
    *(Blk16 *)(obj + 0x150) = *(Blk16 *)(found + 0x150);
    *(Blk16 *)(obj + 0x160) = *(Blk16 *)(found + 0x160);
    *(Blk16 *)(obj + 0x170) = *(Blk16 *)(found + 0x170);
    *(Blk16 *)(obj + 0x1B8) = *(Blk16 *)(found + 0x1B8);
    *(Blk16 *)(obj + 0x1C8) = *(Blk16 *)(found + 0x1C8);
    *(Pack8 *)(obj + 0x1D8) = *(Pack8 *)(found + 0x1D8);
    *(u32 *)(obj + 0x70) = *(u32 *)(found + 0x70);
    *(u16 *)(obj + 0x34) = *(u16 *)(found + 0x34);
    *(u16 *)(obj + 0x36) = *(u16 *)(found + 0x36);
    *(u16 *)(obj + 0x38) = *(u16 *)(found + 0x38);
    *(u16 *)(obj + 0x212) = *(u16 *)(found + 0x212);
    obj[0x26A] = found[0x26A];
    *(u32 *)(obj + 0x284) = *(u32 *)(found + 0x284);

    ret = func_800826A4_ovl_01(found, obj, obj + 0x300);

    p = (u16 *)(obj + 0x14);
    *(u32 *)(obj + 0x28) = *(u32 *)(found + 0x28);
    *(u32 *)(obj + 0x2C) = *(u32 *)(found + 0x2C);
    *(u16 *)(obj + 0x64) = 0;
    *(u16 *)(obj + 0x66) = 0;
    *(u16 *)(obj + 0x68) = 0;
    *(u32 *)(obj + 0x30) = *(u32 *)(found + 0x30);
    q = D_800E8FE8_ovl_01;
    for (i = 2; i >= 0; i--) {
        for (j = 2; j >= 0; j--) {
            *p++ = *q++;
        }
    }

    {
        U64 u;
        u.w.hi = 0x18000;
        u.w.lo = (u32)base;
        p3 = (u8 *)(u.w.lo + u.w.hi);
    }
    *(u32 *)(obj + 0) = 1;
    obj[0xC] = n;
    *(u32 *)(obj + 4) = 0;
    *(u16 *)(obj + 0x26C) = 0;
    obj[0x26F] = 0;
    *(u16 *)(obj + 0x1F0) = 0;
    obj[0x1E6] = 0;
    *(u16 *)(obj + 0x268) = 0;
    *(u16 *)(obj + 0x278) = 0;
    *(u16 *)(obj + 0x27A) = 0x1000;
    *(u16 *)(obj + 0x270) = 0;
    *(u16 *)(obj + 0x272) = 0;
    *(u16 *)(obj + 0x274) = 0;
    *(u16 *)(obj + 0x276) = 0;
    *(u16 *)(obj + 0x1F4) = 0;
    *(u16 *)(obj + 0x1F6) = 0;
    *(u32 *)(obj + 0x2A0) = 0;
    *(u32 *)(obj + 0x2A4) = 0;
    *(u32 *)(obj + 0x280) = 0;
    obj[0x1EC] = p3[0x1A76] & 7;

    ret = func_80088ECC_ovl_01(obj, ret);
    ret = func_80088EFC_ovl_01(obj, ret, *(u32 *)(obj + 0x1A4), 0);
    func_80066214_ovl_01(obj, *(u32 *)(obj + 0x258));
    *(u32 *)(p3 + 0x284) = ret;
    return (s32)obj;
}
