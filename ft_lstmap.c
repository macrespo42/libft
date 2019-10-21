/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 09:26:53 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/21 09:03:12 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*tmp;
	t_list		*new;
	t_list		*out;

	if (!lst && !f)
		return (NULL);
	tmp = lst;
	if (!(out = ft_lstnew(f(tmp->content))))
		return (NULL);
	new = out;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (!(out->next = ft_lstnew(f(tmp->content))))
			return (new);
		del ? del(out->next->content) : 0;
		if (!out->next->content)
		{
			free(out->next);
			out->next = NULL;
		}
		else
			out = out->next;
	}
	return (new);
}
