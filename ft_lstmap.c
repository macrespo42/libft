/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 09:26:53 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/18 13:45:33 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list		*new_l;
	t_list		*tmp;
	t_list		*prev;
	t_list		*start;

	if (!lst || !f)
		return (NULL);
	tmp = lst;
	start = NULL;
	prev = NULL;
	while (tmp)
	{
		if (!(new_l = (t_list*)malloc(sizeof(t_list))))
		{
			del(lst);
			return (NULL);
		}
		if (prev)
			prev->next = new_l;
		prev = new_l;
		new_l->content = f(tmp->content);
		if (start == NULL)
			start = new_l;
		tmp = tmp->next;
	}
	return (start);
}
