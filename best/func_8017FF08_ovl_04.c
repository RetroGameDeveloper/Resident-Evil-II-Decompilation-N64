
typedef struct {s32 type;void*next;} A;typedef struct{s32 size;s32*cursor;s32*data;}B;
extern s32 D_80131EB0,D_80180A58_ovl_04;extern A D_80180A5C_ovl_04;extern B D_80180A64_ovl_04;extern s32 D_80181F14_ovl_04;extern s32 func_800879D0_ovl_01(A*);extern s32 func_8000CB60(s32*,s32,s32);
s32 func_8017FF08_ovl_04(s32 arg0){s32 n=arg0>>4;A *a3=&D_80180A5C_ovl_04;B *v1=&D_80180A64_ovl_04;s32 *a1=&D_80181F14_ovl_04;a3->type=5;a3->next=v1;v1->size=n;v1->cursor=&D_80180A58_ovl_04;v1->data=a1;if(n==0)goto zero;if(D_80131EB0==0)goto fallback;func_800879D0_ovl_01(a3);return 1;fallback:D_80180A58_ovl_04=10;goto common;zero:D_80180A58_ovl_04=0;common:func_8000CB60(a1,0,0);return 1;}
