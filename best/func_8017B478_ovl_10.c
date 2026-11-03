extern u8 D_8017E664_ovl_10[];
extern u16 D_8017E682_ovl_10;
s32 func_8017B478_ovl_10(void) {
    u32 i = D_8017E682_ovl_10;
    u8 *t = D_8017E664_ovl_10;
    return ((s32 (*)(void))(*(volatile u32 *)(t + i * 4)))();
}
