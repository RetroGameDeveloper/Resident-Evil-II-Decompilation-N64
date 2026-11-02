s32 func_80032B8C_ovl_01(void *,s32); s32 func_800334F8_ovl_01(void *,s32,s32,s32); s32 func_80033678_ovl_01(void *); s32 func_80077D48_ovl_01(s32,void *); s32 func_80089D34_ovl_01(void *,s32,s32,s32); s32 func_801635A0_ovl_30(void *,s32); s32 func_801672F4_ovl_30(void *,s32,s32); s32 func_80167730_ovl_30(void *,s32); extern u8 D_80167CEC_ovl_30[];
void func_80163A34_ovl_30(u8 *p,s32 arg1,s32 arg2){
u32 active; s16 entry; s32 next; u8 *base;
if(!p[7]){p[7]=1;p[0x206]=4;p[0x207]=4;}
func_800334F8_ovl_01(p,arg1,arg2,0);
if(func_80089D34_ovl_01(p,arg1,arg2,0x100))*(s16*)(p+6)=0x200;
func_80032B8C_ovl_01(p,0);func_80033678_ovl_01(p);
active=*(u16*)*(u32**)(p+0x214)&7;
if(active&&*(s8*)(p+0x206)!=(s32)active&&func_80167730_ovl_30(p,active-1)){if(active<3)func_80077D48_ovl_01(3,p);else func_80077D48_ovl_01(13,p);p[0x206]=active;p[0x207]=4;}
if(*(s8*)(p+0x207)){
base=D_80167CEC_ovl_30;
entry=*(s16*)(base+(((s32)*(s8*)(p+0x206)-1)<<2));
if(*(s8*)(p+0x206)<3){func_801672F4_ovl_30(p,(entry+1)&255,1);next=(entry+3)&255;}else next=entry&255;
func_801672F4_ovl_30(p,next,1);p[0x207]--;
}
base=D_80167CEC_ovl_30;
func_801635A0_ovl_30(p,(*(u8*)(base+((s32)*(s8*)(p+0x206)<<2)+1)+1)&255);
}
