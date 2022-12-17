#include <stddef.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *ptr;
	ptr = (char *) malloc(sizeof(char) * len);
	if(!ptr)
	return(NULL);
	ptr = (char *)s + start;
	return(ptr);
}
