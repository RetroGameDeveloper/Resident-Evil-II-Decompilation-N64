extern unsigned char D_800F9E60_ovl_01[],D_80180370_ovl_04[],D_8018065C_ovl_04[],D_80180900_ovl_04[];int func_8017B500_ovl_04(int n){
int __repair_literal;
register unsigned char*p;register int sum=0;register unsigned char c;register unsigned i;p=D_80180370_ovl_04+*(unsigned short*)(D_8018065C_ovl_04+ n*2);for(;;){c=*p;if(c>=0xEE){i=0;do{if(c==D_80180900_ovl_04[i]){if(i==0)return sum;p+=2;goto loop;}i++;}while(i<6);p++;}else{
__repair_literal = 2;
if(c<0x57)sum+=*(signed char*)(D_800F9E60_ovl_01+c*__repair_literal+1);else sum+=14;p++;}loop:;}}
