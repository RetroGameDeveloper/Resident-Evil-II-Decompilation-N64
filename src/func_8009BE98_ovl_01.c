typedef struct S_800EBB34
{
  u8 unk_00[4];
  u16 unk_04;
} S_800EBB34;
extern S_800EBB34 *D_800EBB34_ovl_01;
void func_8003AF28(void);
void func_8009BED4_ovl_01(void);
void func_8009C094_ovl_01(void *);
s32 func_8009BE70_ovl_01(void *arg0);
void func_8009BE98_ovl_01(void *arg0, s32 arg1)
{
 do { func_8009BED4_ovl_01(); *((s32 *) (((u8 *) arg0) + 4)) = arg1; func_8009C094_ovl_01(arg0); } while (0);
}

void func_8002751C_ovl_01(s32, s32);
void func_80027530_ovl_01(s32, s32, s32, s32);
s32 func_800276B4_ovl_01(u8);
extern u8 D_801326C8_ovl_01;
extern u8 D_801326CA_ovl_01;
extern u8 D_801326CB_ovl_01;
void func_8009CDFC_ovl_01(void);
