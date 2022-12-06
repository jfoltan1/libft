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
#include <stddef.h>

size_t    ft_strlen(const char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    i++;
    return(i+1);
}
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
		while (i <= len &&little[a] == big[i])    
        	{	
			i++;	         
			a++;
        		if(a == b)
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
/*#include <stdio.h>
#include <bsd/string.h>
int main()
{
	const char big[] = "needle in a haystack";
	const char little[] = "haystackd";
	size_t len = 50;
	printf("%s",ft_strnstr(big,little,len));
	printf("%s",strnstr(big,little,len));
/*have to include -lbsd flag for compiler to find strnstr*/
*/
