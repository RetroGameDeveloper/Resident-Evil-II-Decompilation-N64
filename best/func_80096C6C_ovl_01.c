typedef struct S_80096C6C_src {
    u8 b0;
    u8 b1;
    u8 b2;
    u8 b3;
} S_80096C6C_src;

extern u32 D_800C527C_ovl_01;
extern u8 D_8012BF38_ovl_01[];
extern u8 D_8012F4D0_ovl_01[];
extern u8 D_801311B4_ovl_01[];

void func_80047B34_ovl_01(void *arg0, s32 arg1);
void func_8004789C_ovl_01(void *arg0,  s32 arg1);
void func_800478DC_ovl_01(void *arg0);
void func_800479EC_ovl_01(void *arg0, u8 arg1, u8 arg2);

void func_80096C6C_ovl_01(void) {
    u32 base;
    u32 lim;
    u32 other;
    u8 *p1;
    u8 *p2;
    s16 *flagp;
    u32 cptr;
    S_80096C6C_src *src;
    s32 count;

    base = D_800C527C_ovl_01;
    lim = base + 0x3C004;
    other = base + 0x3BB64;
    if (other < lim) {
        other = lim;
    }
    p1 = (u8 *)(lim + 0x758);
    flagp = (s16 *)D_8012BF38_ovl_01;
    count = 0x11;
    cptr = (u32)D_8012F4D0_ovl_01;
    p2 = (u8 *)(other + 0x762);
    src = (S_80096C6C_src *)(D_801311B4_ovl_01 + 0x44);
    do {
        src--;
        count -= 1;
        func_80047B34_ovl_01(p1, 0);
        func_8004789C_ovl_01(p1,  0x80);
        func_800478DC_ovl_01(p1);/*__repair_call_balance*/if(count){
        func_800479EC_ovl_01(p1, src->b2, src->b3);}else{
        func_800479EC_ovl_01(p1, src->b2, src->b3);}
        *(u32 *)(p2 + 2) = cptr;
        *(s16 *)p2 = 0;
        p1 += 0x14;
        p2 += 0x14;
    } while (count != 0);
    flagp[0x1C] = 7;
    flagp[0x1D] = 0xAA;
}
