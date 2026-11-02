typedef struct { u8 b[0x28]; } Blob28;
extern s8 D_80016470;
extern s32 D_800164AC;
s32 func_80008F30(s32);
void func_800089D4(s32 arg0,s32 arg1) {
 s8 sp10,sp11,sp12,sp13,sp35,sp36;
 s16 sp14; Blob28 sp20;
 s32 i; s8 *p; s32 count=arg0; s32 value=arg1; s8 *base=&D_80016470;
 D_800164AC=1; sp11=3; sp12=0x21; sp10=-1; sp13=2;
 sp14=(func_80008F30(value&0xffff)&0xff)|(value<<5); sp36=-1;
 for(i=0x1f,p=&sp35;i>=0;i--,p--) *p=-1;
 if(count>0) for(i=0;i<count;i++) base[i]=0;
 sp20=*(Blob28*)&sp10;
 *(Blob28*)base=sp20;
 base[0x28]=-2;
}
