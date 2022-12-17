#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	a;
	size_t	f;
	size_t	g;
	char	*ptr;
	
	f = ft_strlen(s1);
	g = ft_strlen(s2);
	i = 0;
	a = 0; 
	ptr = (char *)malloc(sizeof(char) * (f + g + 1));
	if(!ptr)
	return(NULL);
	while(s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while(s2[a])
	{
		ptr[i] = s2[a];
		a++;
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
/*#include<stdio.h>
int main()
{
	char *str1 = "LOREM ipsum Dolores lmfaooo";
	char *str2 = "megememememe";
	printf("%s", ft_strjoin(str1,str2));
}*/
