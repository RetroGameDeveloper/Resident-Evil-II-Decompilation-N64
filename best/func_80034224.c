typedef struct S_inner_80034224 { u8 pad[8]; s16 x; s16 y; u8 pad2[4]; } S_inner_80034224;
typedef struct S_outer_80034224 { S_inner_80034224 *inner; u8 pad4[4]; u8 *obj; u8 padC[2]; s16 count; } S_outer_80034224;
typedef struct S_list_80034224 { s32 count; S_outer_80034224 *entries; } S_list_80034224;
typedef struct S_obj_80034224 { u8 pad[0xC8]; S_list_80034224 *list; } S_obj_80034224;

void func_80034224(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    S_obj_80034224 *p;
    S_outer_80034224 *o;
    S_inner_80034224 *in;
    s32 i;
    s32 j;

    if (arg3 < 0) return;
    arg1 <<= 8;
    p = (S_obj_80034224 *)arg0;
    arg2 <<= 8;
    o = p->list->entries;
    i = p->list->count;
    for (; --i != -1; ) {
        if (*(s32 *)(o->obj + 8) == arg3) {
            j = o->count;
            in = o->inner;
            if (--j != -1) {
                do {
                    j--;
                    in->x += arg1;
                    in->y += arg2;
                    in++;
                } while (j != -1);
            }
        }
        o++;
    }
}
