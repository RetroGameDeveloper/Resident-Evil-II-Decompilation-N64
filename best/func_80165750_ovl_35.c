typedef void (*Fn)(void *, s32, s32);
typedef struct { u8 pad[6]; unsigned int b : 8; } Obj;
extern volatile Fn D_801667B0_ovl_35[];
extern void func_80165140_ovl_35(void *, s32, s32);
extern void func_801661F0_ovl_35(void *, s32, s32);

void func_80165750_ovl_35(void *p, s32 a, s32 b)
{
    u32 i;
    u32 off;
    u32 val;
    s32 ff;

    if (((u8 *)p)[6] == 0) {
        func_801661F0_ovl_35(p, 2, 11);
        ((u8 *)p)[0x2CF] = 0x2D;
        i = 0;
        val = 0x3F3F4F;
        off = i;
        for (; i < 13; i++, off += 0x178)
            *(u32 *)(*(u32 *)((u8 *)p + 0x234) + off + 0x60) = val;
        func_80165140_ovl_35(p, a, b);
    } else {
        ff = ((Obj *)p)->b;
        D_801667B0_ovl_35[ff](p, a, b);
    }
}
