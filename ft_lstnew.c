/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfoltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:20:55 by jfoltan           #+#    #+#             */
/*   Updated: 2022/12/29 13:20:56 by jfoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
t_list *ft_lstnew(void *content)
{
	t_list new;
	
	new = (t_list*)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);	
}
