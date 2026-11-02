extern u32 D_800128AC; extern s32 D_800C5278; extern u32 func_80005438(s32);
u32 func_80005E84(s32 a,u32 b){u32 c;if((a&65535)==65535)return b;D_800128AC=D_800C5278+0xAF800;c=func_80005438(a&65535);if(D_800128AC<c)return c;return c;}
