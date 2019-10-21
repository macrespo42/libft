/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:28:20 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/21 13:22:27 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			size_alloc(int n)
{
	int			i;

	i = 1;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

static char			*ft_strrev(char *str)
{
	int			i;
	int			len;
	char		tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

static char			*ft_strcpy(const char *src, char *dst)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char				*ft_itoa(int n)
{
	int			i;
	int			neg;
	char		*nptr;

	if (!(nptr = (char*)malloc(sizeof(char) * size_alloc(n))))
		return (NULL);
	if (n == -2147483648 || n == 0)
		return (n == 0 ? ft_strcpy("0", nptr) : ft_strcpy("-2147483648", nptr));
	neg = 0;
	if (n < 0)
	{
		n = n * (-1);
		neg++;
	}
	i = 0;
	while (n != 0)
	{
		nptr[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	if (neg == 1)
		nptr[i++] = '-';
	nptr[i] = '\0';
	return (ft_strrev(nptr));
}
