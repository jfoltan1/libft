/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfoltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:43:15 by jfoltan           #+#    #+#             */
/*   Updated: 2022/12/02 18:43:17 by jfoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stddef.h>
char *ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	
	if (s[i] == '\0')
	return(&((char*)s)[i]);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		return(&((char*)s)[i]);
		if (s[i+1] == '\0' && s[i+1] == c)
		return(&((char*)s)[i+1]);
	i++;		
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{
	const char str[] = ""; 
	int c = 0;
	printf("%s",ft_strchr(str,c));
	//printf("\n");
	printf("%s",strchr(str,c));
}*/
