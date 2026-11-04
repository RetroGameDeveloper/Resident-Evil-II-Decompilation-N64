typedef struct 
{
  u8 pad[6];
  u8 state;
  u8 pad7[0x2D0];
} O;
void func_80163E64_ovl_11(O *p, void *a, void *b)
{
  int new_var;
  O *new_var2;
  switch (p->state)
  {
    case 0:
      new_var = 1;
      p->state = new_var;
      break;

    case 1:
      (new_var2 = p)->state = 2;

    case 2:
      new_var2->state = 3;
      break;

    case 3:
      new_var2->state = 4;
      break;
      break;

    case 4:
      new_var2->state = 5;
      break;

    case 5:
      new_var2->state = 6;
      break;

    case 6:
      new_var2->state = 7;
      break;

    case 7:
      new_var2->state = 8;
      break;

    case 8:
      new_var2->state = 9;
      break;

    case 9:
      break;

    default:
      break;

  }

}

