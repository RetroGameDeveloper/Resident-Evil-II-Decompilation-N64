s32 func_80033634_ovl_01(void); s32 func_80165D3C_ovl_15(void*,s32,s32,s32,s32,s32,s16*); extern s16 D_80166054_ovl_15[]; extern s32 D_80166284_ovl_15;
void func_8016551C_ovl_15(void *arg0){u8 *p=(u8*)arg0;s16 x,y,z; s16 *t;
if(!p[0x2cf])D_80166284_ovl_15=func_80033634_ovl_01()&7;p[0x2cf]=4;t=D_80166054_ovl_15+D_80166284_ovl_15*6;
x=t[0]-0x7f+((func_80033634_ovl_01()&0xff)*2);y=t[1]-0x7f+((func_80033634_ovl_01()&0xff)*2);z=t[2]-0x7f+((func_80033634_ovl_01()&0xff)*2);
func_80165D3C_ovl_15(arg0,0,6,0x2800,t[3],*(s32*)(t+4),&x);}
