extern s32 D_800C7650_ovl_01;
void func_80165A28_ovl_13(void *arg0,s32 arg1,s32 arg2){
int __repair_literal;

 u8 *p=(u8*)arg0; u8 state=p[6]; s32 one=1; u16 *q;
 if(state==1) goto active;
__repair_literal = 2;
 if(state>=__repair_literal) goto done; if(state!=0) goto done;
 { u32 v=0x0b000700; u32 f=*(u32*)p; s32 mark=0x80; *(s8*)(p+0x26f)=mark; *(s32*)(p+0x1e8)=v; *(u32*)p=f|2; }
 func_8003420C_ovl_01(*(void**)(p+0x208));
 q=*(u16**)(p+0x208); q[2]=0x190; q=*(u16**)(p+0x208); q[3]=0x190;
 *(s16*)(p+0x1f6)=0x3c; p[0x2b5]=11; p[6]=one;
 active:
 if(p[0x2b5]) { p[0x2b5]--; func_80089D34_ovl_01(arg0,arg1,arg2,0x200); }
 if(*(s16*)(p+0x1f6)){*(s16*)(p+0x1f6)=*(s16*)(p+0x1f6)-1;q=*(u16**)(p+0x208);q[2]+=10;q=*(u16**)(p+0x208);q[3]+=10;}else p[6]=2;
 done:;
}
