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
	int	i;
	
	i = 0;

	char *nsrc;
	char *ndest;
	char temp[n];
	nsrc = (char *)src;
	ndest = (char*)dest;
	if (src < dest)
	up until N bytes mf 
	
	
	while (nsrc[i] != '\0')
	{
		temp[i] = nsrc[i];
		i++;
	}	
	i = 0;
	while (temp[i] != '\0')
	{
		ndest[i] = temp[i];
		i++;
	}
}
//ft_memmove(src + 1, src, 10);
#include <stdio.h>
#include <string.h>
int main()
{
	char dest[] = "Maybe I wont";
	const char src[] = "Please work";
	//size_t n = 11;
	unsigned long t = 11;
	//ft_memmove(dest,src,n);
	memmove(dest,src,t);
	printf("%s",dest);
}
if overlap and src is smalker than dest 

if src < dest 




















