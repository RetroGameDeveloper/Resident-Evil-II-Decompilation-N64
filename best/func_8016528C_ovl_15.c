void func_8016528C_ovl_15(void *arg0) {
 u8 state = *((u8*)arg0+0x2CC);
 *((u8*)arg0+0x2CD)=0;
 switch(state) {
 case 1: func_801653F8_ovl_15(arg0,1,0,6,0x2800,0); break;
 case 2: func_8016551C_ovl_15(arg0); break;
 case 3: func_801653F8_ovl_15(arg0,1,0,6,0x2800,0); break;
 case 4: func_80165AC0_ovl_15(arg0,4); break;
 case 5: func_80165AC0_ovl_15(arg0,6); break;
 case 6:
   func_80165CEC_ovl_15(arg0,0x17,0x60,0x60,0x60);
   func_8016596C_ovl_15(arg0,4,9); break;
 case 7:
   func_801653F8_ovl_15(arg0,1,0,6,0x2800,0); break;
 case 8:
   func_80165CEC_ovl_15(arg0,0x17,0x60,0x60,0x60);
   func_80165BE0_ovl_15(arg0); break;
 case 9:
   func_801653F8_ovl_15(arg0,1,0,6,0x2800,0); break;
 case 10: func_8016596C_ovl_15(arg0,5,4);
   func_80165CEC_ovl_15(arg0,0x17,0x60,0x60,0x60); break;
 }
}
