s32 func_801635F4_ovl_15(s32 arg0,s32 arg1,s32 arg2) {
 s32 v1=arg0-arg1, a1, t0, v0, q, t;
 a1=v1+1;
 t0=arg2*a1;
 t0=t0*a1;
 v0=arg0*arg0;
 if(arg1!=0) {
   q=t0/v0;
   t=arg2*v1;
   t=t*v1;
   t=t/v0;
   return q-t;
 }
 return arg2;
}
