extern u8 D_800C7650_ovl_01[];
extern u8 D_8017E53D_ovl_05, D_8017E53F_ovl_05, D_8017E541_ovl_05, D_8017E543_ovl_05, D_8017E544_ovl_05, D_8017E545_ovl_05, D_8017E549_ovl_05, D_8017E54A_ovl_05, D_8017E54C_ovl_05, D_8017E54D_ovl_05;
extern u32 D_8017E550_ovl_05;
extern u8 D_8017DD60_ovl_05[];
extern u8 D_8017DDA0_ovl_05[];
extern u8 D_8017DECC_ovl_05[];
void func_8017BB9C_ovl_05(void) {
 u32 buttons;u8 idx;u8 *row;u8 count;
 func_8017B390_ovl_05();
 buttons=*(u32*)(D_800C7650_ovl_01+0x18000+0x268);
 if(buttons&0x2000){func_80077B0C_ovl_01(0x4050000,0);D_8017E549_ovl_05=2;D_8017E53F_ovl_05|=4;return;}
 if(buttons&0x1000){
  idx=D_8017E54C_ovl_05;row=&D_8017E544_ovl_05;count=row[idx];
  if(count==4){func_80077B0C_ovl_01(0x4050000,0);D_8017E549_ovl_05=2;D_8017E53F_ovl_05|=4;return;}
  D_8017E549_ovl_05=2;D_8017E53F_ovl_05|=8;func_80077B0C_ovl_01(0x4060000,0);
  D_8017E54A_ovl_05=0;D_8017E550_ovl_05=0x2c808080;D_8017E54D_ovl_05=count+1;
  switch(D_8017E54D_ovl_05){
  case 1: D_8017E545_ovl_05=*(u8*)(D_800C7650_ovl_01+0x18000+0x2148e);D_8017E53D_ovl_05=D_8017E545_ovl_05;break;
  case 2: D_8017E541_ovl_05=1;D_8017E543_ovl_05=0;func_8017DBC8_ovl_05(0,D_80119E14_ovl_01,D_8017E54D_ovl_05);func_8017DBC8_ovl_05(3,D_80119E13_ovl_01,D_8017E54D_ovl_05);if(*(u8*)(D_800C7650_ovl_01+0x18539))row[D_8017E54D_ovl_05]=4;else row[D_8017E54D_ovl_05]=0;break;
  default:break;
  }
 }else{
  u8 *base=D_800C7650_ovl_01+0x18000;
  if(*(s32*)(base+0x1a3c)>=0)return;
  if(*(u16*)(base+0x25c)&0x1000){D_8017E54A_ovl_05=0;D_8017E550_ovl_05=0x2c808080;idx=D_8017E54C_ovl_05;row=&D_8017E544_ovl_05;count=row[idx];D_8017DECC_ovl_05[(D_8017DDA0_ovl_05[idx*2]+count)*8]=5;row[idx]=count-1;if(row[idx]==255){func_80077B0C_ovl_01(0x4040000,0);}}
  if(*(u16*)(base+0x25c)&0x4000){D_8017E54A_ovl_05=0;D_8017E550_ovl_05=0x2c808080;idx=D_8017E54C_ovl_05;row=&D_8017E544_ovl_05;count=row[idx];D_8017DECC_ovl_05[(D_8017DDA0_ovl_05[idx*2]+count)*8]=5;row[idx]=count+1;if(row[idx]==5)func_80077B0C_ovl_01(0x4040000,0);}
 }
}
