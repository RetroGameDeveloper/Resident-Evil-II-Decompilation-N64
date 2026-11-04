typedef struct O { u8 p[0x2c0]; } O;
void func_80162804_ovl_18(O *arg0) {
    s32 v = arg0->p[6];
    s32 one = 1;
    if (v == one) goto end;
    if (v >= 2) goto end;
    if (v == 0) arg0->p[6] = one;
end: ;
}
