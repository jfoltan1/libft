#include <stddef.h>
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t a;
	size_t dstlen;
	size_t srclen;
	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	a = dstlen;
	 if (dstlen < size -1 && size > 0)
	{
		while (src[i] && dstlen + i < (size -1))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
	dst[j] = 0;
	}
	if (dstlen >= size)
		dstlen = size;
	return(dstlen +srclen);
}
