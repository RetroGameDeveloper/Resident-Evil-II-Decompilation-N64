s32 func_80167B9C_ovl_30(void *);
typedef void (*Fn)(void);
extern volatile Fn D_80167D64_ovl_30[];

void func_80162094_ovl_30(void *arg0) {
    u8 *p = (u8 *)arg0 + 0x2B4;
    D_80167D64_ovl_30[*(u8 *)((u8 *)arg0 + 5)]();
    *(volatile u8 *)(p + 6) = *(volatile u8 *)((u8 *)arg0 + 5);
    *(volatile u8 *)(p + 7) = *(volatile u8 *)((u8 *)arg0 + 6);
    *(volatile u8 *)(p + 8) = *(volatile u8 *)((u8 *)arg0 + 7);
    *(volatile u16 *)(p + 0x1E) = *(volatile u16 *)((u8 *)arg0 + 0x1E0);
    *(volatile u16 *)(p + 0x20) = *(volatile u16 *)((u8 *)arg0 + 0x1E2);
    *(volatile u16 *)(p + 0x22) = *(volatile u16 *)((u8 *)arg0 + 0x1E4);
    func_80167B9C_ovl_30(arg0);
}
