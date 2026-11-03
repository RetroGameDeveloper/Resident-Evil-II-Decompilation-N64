extern u8 D_80148B80[]; extern u8 D_80148C00[]; u8 func_800AC684_ovl_01(s32 a,s32 b){u8 *p; s32 t=b&255; if(t==255){p=D_80148C00+(a&255);}else{p=D_80148B80+(a&255)+t*16;}return *p;}
