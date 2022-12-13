/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfoltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:40:46 by jfoltan           #+#    #+#             */
/*   Updated: 2022/11/30 19:40:47 by jfoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	noi = 0;
	while ((i < n - 1) && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	const char s1[] = "";
	const char s2[] = "";
	size_t	n = 2;
	printf("%d\n",ft_strncmp(s1,s2,n));
	printf("%d",strncmp(s1,s2,n));
}*/
