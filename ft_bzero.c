/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:55:32 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/07 20:20:14 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char		*str;

	str = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
