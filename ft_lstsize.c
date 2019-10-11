/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:29:32 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/10 17:19:26 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int		ft_lstsize(t_list *lst)
{
	int		lst_size;

	lst_size = 0;
	while (lst)
	{
		lst = lst->next;
		lst_size++;
	}
	return (lst_size);
}
