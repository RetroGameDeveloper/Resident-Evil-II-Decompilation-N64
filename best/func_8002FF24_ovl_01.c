extern void *func_8002FCCC_ovl_01(void*,s32); extern s32 func_8002FD30_ovl_01(void*,s32); typedef struct{void*obj;void*heap;}A;typedef struct{u8 pad[0x48];u32 used;}H;
void *func_8002FF24_ovl_01(A*a,u32 k,u32 n){H*h;void*p;u32 r; s32 ix; void*node;h=(H*)a->heap;
 if(n>0x3B9AC9F0)func_8002FD30_ovl_01(a,3);
 r=n&7;if(r)n+=8-r;
 if(k>=2){*(s32*)((u8*)a->obj+0x14)=11;*(u32*)((u8*)a->obj+0x18)=k;((void(*)(void*))*(void**)a->obj)(a);}
 p=func_8002FCCC_ovl_01(a,n+0x10);ix=k*4;if(!p){func_8002FD30_ovl_01(a,4);ix=k*4;}
 h->used+=0x10+n;node=(u8*)h+ix;*(u32*)((u8*)p+4)=n;*(u32*)((u8*)p+8)=0;*(void**)p=*(void**)((u8*)node+0x38);*(void**)((u8*)node+0x38)=p;return (u8*)p+0x10;}
