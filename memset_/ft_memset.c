#include <stddef.h>
void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	
	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = c;
		i++;
	}
	return(s);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "ABCDEFGH";
	int c = 65;
	printf("%s", (char *)ft_memset(str,c,5));
	printf("\n");
	printf("%s",(char *)memset(str,c,5));

}
