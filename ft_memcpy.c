/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfoltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:58:01 by jfoltan           #+#    #+#             */
/*   Updated: 2022/12/07 15:58:01 by jfoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	
	i = 0;
	while (i < n && src > dest)
	{
		*(char *)(dest+i) = *(char *)(src+i);
		i++;
	}
	return (dest);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char src[] = "Lessgooo";
	char dest[50] = "";
	printf("%s",(char *)ft_memcpy(dest,src,5));
	printf("\n");
	printf("%s",(char*)memcpy(dest,src,5));
}
