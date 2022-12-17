#include <stddef.h>
#include <stdlib.h>
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	a;
	char	*ptr;
	
	i = 0;
	a = 0; 
	ptr = (char *)malloc(
		sizeof(s1) * (ft_strlen(s1) + ft_strlen(s2) + 1);
	if(!ptr)
	return(NULL);
	while(s1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while(s2)
	{
		ptr[i] = s2[a];
		a++;
		i++;
	}
	return (ptr);
}
