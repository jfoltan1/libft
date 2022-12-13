/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfoltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:56:39 by jfoltan           #+#    #+#             */
/*   Updated: 2022/12/07 10:56:39 by jfoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char *se;

	i = 0;
	se = (unsigned char *)s;
	while (i < n)
	{
		se[i] = 0;
		i++;
	}
	s = se;
}
/*#include <stdio.h>
int main()
{
	char str[]= "123456789";
	ft_bzero(str,5);
	printf("%s",str);
}*/
