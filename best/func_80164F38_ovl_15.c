s16 func_80032D44_ovl_01(s16,s16,s16,s16); s32 func_80083800_ovl_01(s16,u16*,u16*); s32 func_800838F0_ovl_01(s32,s32,s32,u16*); extern s32 D_800C7650_ovl_01,D_800E8FC8_ovl_01,D_80166274_ovl_15,D_80166278_ovl_15,D_8016627C_ovl_15;
void func_80164F38_ovl_15(void *arg0){u16 sp10,sp12,sp14,temp_v0; s16 temp_a0; s32 temp_a2; u8 temp_v1;void *temp_s0;
temp_a2=*(s32*)((u8*)arg0+0x234);temp_v1=*((u8*)arg0+0x2c9);temp_s0=(u8*)temp_a2+0xa48;
if(temp_v1==1)goto first;else if(temp_v1<2)goto end;else if(temp_v1==2)goto second;else goto end;
first:
*(s32*)((u8*)temp_s0+0x64)=(s32)&D_800E8FC8_ovl_01;*(s32*)((u8*)temp_s0+0x1c)=*(s32*)((u8*)temp_s0+0x4c);*(s32*)((u8*)temp_s0+0x20)=*(s32*)((u8*)temp_s0+0x50);*(s32*)((u8*)temp_s0+0x24)=*(s32*)((u8*)temp_s0+0x54);
sp14=0;sp12=0;sp10=0;func_800838F0_ovl_01(temp_a2+0xa64,temp_a2+0xaa0,temp_a2+0xa80,&sp10);
*(s16*)((u8*)&D_80166274_ovl_15+2)=-0x2bc;*(s16*)&D_80166278_ovl_15=-0x1f4;*(s16*)((u8*)&D_80166278_ovl_15+2)=0x46;*(s16*)&D_8016627C_ovl_15=-0xd2;*(s16*)((u8*)&D_8016627C_ovl_15+2)=10;*((u8*)arg0+0x2c9)+=1;
second:
temp_a0=func_80032D44_ovl_01(*(s16*)((u8*)temp_s0+0x1e),*(s16*)((u8*)temp_s0+0x26),*(s16*)((u8*)&D_800C7650_ovl_01+0x1aaa),*(s16*)((u8*)&D_800C7650_ovl_01+0x1ab2));
sp14=0;sp10=*(u16*)((u8*)&D_80166274_ovl_15+2);func_80083800_ovl_01(temp_a0,&sp10,&sp10);
*(s32*)((u8*)temp_s0+0x1c)+=(s16)sp10;*(s32*)((u8*)temp_s0+0x20)+=*(s16*)&D_80166278_ovl_15;*(u16*)((u8*)temp_s0+0x5c)+=*(u16*)&D_8016627C_ovl_15;*(s16*)&D_80166278_ovl_15+=*(u16*)((u8*)&D_80166278_ovl_15+2);*(s32*)((u8*)temp_s0+0x24)+=sp14;
if(*(s32*)((u8*)temp_s0+0x20)<0)goto notreset;*(s32*)((u8*)temp_s0+0x20)=0;*((u8*)arg0+0x2c9)=0;
notreset:temp_v0=*(u16*)&D_8016627C_ovl_15+*(u16*)((u8*)&D_8016627C_ovl_15+2);*(u16*)&D_8016627C_ovl_15=temp_v0;if((s16)temp_v0<0)goto end;*(u16*)&D_8016627C_ovl_15=0;*(u16*)((u8*)&D_8016627C_ovl_15+2)=0;
end:return;}
