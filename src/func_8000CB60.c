extern u8 *D_80012950;
s32 func_800072E0(void);
void func_80007300(s32);
void func_80000DD4(void *);
s32 func_80000F50(void *);
void func_8000DB90(s32);

typedef struct { s32 *lock; u8 pad4[4]; s32 count; s32 index; s32 size; s32 *data; } Q;

s32 func_8000CB60(Q *q, s32 value, s32 mode) {
    s32 token;
    s32 one;
    s32 delay;
    s32 rem;

    token = func_800072E0();
    if (q->count >= q->size) {
        one = 1;
        delay = 8;
        do {
            if (mode != one) {
                func_80007300(token);
                return -1;
            }
            *(s16 *)(D_80012950 + 0x10) = delay;
            func_80000DD4((u8 *)q + 4);
        } while (q->count >= q->size);
    }
    rem = (q->index + q->count) % q->size;
    q->data[rem] = value;
    q->count++;
    if (*q->lock != 0) {
        func_8000DB90(func_80000F50(q));
    }
    func_80007300(token);
    return 0;
}
