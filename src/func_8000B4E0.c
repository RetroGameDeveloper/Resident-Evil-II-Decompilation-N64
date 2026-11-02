typedef struct {
    s16 unk0;
    u8 unk2;
    u8 unk3;
} Entry;

typedef struct {
    s32 out;
    s8 mask;
} OutBuf;

extern u8 D_80014F9C;
extern u8 D_80016470;

s32 func_8000D1F0(s32, void *);
void func_8000B65C(s32);
s32 func_8000C9E0(void *, s32 *, s32);
void func_8000B700(s8 *, Entry *);
void func_8000CFB4(void);
void func_8000D020(void);

s32 func_8000B4E0(void *arg0, s8 *arg1) {
    Entry entries[4];
    OutBuf ob;
    Entry pad[2];
    s8 bits;
    s32 retries;
    s32 n1;
    s32 n2;
    s32 i;
    s32 ret;

    bits = 0;
    retries = 3;
    func_8000CFB4();
    do {
        func_8000B65C(0);
        func_8000D1F0(1, &D_80016470);
        func_8000C9E0(arg0, &ob.out, 1);
        ret = func_8000D1F0(0, &D_80016470);
        func_8000C9E0(arg0, &ob.out, 1);
        func_8000B700(&ob.mask, entries);
        i = 0;
        n1 = D_80014F9C;
        if (n1 > 0) {
            do {
                if (entries[i].unk2 & 4) {
                    i++;
                } else {
                    retries--;
                    break;
                }
            } while (i < D_80014F9C);
        }
        n2 = D_80014F9C;
        retries &= -(i != n2);
    } while (retries > 0);

    for (i = 0; i < D_80014F9C; i++) {
        if (entries[i].unk3 != 0) {
            continue;
        }
        if (!(entries[i].unk2 & 1)) {
            continue;
        }
        bits |= 1 << i;
    }
    func_8000D020();
    *arg1 = bits;
    return ret;
}
