#include "libft.h"
void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;
	ptr = malloc(sizeof(size) * nmemb);
	if(!ptr)
		return(NULL);
	ft_bzero(ptr,nmemb);
	return(ptr);
}
