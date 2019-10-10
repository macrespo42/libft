/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:54:17 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/10 16:40:25 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **alst, t_list *new)
{
		if (!*alst)
			return (NULL);
		while (*alst->next)
			*alst = *alst->next;
		new->next = *alst->next;
}
