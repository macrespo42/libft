/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:28:20 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/22 10:48:41 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static int	len_num(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		if (n == -2147483648)
			return (11);
		else
			n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*str_n;
	int		len;
	int		i;
	long	n1;
	int		i2;

	i = 0;
	i2 = 1;
	n1 = (long)n;
	len = len_num(n1);
	if (!(str_n = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n1 < 0)
	{
		str_n[i++] = '-';
		n1 *= -1;
	}
	while (len - i2 >= i)
	{
		str_n[len - i2] = ('0' + n1 % 10);
		n1 /= 10;
		i2++;
	}
	str_n[len] = '\0';
	return (str_n);
}
