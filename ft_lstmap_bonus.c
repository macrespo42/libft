/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 09:26:53 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/11 10:57:31 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(void*))
{
	t_list		*new_l;

	if (!lst)
		return (NULL);
	if (!(new_l = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	while (lst->next)
	{
		new_l = f(lst);
		lst = lst->next;
	}
	new_l->next = NULL;
	return (new_l);
}
