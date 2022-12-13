#include <stddef.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	
	i = 0;
	if (size > 0)
	{
		while(src[i] && i < (size -1))
		{
			dst[i] = src[i];
			i++;
		} 
	dst[i] = 0;
	}
	while(src[i])
		i++;
	return(i);
}
#include <stdio.h>
#include <bsd/string.h>
int main()
{
	char dst[] = "Prosim ukaz mi";
	const char src[] = "laska moja";
	printf("%d", ft_strlcpy(dst,src,5));
	printf("\n");
	printf("%d", strlcpy(dst,src,5));
}
