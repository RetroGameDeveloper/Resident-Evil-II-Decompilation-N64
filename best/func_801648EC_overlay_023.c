void func_801648EC_overlay_023(S_func_80162870_ovl_23_arg0 *arg0, s32 arg1, s32 arg2) {
 s32 state;
 s32 result;
 state=(s8)(arg0->unk_2BB-1);
 result=0;
 arg0->unk_2D0=0;
 arg0->unk_2C4=0;
 switch(state) {
 case 0: func_80162998_ovl_23(arg0,1,0,6,0x2000,3);result=1;break;
 case 1: func_80162998_ovl_23(arg0,4,0,6,0x2400,3);break;
 case 2: func_80162998_ovl_23(arg0,2,0,6,0x2300,2);result=2;break;
 case 3: func_80162998_ovl_23(arg0,4,0,6,0x2600,3);break;
 case 4: func_80162998_ovl_23(arg0,4,0,6,0x2500,2);result=2;break;
 case 5: func_80162998_ovl_23(arg0,3,4,6,0x1100,7);result=2;break;
 case 6: func_80162998_ovl_23(arg0,5,4,6,0x1100,7);result=1;arg0->unk_26E=0;break;
 case 7: func_80162998_ovl_23(arg0,3,4,9,0x1100,7);result=2;break;
 case 8: func_80162998_ovl_23(arg0,1,0,6,0x2000,3);result=1;break;
 case 9: break;
 case 10: result=2;func_80162D50_ovl_23(arg0);break;
 case 11: result=1;func_80162B44_ovl_23(arg0);break;
 case 12: func_80162B44_ovl_23(arg0);break;
 }
 if(arg0->unk_2B8&1) {arg0->unk_26E=0;return;}
 if(result==1){arg0->unk_26E=0;return;}
 if(result==0){arg0->unk_26E=4;if(func_801627F0_ovl_23(4,(void*)0x80166610,(void*)0x80166614)){if(!(arg0->unk_26C&0x20))arg0->unk_26E=2;}return;}
 if(result==2){if(func_801627F0_ovl_23(3,(void*)0x80166618,(void*)0x8016661C)){if(arg0->unk_26C&0x20)arg0->unk_26E=result;else arg0->unk_26E=1;}else arg0->unk_26E=0;}
}
