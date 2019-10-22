/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 22:02:41 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/22 10:21:27 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	char		*tab;

	if (!(tab = (char*)malloc(size * count)))
		return (NULL);
	ft_bzero(tab, count * size);
	return (tab);
}
