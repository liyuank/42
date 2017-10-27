/*
** another way to write the ft_putstr.c file.
** It's not asked directly in the exam but we need to know how to write
** the ft_putstr function.
** This one doesn't implement ft_putchar first!
*/
#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        write(1, str, 1);
        str++;
    }
}

int main()
{
    char *str;
    
    str = "Hello";
    ft_putstr(str);
    return 0;
}
