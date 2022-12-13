/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfoltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:00:38 by jfoltan           #+#    #+#             */
/*   Updated: 2022/12/06 11:00:38 by jfoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (src < dest)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}	
	else 
	{
		i = 0;
		while(i < (int)n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return(dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char dest[] = "Maybe I wont";
	const char src[] = "Please work";
	size_t n = 5;
	//ft_memmove(dest,src,n);
	memmove(dest,src,n);
	printf("%s",dest);
}
*/
