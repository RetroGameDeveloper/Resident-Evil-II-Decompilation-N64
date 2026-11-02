typedef void(*Fn)(void*,s32,s32);
extern volatile Fn D_80167D30_ovl_17[];
extern void func_80167848_ovl_17(void);
extern void func_80167A9C_ovl_17(void*);
void func_801620C8_ovl_17(void *p,s32 a1,s32 a2) {
 u8 *b=p;
 u8 *q;
 u16 x;
 func_80167848_ovl_17();
 q=b+0x2b4;
 D_80167D30_ovl_17[b[0x2be]](p,a1,a2);
 func_80167A9C_ovl_17(p);
 x=*(u16*)(b+0x2b4);
 if((s16)x!=0) *(u16*)(b+0x2b4)=x-1;
 if(b[0x2ce]) b[0x2ce]--;
 if(*(s16*)(q+4)==0) { *(u16*)(q+6)=0; }
 else (*(u16*)(q+6))++;
 if(*(s16*)(q+4)==0) {
   q[0x1b]=b[5];q[0x1c]=b[6];q[0x1d]=b[7];
 }
}
