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
#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*ptr;

	i = 0;
	j = 0;
	ptr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			ptr[j] = s[i];
			j++;
		}
		i++;
	}
	ptr[j] = 0;
	return (ptr);
}
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

	d = 1;
	while (s[i] != c && s[i])
	{
		d++;
		i++;
	}
	return (d);
}

char	*ft_alloc(size_t a)
{
	char	*ptr;

	ptr = malloc(a * sizeof(char));
	if (!ptr)
		return (NULL);
	return (ptr);
}

char	**ft_arrayalloc(char const *s, char c)
{
	char	**ptr;

	ptr = malloc(sizeof(char *) * ft_delicount(s, c));
	if (!ptr)
		return (NULL);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	a;
	size_t	f;
	char	**ptr;

	ptr = ft_arrayalloc(s, c);
	a = ft_delicount(s, c);
	f = 0;
	i = 0;
	while (a > 0)
	{
		if (a != 1)
			ptr[f] = ft_alloc(ft_sizecount(s, c, i));
		if (a == 1)
			ptr[f] = NULL;
		while (s[i] == c)
			i++;
		ptr[f] = ft_substr(s, i, ft_sizecount(s, c, i));

		i = ft_sizecount(s, c, i) + i;
		a--;
		f++;
	}
	return (ptr);
}

#include <stdio.h>
int main()
{
    const char s[] = "He ge de";
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
}
