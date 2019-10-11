/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 09:26:53 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/11 15:59:54 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft_bonus.h"
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(void*))
{
	t_list		*tmp;
	t_list		*tmp2;
	t_list		*new_l;

	new_l = f(lst);
	tmp2 = new_l;
	tmp = lst;
	while (tmp->next)
	{
		tmp2->next = f(lst);
		tmp2 = tmp2->next;
		tmp = tmp->next;
	}
	tmp2->next = NULL;
	return (new_l);
}
