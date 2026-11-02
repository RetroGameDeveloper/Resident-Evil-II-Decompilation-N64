void func_80000518(void) { for (;;) { } }
extern s32 D_80000300, D_800138A0, D_80018A80;
s32 func_800004F0(s32); s32 func_80000598(void); s32 func_800070C0(void);
void main(void) {
 s32 *p=&D_800138A0; s32 n=((s32)&D_80018A80-(s32)&D_800138A0)/4-1;
 if(n!=-1) do { *p=0; n--; p++; } while(n!=-1);
 func_800004F0(0); func_800070C0();
 if(!D_80000300) for(;;) {}
 func_80000598();
}
void func_80000F08(s32 **arg0, s32 *arg1) {
 s32 *t8=*arg0, *t9=arg0; s32 t7=arg1[1];
 if (((s32 *)t8)[1]<t7) goto done;
 do { t9=t8; t8=*(s32 **)t8; } while (((s32 *)t8)[1]>=t7);
 done:
 arg1[0]=*t9; *t9=arg1; *(s32 **)((u8 *)arg1+8)=arg0;
}
void func_80000F50(s32 **p) { *p=**p; }
