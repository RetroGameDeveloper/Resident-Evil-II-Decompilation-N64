s32 func_800087A0(s32,s32,u16,u16*); s32 func_80008B70(s32,s32,u16,u16*,s32); s32 func_8000A66C(void);
s32 func_80009F8C(void *arg0,u16 *arg1) {
char *__repair_addr;
 u16 a,b,c,d,e,f; s32 rv, i,j; u16 *p;
if(*(u8*)((u8*)arg0+0x65)==0) goto start; *(u8*)((u8*)arg0+0x65)=0; rv=func_8000A66C(); if(rv) return rv;
start: a=1;b=3;c=4;d=6;i=1;p=&b;
__repair_addr = (char *)((u8*)arg0+4);

loop: rv=func_800087A0(*(s32*)(__repair_addr),*(s32*)((u8*)arg0+8),*p,arg1); if(rv) return rv;
e=0;f=0; {u16 *q=arg1; do {e+=*q;f+=~*q;q++;} while(q<arg1+0x1C);}
if(*(u16*)((u8*)arg1+0x1c)!=e || *(u16*)((u8*)arg1+0x1e)!=f){i++;p++;if(i<4)goto loop;}
if(i==4)return 10;
for(j=0;j<4;j++){if(j==i)continue;rv=func_80008B70(*(s32*)((u8*)arg0+4),*(s32*)((u8*)arg0+8),((u16*)&a)[j],arg1,1);if(rv)return rv;} return 0;}
