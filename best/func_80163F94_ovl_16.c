typedef struct S_f16 {
    u8 unk_00[4];
    union {
        s32 unk_04;
        struct { u16 unk_04h; u16 unk_06h; } h;
        struct { u16 unk_04h2; u8 unk_06; u8 unk_07; } b;
    } u04;
    u8 unk_08[0x1E0];
    s32 unk_1E8;
    u8 unk_1EC[8];
    s16 unk_1F4;
    u8 unk_1F6[0xCE];
    s32 unk_2C4;
    u16 unk_2C8;
    u8 unk_2CA[4];
    s8 unk_2CE;
} S_f16;

s32 func_8008A974_ovl_01(void *arg0, void *arg1, s32 arg2, s32 arg3);
s32 func_80162820_ovl_19(void *arg0);

void func_80163F94_ovl_16(S_f16 *self, void *arg1, s32 arg2) {
    switch (self->u04.b.unk_06) {
    case 0:
        self->unk_1E8 = 0x04000F00;
        self->unk_2CE = 3;
        self->u04.h.unk_06h = 0x100;
        self->unk_1F4 = 0;
        self->unk_2C8 &= 0xFFFD;
        /* fallthrough */
    case 1:
        if (func_8008A974_ovl_01(self, arg1, arg2, 0x100) != 0) {
            self->unk_1E8 = 0x04000300;
            self->u04.b.unk_06 = self->u04.b.unk_06 + 1;
        }
        break;
    case 2:
        if (func_8008A974_ovl_01(self, arg1, arg2, 0x400) != 0) {
            self->u04.unk_04 = 0x01040000;
        }
        break;
    }
    self->u04.b.unk_07 = self->u04.b.unk_07 + 1;
    if ((u8)self->u04.b.unk_07 >= 0xB) {
        s32 r = func_80162820_ovl_19(self);
        self->unk_2C4 = r;
        if (r != 0)
            self->u04.unk_04 = 0x010F0000;
    }
}
