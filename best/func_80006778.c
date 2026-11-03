extern u8 D_80014F9C;
extern u8 D_80014FA0[];

typedef struct {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
} Rec;

void func_80006778(u16 *arg0)
{
    u8 *out = (u8 *)arg0;
    Rec *src = (Rec *)D_80014FA0;
    s32 i;
    Rec h[2];

    if ((s32)D_80014F9C <= 0)
        return;

    i = 0;
    do {
        h[0] = *src;
        {
            u8 c = (h[0].b2 & 0xC0) >> 4;
            out[4] = c;
            if (c == 0) {
                *(u16 *)(out + 0) = *(u16 *)&h[0].b4;
                out[2] = h[0].b6;
                out[3] = h[0].b7;
            }
        }
        i++;
        src++;
        out += 6;
    } while (i < (s32)D_80014F9C);
}
