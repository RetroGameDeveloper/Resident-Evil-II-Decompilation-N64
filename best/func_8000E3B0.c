extern u32 D_80000300; extern u8 D_80012970[];
extern s16 D_80012972,D_800129A2; extern s32 D_80012974,D_800129A4; extern void *D_800129A8,*D_800129D0,*D_800129D4; extern u8 D_80012A00[],D_80012A50[],D_80012AA0[]; extern volatile u32 D_A4400000;
extern void func_80006650(void*,s32); extern void func_8000ECB0(void);
typedef struct {u16 f0;u8 pad[6];u8 *ptr;s32 fC;} S;
void func_8000E3B0(void){
 u32 mode;u8 *var_v0;
 func_80006650(D_80012970,0x60);mode=D_80000300;
 D_800129D0=D_80012970;D_800129D4=D_80012970+0x30;
 D_800129A2=1;D_80012972=1;D_800129A4=0x80000000;D_80012974=0x80000000;
 if(mode==0)var_v0=D_80012AA0;else if(mode==2)var_v0=D_80012A00;else var_v0=D_80012A50;
 D_800129A8=var_v0;
 ((S*)D_800129D4)->f0=0x20;((S*)D_800129D4)->fC=*(s32*)((u8*)((S*)D_800129D4)->ptr+4);
 if(*(volatile u32*)0xA4400010<0xB)goto done;
 do{}while(*(volatile u32*)0xA4400010>=0xB);
 done:D_A4400000=0;func_8000ECB0();
}
