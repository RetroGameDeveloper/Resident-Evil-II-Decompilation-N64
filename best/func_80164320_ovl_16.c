typedef struct 
{
  unsigned char p[0x2b8];
  unsigned short fl;
} A;
void func_80164320_ovl_16(A *p, int a, int b)
{
  unsigned int new_var;
  unsigned char s = p->p[6];
  if (s < 6)
  {
    new_var = 3;
    switch (s)
    {
      case 3:
        p->p[6] = 4;

      case 2:
        p->p[6] = new_var;
        break;

      case 1:
        p->p[6] = 2;
        break;

      case 0:
        break;
        p->p[6] = 1;
        break;

      case 5:
        p->p[6] = 0;
        break;

      case 4:
        p->p[6] = 5;
        break;

    }

  }
}

