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
	int	switcharoony;
	int	a;

	switcharoony = 0;
	a = 0;
	while (*s)
	{
		if (*s != c && switcharoony == 0)
		{
			switcharoony = 1;
			a++;
		}
		else if (*s == c)
			switcharoony = 0;
		s++;
	}
	return (a);
}

int	ft_sizecount(char const *s, char c, size_t i)
{
	size_t	d;

	d = 0;
	while (s[i] != c && s[i])
	{
		d++;
		i++;
	}
	return (d);
}

void	ft_freemebaby(char **ptr, int f)
{
	while (f > -1)
	{
		free(ptr[f]);
		f--;
	}	
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int	a;
	int	f;
	char	**ptr;

	a = ft_delicount(s, c);
	f = -1;
	i = 0;
	ptr = (char **)malloc((a + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (f++ < a)
	{
		while (s[i] == c)
			i++;
		ptr[f] = ft_substr(s, i, ft_sizecount(s, c, i));
		if (!ptr[f])
		{
			ft_freemebaby(ptr, f);
			return (NULL);
		}
		i = ft_sizecount(s, c, i) + i;
	}
	ptr[f] = NULL;
	return (ptr);
}

/*#include <stdio.h>
int main()
{
    const char s[] = "Hs as ad as fs.";
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
