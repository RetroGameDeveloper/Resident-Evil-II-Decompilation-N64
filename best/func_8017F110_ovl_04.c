extern u8 *D_801806F0_ovl_04;

void func_8017F110_ovl_04(u8 *dest)
{
    u32 i;
    u32 t;
    u8 *p;
    

    i = 0;
    p = dest + i;
    do {
        *p = 0xF;
        i++;
        p = dest + i;
    } while (i < 0xF);

    for (i = 0; i < 0xF; i++) {
        if (i >= D_801806F0_ovl_04[0x176]) {
            break;
        }
        p = D_801806F0_ovl_04 + i * 0x16;
        t = p[0x3E] - 0x1A;
        dest[(t * 10 + p[0x3F]) - 0x1A] = i;
    }
}
