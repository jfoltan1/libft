#include <stddef.h>
#include <stdlib.h>
char	*ft_strdup(const char *s)
{
	size_t	i;
	char *ptr;
	
	i = 0;
	ptr = (char *) malloc(sizeof(s));
	if(!ptr)
	return (NULL);
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = 0;
	return(ptr);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char str[]="ABCDEFGH";
	printf("%p",ft_strdup(str));
	printf("\n");
	printf("%p",strdup(str));
	
}
