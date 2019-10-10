/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:50:58 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/10 14:55:37 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list				*ft_lstnew(void *content)
{
	t_list		*new;

	if (!(t_list = (t_list)malloc(sizeof(t_list))))
		return (NULL);
	if (t_list)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}
