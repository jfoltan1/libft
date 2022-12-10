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
void	ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	
	i = 0;

	char *nsrc;
	char *ndest;
	char temp[n];
	nsrc = (char *)src;
	ndest = (char*)dest;
	
	while (i < n && nsrc[i] != '\0')
	{
		temp[i] = nsrc[i];
		i++;
	}	
	i = 0;
	while ( i < n && temp[i] != '\0')
	{
		ndest[i] = temp[i];
		i++;
	}
}

#include <stdio.h>
#include <string.h>
int main()
{
	char dest[] = "Maybe I wont";
	const char src[] = "Please work";
	size_t n = 5;
	//unsigned long t = 5;
	ft_memmove(dest,src,n);
	//memmove(dest,src,t);
	printf("%s",dest);
}

