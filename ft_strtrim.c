#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t a;
	size_t b;
	char *ptr;
	
	i = 0;
	a = 0;
	b = 0;
	ptr = (char *)malloc(sizeof(s1));
	if (!ptr)
	return(NULL);
	while(s1[i])
	{
		while(a != strlen(set))
		{
			if (set[a] == s1[i])
			i++;
		a++;	
		}
		if (a == strlen(set) && s1[i+1] != set)
		ptr[b] = s1[i];
	a = 0;
	i++;
	b++;
	}
	ptr[i] = 0;
	return(ptr);	
}
#include<stdio.h>
int main()
{
	char *s1 ="22222a2b2c2d2e22222";
	char a = '2';
	printf("%s",ft_strtrim(s1,&a));	
}
