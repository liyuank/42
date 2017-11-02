/* Assignment name  : ft_strcmp
** Expected files   : ft_strcmp.c
** Allowed functions:
** --------------------------------------------------------------------
**
** Reproduce the behavior of the function strcmp (man strcmp).
**
** Your function must be declared as follows:
**
** int    ft_strcmp(char *s1, char *s2);
**
**
*/
#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
    while (*s1 == *s2)
    {
        if (*s1 == '\0')
        {
            return (0);
        }
        s1++;
        s2++;
    }
    return ((unsigned char)*s1 - (unsigned char)*s2);
}
// test the ft_strcmp function:
int main(void) {
	// your code goes here
	char *ss = "bbd";
	char *dd = "abd";
	
	printf("%d", ft_strcmp(ss, dd));
	return 0;
}
