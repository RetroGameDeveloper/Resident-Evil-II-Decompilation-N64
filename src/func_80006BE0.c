extern f64 D_80011AC8;
extern f64 D_80011AD0;
extern f64 D_80011AD8;
extern f64 D_80011AE0;
extern f64 D_80011AE8;
extern f64 D_80011AF0;
extern f64 D_80011AF8;
extern f32 D_80011B00;
extern f64 D_80011B08;
extern f64 D_80011B10;
extern f32 D_80011B20;

f32 func_80006BE0(f32 arg0) {
    f64 v;
    f64 w;
    f64 r;
    s32 n;

    if (((*(s32 *)&arg0 >> 22) & 0x1FF) < 0x136) {
        v = (arg0 > 0.0f) ? arg0 : -arg0;
        w = v * D_80011AE8 + D_80011B08;
        n = (s32)(w >= 0.0 ? w + D_80011B08 : w - D_80011B08);
        w = (f64)n;
        w = w - D_80011B10;
        v = v - w * D_80011AF0;
        v = v - w * D_80011AF8;
        w = v * v;
        r = v + v * w * ((((D_80011AE0 * w + D_80011AD8) * w + D_80011AD0) * w + D_80011AC8));
        if ((n & 1) == 0) {
            return (f32)r;
        }
        return -(f32)r;
    }
    if (arg0 != arg0) {
        return D_80011B20;
    }
    return D_80011B00;
}
