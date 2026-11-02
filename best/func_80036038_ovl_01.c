typedef struct { s16 unk0; s16 unk2; } S_ent;
typedef struct { u16 x; u16 y; u16 z; u8 pad[6]; s8 nx; s8 ny; s8 nz; } S_vert;
typedef struct { s32 unk0; void *unk4; u32 unk8; u8 *unkC; } S_src;

typedef struct {
    u16 pad;
    u16 unk2;
    u8 *unk4;
    u8 *unk8;
    u8 *unkC;
    u8 *unk10;
    u16 unk14;
    u16 unk16;
    u16 unk18;
    u8 *unk1C;
    u8 *unk20;
    u8 *unk24;
    u16 unk2C;
    u16 unk2E;
    u16 unk30;
    u16 *unk34;
} S_out;

u8 *func_80036038_ovl_01(void *arg0, u8 *arg1, S_out *arg2, u8 *arg3)
{
    u16 n;
    u8 *p;
    S_src *src;
    u8 *t4;
    u8 *t5;
    u16 *t2;
    u8 *t1;
    u8 *t0p;
    u32 i;
    S_ent *e;
    S_ent *f;
    S_vert *v;
    u8 *tab[8];
    u8 *q;

    n = arg2->unk2;
    arg2->unk4 = arg3;
    p = arg3 + n * 8;
    arg2->unk8 = p;
    p = p + n * 8;
    arg2->unk1C = p;
    p = p + n * 8;
    arg2->unk20 = p;
    p = p + n * 8;
    src = *(S_src **)(arg1 + 0xC8);
    t5 = src->unkC;
    if (t5 != 0) {
        i = 0;
        if (src->unk0 != 0) {
            q = src->unk4;
            do {
                *(u32 *)&tab[i] = *(u32 *)q;
                q += 0x10;
                i++;
            } while (i < (u32)src->unk0);
        }
        while (i < 8) {
            *(u32 *)&tab[i] = 0;
            i++;
        }
        t4 = t5 + 4;
        t1 = p;
        t2 = arg2->unk34;
        t0p = t1 + 4;
        arg2->unkC = p;
        t5 = t5 + (*(s32 *)t4 * 4 + 4);
        i = n;
        p = p + n * 8;
        do {
            e = (S_ent *)(t4 + (u32)*t2 * 4);
            f = (S_ent *)(t5 + e->unk2 * 4);
            v = (S_vert *)(tab[f->unk0] + f->unk2 * 16);
            t2++;
            *(u16 *)t1 = v->x + arg2->unk14;
            i--;
            *(u16 *)(t0p - 2) = v->y + arg2->unk16;
            t1 += 8;
            *(u16 *)t0p = v->z + arg2->unk18;
            t0p += 8;
        } while (i != 0);
        t1 = p;
        t2 = arg2->unk34;
        arg2->unk24 = p;
        p = p + n * 8;
        t0p = t1 + 4;
        i = n;
        do {
            e = (S_ent *)(t4 + (u32)*t2 * 4);
            f = (S_ent *)(t5 + e->unk2 * 4);
            v = (S_vert *)(tab[f->unk0] + f->unk2 * 16);
            t2++;
            *(u16 *)t1 = v->x + arg2->unk2C;
            i--;
            *(u16 *)(t0p - 2) = v->y + arg2->unk2E;
            t1 += 8;
            *(u16 *)t0p = v->z + arg2->unk30;
            t0p += 8;
        } while (i != 0);
        t1 = p;
        t2 = arg2->unk34;
        arg2->unk10 = p;
        p = p + n * 8;
        t0p = t1 + 4;
        i = n;
        do {
            e = (S_ent *)(t4 + (u32)*t2 * 4);
            f = (S_ent *)(t5 + e->unk2 * 4);
            v = (S_vert *)(tab[f->unk0] + f->unk2 * 16);
            t2++;
            *(u16 *)t1 = v->nx * 256 + arg2->unk2C;
            i--;
            *(u16 *)(t0p - 2) = v->ny * 256 + arg2->unk2E;
            t1 += 8;
            *(u16 *)t0p = v->nz * 256 + arg2->unk30;
            t0p += 8;
        } while (i != 0);
    }
    return p;
}
