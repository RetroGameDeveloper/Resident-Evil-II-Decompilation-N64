s32 func_8000DE9C(s32,s32,s32); void func_80001510(void*,void*,void*);
void func_80002314(void *p,s32 unused,s32 arg2,s32 arg3){s32 a=*(s32*)((u8*)p+0x24);func_8000DE9C(a,arg2,arg3);a=*(s32*)((u8*)p+0x24);a+=arg3;*(s32*)((u8*)p+0x30)=a;*(s32*)((u8*)p+0x2c)=a;}
s32 func_800022BC(void *a,void *b){void (*fn)(void*,void*);func_80001510(a,b,0);fn=*(void (**)(void*,void*))((u8*)b+0x24);fn(*(void**)((u8*)b+0x28),*(void**)((u8*)a+0x24));fn(*(void**)((u8*)b+0x28),a);return 0;}
typedef void *(*AllocFn)(s32,s32,s32); typedef void (*FreeFn)(s32,void*);
void *func_800015E0(void *p,s32 arg1,s32 arg2){void *x,*y; x=((AllocFn)*(void**)((u8*)p+0x20))(*(s32*)((u8*)p+0x28),1,0x3c);if(!x)return 0;y=((AllocFn)*(void**)((u8*)p+0x20))(*(s32*)((u8*)p+0x28),1,arg2);*(void**)((u8*)x+0x24)=y;if(y){*(void**)((u8*)x+0x28)=(u8*)y+arg2;*(s32*)((u8*)x+0x34)=arg1;*(s32*)x=0;func_80001510(x,p,(u8*)x+0x38);return x;}((FreeFn)*(void**)((u8*)p+0x24))(*(s32*)((u8*)p+0x28),x);return 0;}
extern s32 D_800138B0; extern u32 D_80013EB4;
void func_800014AC(s32 a){u32 n=0; s32 *p=&D_800138B0; u32 count=D_80013EB4;if(count){for(;;){if(a==*p){p[2]=0;if(n==count){D_80013EB4=n-1;return;}}else{n++;p+=3;if(n>=D_80013EB4)return;}}}}
