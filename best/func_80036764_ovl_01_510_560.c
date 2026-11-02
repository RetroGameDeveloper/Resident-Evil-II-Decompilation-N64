typedef struct{u8 p[0x66];u16 h;u8 q[8];s32 z;} Obj; typedef struct{u8 b[8];} Blob8; extern Blob8 D_800B8660_ovl_01; extern s32 func_8008386C_ovl_01(s16,s32,void*,void*); extern s32 func_8006A81C_ovl_01(s32); extern s32 func_80032D44_ovl_01(s32,s32,s32,s32);
s32 func_80036764_ovl_01_510_560(Obj *obj,s32 x,s32 angle){ s16 vals[4]; s32 mode,y;
 vals[0]=0; vals[1]=0; vals[2]=0; vals[3]=0;
 *(Blob8*)vals=D_800B8660_ovl_01;
 func_8008386C_ovl_01(obj->h,obj->z,vals,vals); mode=func_8006A81C_ovl_01(obj->z);
 if(mode<6){switch(mode){case 0:x-=func_80032D44_ovl_01(0,0,vals[0],vals[2]);break;case 1:x=func_80032D44_ovl_01(0,0,vals[0],vals[2])-x;break;case 2:x-=func_80032D44_ovl_01(0,0,vals[2],vals[1]);break;case 3:x=func_80032D44_ovl_01(0,0,vals[2],vals[1])-x;break;case 4:case 5:x=func_80032D44_ovl_01(0,0,vals[1],vals[0])-x;}}
 angle=(s16)angle; y=(x+angle)&0xfff; if(y>=angle*2){if(y<0x801)obj->h+=angle;else obj->h-=angle;} return 0;}
