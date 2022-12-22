/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfoltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:51:00 by jfoltan           #+#    #+#             */
/*   Updated: 2022/12/21 16:51:01 by jfoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<stddef.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!s || !f)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
static char	ft_test(int c)
{
	char a;
	if (a >= '97'&& a <= '122')
		return (c - '32');
	else
		return (c);
}
char	*f(unsigned int i, char c) 
{
return ft_test(c);
}

#include <stdio.h>
int main()
{
	const char str[] = "ABCDEFG";
	printf("%s",ft_strmapi(str,f)));
}*/
