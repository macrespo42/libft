/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:08:39 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/16 10:09:35 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*tmp;
	t_list		*current;

	if (lst && del)
	{
		tmp = *lst;
		while (tmp)
		{
			current = tmp;
			del(tmp->content);
			free(tmp);
			tmp = current->next;
		}
		*lst = NULL;
	}
}
