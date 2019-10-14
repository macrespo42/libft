/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 09:26:53 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/14 05:44:30 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void*))
{
	t_list		*tmp;
	t_list		*new_l;

	tmp = NULL;
	new_l = NULL;
	while (lst)
	{
		if (!new_l)
		{
			new_l = f(lst);
			tmp = new_l;
		}
		else
			tmp->next = f(lst);
	}
	return (new_l);
}
