/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 09:26:53 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/14 09:06:27 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void*))
{
	t_list		*new_l;
	t_list		*tmp;

	if (!(new_l = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	tmp = NULL;
	if (lst && f)
	{
		tmp = lst;
		while (tmp)
		{
			if (new_l == NULL)
			{
				new_l = f(lst);
				tmp = tmp->next;
			}
			else
				new_l = lst->next;
		}
	}
	return (new_l);
}
