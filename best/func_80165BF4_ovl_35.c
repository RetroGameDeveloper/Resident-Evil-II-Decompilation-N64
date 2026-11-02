s32 func_80165E20_ovl_35(s32,void *);
s32 func_80165B50_ovl_35(s32,s32,s16,s32);
s32 func_80033634_ovl_01(void);
s32 func_80166324_ovl_35(s32,s32,s32);
extern void (*D_801667CC_ovl_35[])(s32,void *);
void func_80165D20_ovl_35(s32 arg0,void *arg1) {
 func_80165E20_ovl_35(arg0,arg1);
 func_80165B50_ovl_35(arg0,3,*(s16 *)((u8 *)arg1+2),0);
 func_80165B50_ovl_35(arg0,4,*(s16 *)((u8 *)arg1+4),0);
}
void func_80165D78_ovl_35(s32 arg0,void *arg1) {
 if (*(u8 *)((u8 *)arg1+7)==0) *(s8 *)((u8 *)arg1+1)=0;
 func_80165E20_ovl_35(arg0,arg1);
 if (*(s8 *)((u8 *)arg1+1)==0) {
  if (*(u8 *)((u8 *)arg1+7)==2) *(s8 *)((u8 *)arg1+1)=1;
 } else if (*(u8 *)((u8 *)arg1+7)==1) *(u8 *)((u8 *)arg1+9)&=0x7F;
 func_80165B50_ovl_35(arg0,0x83,*(s16 *)((u8 *)arg1+2),0);
 func_80165B50_ovl_35(arg0,0x84,*(s16 *)((u8 *)arg1+4),0);
}
void func_80165C90_ovl_35(s32 arg0,void *arg1) {
 u8 value;
 if (*(u8 *)((u8 *)arg1+7)==0) *(u8 *)((u8 *)arg1+1)=12;
 func_80165E20_ovl_35(arg0,arg1);
 value=*(u8 *)((u8 *)arg1+1)-1;
 *(u8 *)((u8 *)arg1+1)=value;
 if ((value<<24)==0) *(u8 *)((u8 *)arg1+9)&=0x7F;
 func_80165B50_ovl_35(arg0,3,*(s16 *)((u8 *)arg1+2),0);
 func_80165B50_ovl_35(arg0,4,*(s16 *)((u8 *)arg1+4),0);
}
void func_80165BF4_ovl_35(void *arg0) {
 u8 *p=(u8 *)arg0+0x2B4;
 u8 v= p[0x18];
 if (v!=0) {
   v--;
   if ((p[9]&1) && (v&1)) {
     func_80166324_ovl_35(arg0,3,func_80033634_ovl_01()&7);
   }
   p[0x18]=v;
 }
 if (p[9]&0x80) D_801667CC_ovl_35[p[6]](arg0,p);
}
