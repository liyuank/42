/*
** Alowed function: write()
** 
*/

#incldue <unistd.h>

int   main(void)
{
  write(1, "AbCdEfGhIjKlMnOpQrStUvWxYz\n", 28);
  return(0);
}
  
