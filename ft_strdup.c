#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
char	*ft_strdup(const char *s)
{
	size_t	i;
	char *ptr;

	i = ft_strlen(s) + 1;
	ptr = (char *) malloc(sizeof(char) * i);
	if(!ptr)
	return (NULL);
	ptr = ft_memcpy(ptr,s,i);
	return(ptr);
}
