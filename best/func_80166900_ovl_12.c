extern s32 D_800E10D0_ovl_01; extern u8 D_800E8FC8_ovl_01[]; extern u8 D_80166EFC_ovl_12[];
s32 func_80033634_ovl_01(s32, void*); s32 func_800377B0_ovl_01(s32,s16,void*,u16*);
void func_80166900_ovl_12(void *arg0,s32 arg1,s32 arg2){
 u16 p0,p1,p2; void *v2; void *v3; s32 t0,t1; u8 b;
 if(*(u8*)((u8*)arg0+0x2bb)){
 t0=arg2&255; v2=D_80166EFC_ovl_12+t0*6; v3=arg0;
 if(t0==4)v3=&D_800E10D0_ovl_01;
 t1=func_80033634_ovl_01(t0,arg0);
 t0=*(u16*)((u8*)v2+2);
 v3=*(void**)((u8*)v3+0x234)+((arg1&127)*0x178);
 t1=(*(s16*)((u8*)v3+0x66)+(t1&255&((t0*2)-1)))-t0;
 b=*(u8*)v2;
 if(b&128){p0=p1=p2=0;func_800377B0_ovl_01(((b&127)<<24)|(*(u8*)((u8*)v2+1)<<16)|*(u16*)((u8*)v2+4),(s16)t1,(u8*)v3+0x38,&p0);}
 else{p0=*(u16*)((u8*)v3+0x4e);p1=*(u16*)((u8*)v3+0x52);p2=*(u16*)((u8*)v3+0x56);func_800377B0_ovl_01(((b&127)<<24)|(*(u8*)((u8*)v2+1)<<16)|*(u16*)((u8*)v2+4),(s16)t1,D_800E8FC8_ovl_01,&p0);}
 (*(u8*)((u8*)arg0+0x2bb))--;
 }
}
