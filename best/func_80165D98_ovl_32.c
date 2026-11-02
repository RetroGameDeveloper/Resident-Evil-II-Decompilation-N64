void func_80165D98_ovl_32(void *arg0,void *arg1) {
 s32 v1; s32 v0; void *a0;
 v1=*(u8*)((char*)arg0+0x2b5);
 if(v1==0) {
  *(u8*)((char*)arg0+0x2b5)=1;*(u16*)((char*)arg0+0x2b8)=0x24;
  *(u8*)((char*)arg0+0x2b7)=10;*(u8*)((char*)arg0+0x2bc)=10;*(s16*)((char*)arg0+0x2ba)=1;
 } else if(v1!=1) return;
 a0=*(void**)((char*)arg1+0x120);
 *(u16*)((char*)a0+0x10)+=*(u16*)((char*)arg0+0x2b8);
 v0=*(s16*)((char*)arg0+0x2ba);
 v1=*(u16*)((char*)arg0+0x2b8);
 *(u8*)((char*)arg0+0x2b7)-=1;
 v1-=v0*4;
 v0=*(u8*)((char*)arg0+0x2b7);
 *(u16*)((char*)arg0+0x2b8)=v1;
 if((s8)v0!=-1) goto done;
 v1=*(u8*)((char*)arg0+0x2bc);
 v0=v1-1;*(u8*)((char*)arg0+0x2bc)=v0;
 v0=*(s16*)((char*)arg0+0x2ba);
 *(u8*)((char*)arg0+0x2b7)=v1;
 v1=*(s8*)((char*)arg0+0x2b7);
 v0=-v0;*(s16*)((char*)arg0+0x2ba)=v0;
 if(v1==0){*(u8*)((char*)arg0+0x2b4)=0;*(u8*)((char*)arg0+0x2b5)=0;}
 done: ;
}
