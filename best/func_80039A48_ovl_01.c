extern u8 D_800EEB4C_ovl_01[];
extern u8 D_800EBD48_ovl_01[];
s32 func_8003997C_ovl_01(u16 *, u16 *, u32);
void func_80039020_ovl_01(void) {
 u8 *a0 = D_800EEB4C_ovl_01 - 0x2E80;
 u8 *v1 = D_800EEB4C_ovl_01 - 0x2E68;
 do { v1 += 0x7C; a0 += 0x7C; v1[-0x17]=0; *a0=0; *(u16*)v1=0; } while(a0 != D_800EEB4C_ovl_01);
}
s32 func_80038F70_ovl_01(u8 arg0) {
 u8 *end=D_800EEB4C_ovl_01, *a1=end-0x2E80, *v1=end-0x2E68+0x7C;
 do { if(v1[5]==arg0) { v1[-0x17]=0; a1[0]=0; *(u16*)v1=0; } a1+=0x7C; v1+=0x7C; } while(a1!=end);
 return 0;
}
s32 func_80038EC8_ovl_01(s32 arg0,s32 arg1,s32 arg2) {
 u8 *v1; u32 a3=0;
 if(arg2) {
  arg0 &= 0xFF; arg1 &= 0xFF; v1=D_800EBD48_ovl_01;
  do { if(v1[0x1C]!=arg0) { a3++; } else if(v1[0x1E]!=arg1) { a3++; } else if(*(s32*)(v1+0x6C)!=arg2) { a3++; } else { v1[1]=0; v1[0]=0; *(u16*)(v1+0x18)=0; } v1+=0x7C; } while(a3<0x60); return 0;
 }
 arg0 &= 0xFF; arg1 &= 0xFF; v1=D_800EBD48_ovl_01;
 do { a3++; if(v1[0x1C]==arg0 && v1[0x1E]==arg1) { v1[1]=0; v1[0]=0; *(u16*)(v1+0x18)=0; } v1+=0x7C; } while(a3<0x60); return 0;
}
void func_80039A48_ovl_01(u16 *arg0,u16 *arg1,u32 arg2,s32 arg4) {
 u32 n=arg2>>1; u16 *a0=arg0+n,*a1=arg1+n;
 if(arg4==0 || arg4==8 || arg4==9 || arg4==0x1F || arg4==0x26) func_8003997C_ovl_01(a0,a1,n);
 else if(n) do { a1--; a0--; *a0=*a1; } while(--n);
}
