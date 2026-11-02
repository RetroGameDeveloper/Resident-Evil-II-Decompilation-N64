extern u8 D_800F9E60_ovl_01[],D_80180370_ovl_04[],D_8018065C_ovl_04[],D_80180900_ovl_04[];
s32 func_8017B500_ovl_04(s32 n) {
 register u8 *a; register u8 *p; register u32 i; register s32 sum=0; register u8 c;
 a=D_80180900_ovl_04; p=D_80180370_ovl_04+*(u16*)(D_8018065C_ovl_04+n*2);
loop:
 c=*p;
 if(c<0xEE) goto charcode;
 i=0;
 for(;;) {
  c=*p;
  if(c==a[i]) {
   if(i==0) return sum;
   p++; p++; goto loop;
  }
  if(i>=6) {p++; goto loop;}
  i++;
 }
charcode:
 if(c<0x57) sum+=*(s8*)(D_800F9E60_ovl_01+c*2+1);
 else sum+=14;
 p++; goto loop;
}
u32 func_8017B448_ovl_04(s32 n) {
 register u8 *a; register u8 *p; register u32 i; register s32 sum=0; register u8 c;
 a=D_80180900_ovl_04; p=D_80180370_ovl_04+*(u16*)(D_8018065C_ovl_04+n*2);
loop2:
 c=*p;
 if(c<0xEE) goto charcode2;
 i=0;
 for(;;) {
  c=*p;
  if(c==a[i]) {
   if(i==0) return (0x140-sum)>>1;
   p++; p++; goto loop2;
  }
  if(i>=6) {p++; goto loop2;}
  i++;
 }
charcode2:
 if(c<0x57) sum+=*(s8*)(D_800F9E60_ovl_01+c*2+1);
 else sum+=14;
 p++; goto loop2;
}
