/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfoltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:10:08 by jfoltan           #+#    #+#             */
/*   Updated: 2022/12/07 11:10:09 by jfoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *se;
	
	i = 0;
	se = (unsigned char *)s;
	while(i < n && se[i] != '\0')	
	{
		if(se[i] == c)
		{
		return((void*)(se + i));
		}
	i++;
	}
	return(NULL);
}	
/*#include <stdio.h>
#include <string.h>
int main()
{
	const char str[] = "";
	int c;
	c = 68;
	
	printf("%s", (char *)ft_memchr(str,c,3));
	printf("\n");
	printf("%s",(char *)memchr(str,c,3));
}*/
