typedef struct S_state395 { s32 f00; u16 f04,f06; s8 dx,dy,dz; u8 x0B; u16 x0C,x0E,x10,x12,x14,x16,flags; u8 f1A; s8 f1B; u32 f1C; u8 timer,index; s16 x22; u16 x24,x26,x28; u8 pad[0x70-0x2A]; u8 *frames; } S_state395;
extern S_state395 *D_800EBB34_ovl_01; extern void (*D_800EB950_ovl_01[])(void);
extern void func_80039768_ovl_01(void); extern void func_80039B8C_ovl_01(s32,s32,s32);
void func_8003957C_ovl_01(s32 arg0) { S_state395 *p; u16 temp_a0,temp_a1; u8 *var_a0; u8 temp_v1;
if(arg0)D_800EB950_ovl_01[*((u8*)D_800EBB34_ovl_01)]();
if((D_800EBB34_ovl_01->f1C&0xFF00FF00)==0x04001D00)func_80039B8C_ovl_01(255,255,200);
func_80039768_ovl_01();D_800EB950_ovl_01[*((u8*)D_800EBB34_ovl_01+1)]();
p=D_800EBB34_ovl_01;
if(p->flags&2){temp_a1=p->x0E;p->x24+=p->x0C;temp_a0=p->x10;p->x26+=temp_a1;p->x28+=temp_a0;p->x0C+=(s8)p->dx;p->x0E+=(s8)p->dy;p->x10+=(s8)p->dz;}
if(p->flags&1){if(p->timer==0){p->index+=(p->f1A&1);var_a0=p->frames+p->index*8;temp_v1=var_a0[2];if(temp_v1==0){if(var_a0[0]==0){((u8*)p)[1]=0;((u8*)p)[0]=0;p->flags=0;}}else if(temp_v1==0xFF){p->index=var_a0[0];var_a0=p->frames+p->index*8;}p->timer=var_a0[2];}p->timer--;}}
