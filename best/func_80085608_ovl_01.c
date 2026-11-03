typedef struct { s32 count; void *first; } L;
extern s32 D_801247D0_ovl_01;
extern u8 D_801247F8_ovl_01[];
extern u8 D_8012501C_ovl_01[];
void func_80085608_ovl_01(u8 *arg0) {
    s32 flags = D_801247D0_ovl_01;
    s32 flags2 = flags | 0x10;
    u8 *b = D_801247F8_ovl_01;
    u8 *pool = D_8012501C_ovl_01;
    L *l = *(L **)(arg0 + 0x60);
    s32 count = l->count;
    u8 *node = l->first;
    for (;;) {
        s32 id;
        u8 *list;
        s32 n;
        s32 *e;
        count--;
        if (count == -1) break;
        id = *(s32 *)(*(u8 **)(node + 8) + 8);
        list = b + 0x24;
        if (id >= 0) {
            s32 *tbl = *(s32 **)(arg0 + 0x44);
            if (tbl != 0) {
                list = b + ((tbl[id] & 0x7F) << 4) + 0x24;
            }
        }
        n = *(s32 *)(b + 8);
        *(s32 *)(b + 8) = n + 1;
        e = (s32 *)(pool + n * 0x1C);
        e[1] = *(s32 *)(list + 8);
        *(s32 *)(list + 8) = (s32)e;
        e[0] = (s32)node;
        e[2] = (s32)arg0;
        e[3] = (s32)arg0;
        e[4] = 0;
        if ((u32)(*(s32 *)(arg0 + 0x64) - 1) < 0xFFFFFFFE) e[5] = flags2;
        else e[5] = flags;
        node += 0x10;
    }
}
