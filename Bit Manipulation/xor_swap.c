/*
**  A C function that implements the XOR swap algorithm
**
**  Sep. 23, 2017
**
**
*/
void  xor_swap(int *x, int *y)
{
  if (x != y)
  {
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
  }
}  
    
