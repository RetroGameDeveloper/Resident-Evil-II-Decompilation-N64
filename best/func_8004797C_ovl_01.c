extern s32 D_800C5268_ovl_01,D_800C7618_ovl_01,D_800C762C_ovl_01; extern void func_800879D0_ovl_01(void*,void*);
void func_80025F34(void){struct {s32 a,b;} *p=(void*)&D_800C7618_ovl_01; struct {s32 a,b,c,d,e;} *q=(void*)&D_800C762C_ovl_01;q->e=0;p->a=3;q->a=D_800C5268_ovl_01;p->b=(s32)q;func_800879D0_ovl_01(p,q);}
void func_8004797C_ovl_01(void *p,s8 a,s8 b,s8 c,u16 d,u16 e,u16 f,u16 g,u16 h){s8 *q=p;q[8]=a;q[9]=b;q[16]=c;q[17]=d;q[24]=e;q[25]=f;q[32]=g;q[33]=h;q[72]=a;q[73]=b;q[74]=c;q[75]=d;q[76]=e;q[77]=f;q[78]=g;q[79]=h;}
void func_80047B34_ovl_01(void *p,s32 x){*(s8*)((char*)p+3)=x?2:0;}
void func_80047B50_ovl_01(void *p,s32 x){*(s8*)((char*)p+7)=x?2:0;}
