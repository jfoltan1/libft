/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfoltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:48:41 by jfoltan           #+#    #+#             */
/*   Updated: 2022/12/01 15:48:42 by jfoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t    i;
	size_t  b;
	size_t a;
	char *res;
	
	b = ft_strlen(little);
	i = 0;
	a = 0;

	if (little[i] == '\0')
		return (char*)(big);
	while (big[i] != '\0')
	{
		while (i < len &&  little[a] == big[i])    
        	{	
			i++;	         
			a++;
        		if(little[a] == '\0')
        		{		
        			res = &((char *)big)[i-b];
        			return (res);
        		}
        		else if (little[a] != big[i])
        		  a = 0;
        	}	
    	i++;
    	}
	return (NULL);
	
}
/*#include<stdio.h>
int main()
{
	char const *str1 = "LOREM ipsum Dolores lmfaooo";
	char const *str2 = "ipsum";

	printf("%s", ft_strnstr(str1,str2,10));
}*/
