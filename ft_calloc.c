/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 22:02:41 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/08 12:40:21 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	unsigned char		*tab;

	if (!(tab = (unsigned char*)malloc(size * count + 1)))
		return (NULL);
	ft_bzero(tab, count * size + 1);
	return (tab);
}
