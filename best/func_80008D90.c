extern u8 D_80016470[]; extern s32 D_800164AC; s32 func_80008F30(s32);
typedef struct { u8 b[0x28]; } Blob28;
void func_80008D90(s32 arg0,s32 arg1,u8 *arg2){
 s32 i; s32 var; u8 *a2; u8 *a3; u8 *s2; u8 *s3; u8 sp[0x28]; Blob28 temp;
 s3=arg2;s2=D_80016470;D_800164AC=1;
 sp[1]=0x23;sp[2]=1;sp[3]=3;a2=sp;
 sp[0]=0xFF;
 *(u16*)(sp+4)=(func_80008F30(arg1&0xFFFF)&0xFF)|(arg1<<5);
 for(i=0;i<0x20;i++)sp[6+i]=s3[i];
 sp[0x26]=0xFF;
 if(arg0){var=0;if(arg0>0) do{*s2=0;var++;s2++;}while(var<arg0);}
 a2=sp;a3=s2;
 temp=*(Blob28*)a2;*(Blob28*)a3=temp;
 s2[0x28]=0xFE;
}
