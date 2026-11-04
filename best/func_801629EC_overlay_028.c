typedef struct { u8 pad[0x18000]; u8 fields[0x2000]; } Global;
typedef struct { s32 unk_00; s32 unk_04; u8 pad[0x284]; s32 unk_28C; u8 pad2[0x26]; u8 unk_2B6; u8 pad3; u16 unk_2B8; } Player;
extern Global D_800C7650_ovl_01;
s32 func_80032EA4_ovl_01(void *, s32, s32, s32);
s32 func_80033634_ovl_01(void);
void func_801629EC_overlay_028(Player *arg0) {
 s32 temp_s3; s32 temp_v0; s32 var_v0; s32 var_v0_2; s32 var_v0_3; u32 temp_s2;
 u8 *g=(u8 *)&D_800C7650_ovl_01+0x18000;
 temp_s2=arg0->unk_28C;
 func_80032EA4_ovl_01(arg0,*(s32 *)(g+0x1AA8),*(s32 *)(g+0x1AB0),0x5F4);
 temp_s3=func_80032EA4_ovl_01(arg0,*(s32 *)(g+0x1AA8),*(s32 *)(g+0x1AB0),0x270);
 temp_v0=func_80032EA4_ovl_01(arg0,*(s32 *)(g+0x1AA8),*(s32 *)(g+0x1AB0),0x338);
 if (((temp_v0<<16)==0)&&temp_s2<0x5DCU) { arg0->unk_04=0x01050000; if(arg0->unk_2B6<0xA&&(func_80033634_ovl_01()&1))arg0->unk_04=0x01030000; }
 if(arg0->unk_2B6==0) {
 var_v0=temp_s2<0xBB8U;
 if(*(g+0x1CEF)==0) {
 var_v0_2=temp_s3<<16;
 if((temp_v0<<16)==0) {
 if(temp_s2<0xBB8U) { var_v0_2=temp_s3<<16; if(temp_s2>=0x709U) { arg0->unk_04=0x01020000; if((arg0->unk_2B8&1)&&(func_80033634_ovl_01()&3))arg0->unk_04=0x01070000; if(arg0->unk_2B8&0x20)arg0->unk_04=0x01070000; goto L15; } } else { L15: var_v0_2=temp_s3<<16; }
 }
 var_v0_3=temp_v0<<16;
 if(var_v0_2==0) { if(temp_s2<0x9C4U) { var_v0_3=temp_v0<<16; if(temp_s2>=0x709U) {var_v0_3=temp_v0<<16;if(!(func_80033634_ovl_01()&3)){arg0->unk_04=0x01070000;goto L21;}}}else{L21:var_v0_3=temp_v0<<16;} }
 if(var_v0_3==0&&temp_s2<0x708U)arg0->unk_04=0x01030000;
 goto L26;
 }
 goto L27;
 }
 L26: var_v0=temp_s2<0xBB8U;
 if(*(g+0x1CEF)!=0) { L27: if(var_v0)arg0->unk_04=0x01040000; }
}
