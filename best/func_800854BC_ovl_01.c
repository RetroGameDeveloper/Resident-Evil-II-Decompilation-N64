/* func_800854BC_ovl_01 */
extern s32 D_801247D0_ovl_01;
extern s32 func_8011D0FC_ovl_01(s32);
extern s32 func_8011D0FC_ovl_01_510(s32);
extern s32 func_8011D0FC_ovl_01_510_24(s32, s32, s32);

void func_800854BC_ovl_01(void *arg0, void *arg1, s32 arg2) {
    s32 *a0 = (s32 *)arg0;
    s32 *a1 = (s32 *)arg1;
    s32 t3 = a0[20];   /* unk_14 = offset 0x14 = 20 s32s, but 0x14=20 decimal */
    /* Wait, 0x14 = 20 decimal. But the struct has many fields. Let me check the assembly addresses. */

    /* From assembly: */
    /* lw $v0, 0x0($a0) - a0[0] */
    /* andi $v0, $v0, 0x8 - check bit 3 */
    /* lw $t3, 0x0($a3) - a3[0] */
    /* beqz $v0, .L800854F0 */
    /* lw $v1, 0x8($a3) - a3[2] */
    /* beqz $v1, .L800854F0 */
    /* nop */
    /* lw $v0, 0x48($a1) - a1[12] (0x48/4=12) */
    /* bnez $v0, .L800854F8 */

    if (!(a0[0] & 8) || a0[42] == 0 || (t3 = a0[42], a1[12] == 0)) {
        t3 = a0[1];  /* unk_4 */
    }

    /* loop: */
    /* addiu $t3, $t3, -1  -> t3-- */
    /* beq $t3, -1, .L80085600 */
    /* nop */
    /* lw $v0, -0x4($t0) - this uses t0 which was set earlier */
    /* lw $v0, 0x8($v0) - uses previous loaded value as base */
    /* bltz $v0, .L80085568 */

    /* etc. */
}
