typedef struct {u8 pad[4];u8 unk4;u8 p5[8];u8 mode;u8 pE[0x27e];s32 val;u8 p290[0x25];s8 flag;u8 p2b6[0x12];u16 bits;} O;
extern u8 D_800C7650_ovl_01[],D_800E10D0_ovl_01[];
s32 func_80036EA0_ovl_01(s32,s32,s32,s32);
void *func_801626E8_overlay_016(O*p){u32 off=0x18000;u8*gp=D_800C7650_ovl_01;u8*tab=gp+off;s32 v;void*r;
 if(*(s16*)(tab+0x1c72)<0)goto zero;
 v=7;if(p->unk4==v){p->flag=0;goto zero;}
 v=p->bits&1;if(v)goto def;
 v=p->mode;if((u32)v<2){p->flag=1;v=p->mode;v<<=2;v+=(u32)gp;v+=off;v+=0x1d38;r=*(void**)v;goto done;}
 v=func_80036EA0_ovl_01(p->val,0xbb8,0x2328,0x238c);
 if(v==1){v=*(u16*)(tab+0x1a7a)&5;if(!v)goto zero;p->flag=1;goto special;}
 if(v==0){v=*(u32*)(tab+0x1a78)&0x17;if(!v)goto zero;p->flag=(s8)p->val;goto special;}
 if((u32)v<4){v=*(u16*)(tab+0x1a7a)&5;if(!v)goto zero;p->flag=1;goto special;}
 zero:r=0;goto done;
 special:r=(void*)0x800e0000;goto done;
 def:r=D_800E10D0_ovl_01;
 done:return r;
}
