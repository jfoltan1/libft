/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfoltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:02:10 by jfoltan           #+#    #+#             */
/*   Updated: 2022/12/02 19:02:11 by jfoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <string.h>
char	*ft_strrchr(const char *s,int c)
{
	int 	i;
	const char *res;
	
	i = 0;
	res = NULL;
	while(s[i] != '\0')
	{
		if(s[i] == c)
		res = &s[i];
		
	i++;
	}
	if (s[i+1] == c)
	{
		return(&((char *)s)[i+1]);
	}
	return(((char*)res));   
}
#include <stdio.h>
int main()
{
	const char str[] = "ABCDEFAGH";
	int c = 0;
	printf("%s",ft_strrchr(str,c));
	printf("\n");
	printf("%s",strrchr(str,c));
}
