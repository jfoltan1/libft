/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfoltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:44:02 by jfoltan           #+#    #+#             */
/*   Updated: 2022/12/19 18:44:03 by jfoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_delicount(char const *s, char c)
{
	size_t	i;
	size_t	f;

	f = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			f++;
	i++;
	}
	return (f + 2);
}
int	ft_sizecount(char const *s, char c, size_t i)
{
	size_t	d;
	d = 0;
	while (s[i])
	{
		if (s[i] == c)
			break;
		d++;
		i++;
		
	}
	return (d);
}
char	*ft_alloc(size_t a)
{
	char	*ptr;

		ptr = malloc(sizeof (char) * a + 1);
		if (!ptr)
			return (NULL);
	return (ptr);
}
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	a;
	size_t	b;
	size_t	f;
	char	**ptr;

	ptr = malloc(sizeof(char *) * ft_delicount(s,c));
	if (!ptr)
		return (NULL);
	f = i = b = 0;
	a = ft_delicount(s,c);
	while(a > 0)
	{
		if (a != 1)
		ptr[f] = ft_alloc(ft_sizecount(s,c,i));
		if (a == 1)
			{
			ptr[f] = malloc(sizeof(char));
			ptr[f] = NULL;
			}
		while (s[i] != c && s[i])
		{
			if (s[i] != c)
				ptr[f][b] = s[i];
		i++;	
		b++;
		}
	i++;
	if (a != 1)
		ptr[f][b] = 0;
	a--;
	b = 0;
	f++;
	}
	return(ptr);
}
/*#include <stdio.h>
int main()
{
	const char s[] = "He an we";
	char c = ' ';
	char **ptr = ft_split(s,c);
	int i;
	i = 0;
	while (ptr[i])
	{
	printf("%s",ptr[i]);
	printf("\n");
	i++;
	}
}*/
