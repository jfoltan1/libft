#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	unsigned int i;
	size_t j;
	
	i = 0;
	j = 0;
	char *ptr;
	ptr =(char *)malloc(sizeof(*s) * (len + 1));
	if(!ptr)
		return(NULL);
	while(s[i])
	{
		if(i >= start && j < len)
		{
		ptr[j] = s[i];
		j++;
		}
	i++;	
	} 
	ptr[j] = 0;
	return(ptr);
}
/*#include<stdio.h>
int main()
{
	const char *str = "LOREM ipsum Dolores lmfaooo";
	unsigned int i = 0;
	size_t a = 10;
	printf("%s", ft_substr(str,i,a));
}*/
