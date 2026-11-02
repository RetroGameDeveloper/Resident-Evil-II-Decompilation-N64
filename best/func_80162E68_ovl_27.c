s32 func_80033634_ovl_01(s32); s32 func_80089D34_ovl_01(void*,s32);
void func_80162E68_ovl_27(void *arg0) {
 u16 temp_v0; u8 *temp_s1; u8 temp_v1; s32 one=1;
 temp_v1=*(u8*)((s8*)arg0+7); temp_s1=(u8*)*(s32*)((s8*)arg0+0x250)+0x2B4;
 switch(temp_v1) {
 case 0: *(u8*)((s8*)arg0+7)=one; *(u16*)((s8*)arg0+0x1F4)=(func_80033634_ovl_01(1)&0x1F)+0x1E;
 case 1:
  temp_v0=*(u16*)((s8*)arg0+0x1F4)-1; *(u16*)((s8*)arg0+0x1F4)=temp_v0;
  if((temp_v0<<16)==0){*(u8*)((s8*)arg0+7)=2;*(s32*)((s8*)arg0+0x1E8)=0x033C0700;} break;
 case 2: if(func_80089D34_ovl_01(arg0,0x200)) *(u8*)((s8*)arg0+7)=0; break;
 }
 if(*temp_s1){if((u32)(*(s32*)((s8*)arg0+0x290)&0x3FFFFFFF)<0x3E8)goto block;}
 else if((u32)*(s32*)((s8*)arg0+0x28C)<0x3E8){block:if(!*(u8*)((s8*)arg0+0x2BE))*(s16*)((s8*)arg0+6)=0x100;}
}
