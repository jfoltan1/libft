/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfoltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:50:37 by jfoltan           #+#    #+#             */
/*   Updated: 2022/12/07 12:50:37 by jfoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *str1;
	unsigned char *str2;
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while(i < n)
	{
		if (str1[i] != str2[i])
		return (str1[i] - str2[i]);
	i++;
	}
	return(0);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char s1[] = "ABCDEFGH";
	char s2[] = "ABCDEFGH";
	printf("%d", ft_memcmp(s1,s2,10));
	printf("\n");
	printf("%d", memcmp(s1,s2,10));
}*/
