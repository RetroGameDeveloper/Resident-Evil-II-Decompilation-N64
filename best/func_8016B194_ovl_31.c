typedef struct {u8 pad[0x2C4];s8 f2C4;u8 state;u16 timer;u8 pad2C8[8];u8 ix0,ix1;} Obj;
typedef struct {u8 pad[0x120];s16 *values;} Ctx;
void func_8016B194_ovl_31(Obj*p,Ctx*ctx){
 s16 *v;u8 state=p->state;u16 count;
 switch(state){
 case 0:p->state=1;p->timer=8;
 case 1:
  v=ctx->values+p->ix0;*v-=p->timer;
  v=ctx->values+p->ix1;*v-=p->timer;
  v=ctx->values+p->ix1;if(*v<0)*v=0;
  p->timer=(s16)p->timer*2;
  v=ctx->values;v[8]=(u16)((u32)(u16)v[8]<<16)>>17;
  v=ctx->values+p->ix0;if(*v < -0x338)*v=-0x338;
  if(ctx->values[p->ix0]==-0x338&&ctx->values[p->ix1]==0){p->state=2;p->timer=0;}
  break;
 case 2:
  v=ctx->values+p->ix0;*v+=p->timer;p->timer++;
  v=ctx->values+p->ix0;if(*v<=0)break;
  *v=0;p->state=3;break;
 case 3:p->f2C4=0;p->state=0;break;
 }
}
