/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:08:39 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/11 15:43:46 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*tmp;
	t_list		*current;

	if (lst)
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
