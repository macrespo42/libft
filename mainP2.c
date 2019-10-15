/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainP2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 19:59:44 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/15 10:18:17 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

void	substr()
{
	for (int i = 0; i < 5; i++)
		printf("\n");
	printf("TESTING FT_SUBSTR :\n");
	printf("[With NULL string : %s] --- [expect : NULL]\n", ft_substr(NULL, 10, 5));
	printf("[With empty string : %s] --- [expect : empty string]\n", ft_substr("", 10, 5));
	printf("[With string and 0 len : %s] --- [expect : empty string]\n", ft_substr("Hello world", 5, 0));
	printf("[Normal case : %s] --- [expect : Hello]\n", ft_substr("Hello world", 0, 5));
	printf("[With string and 0 len : %s] --- [expect : empty string]\n", ft_substr("Hello world", 400, 5));
	printf("[With string and 0 len : %s] --- [expect : world]\n", ft_substr("Hello world", 6, 400));
	printf("[With string and 0 len : %s] --- [expect : empty string]\n", ft_substr("Hello world", 400, 400));
	for (int i = 0; i < 5; i++)
		printf("\n");
}

void	strjoin()
{
	for (int i = 0; i < 5; i++)
		printf("\n");
	printf("TESTING FT_STRJOIN : \n");
	printf("[With normal params : %s] --- [expect : HelloWorld]\n", ft_strjoin("Hello", "World"));
	printf("[With first param NULL : %s] --- [expect : NULL]\n", ft_strjoin(NULL, "World"));
	printf("[With second param NULL : %s] --- [expect : NULL]\n", ft_strjoin("Hello", NULL));
	for (int i = 0; i < 5; i++)
		printf("\n");
}

void	strtim()
{
	for (int i = 0; i < 5; i++)
		printf("\n");
	printf("TESTING FT_STRTRIM : \n");
	printf("[String with only set : %s] --- [expect : empty string]\n", ft_strtrim("     a ", " a"));
	printf("[Normal arg : %s] --- [expect : Hello World]\n", ft_strtrim("   ___Hello World   __", " _"));
	printf("[With NULL string : %s] --- [expect : NULL]\n", ft_strtrim(NULL, " "));
	printf("[With NULL set : %s] --- [expect : NULL]\n", ft_strtrim("Hey you", NULL));
	printf("[With empty set : %s] --- [expect : __Hey you__]\n", ft_strtrim("__Hey you__", ""));
	printf("[With empty string : %s] --- [expect : empty string]\n", ft_strtrim("", " "));
	for (int i = 0; i < 5; i++)
		printf("\n");
}

void	split()
{
	char		**splited;
	int			i;
//	for (int i = 0; i < 5; i++)
//		printf("\n");
	ft_putstr_fd("TESTING FT_SPLIT\n", 1);
	splited = ft_split("Coucou les copains", 's');
	ft_putstr_fd("With string : Coucou les copains and sep is space\n", 1);
	i = -1;
	while (splited[++i])
		printf("%s\n", splited[i]);
//	for (int i = 0; i < 5; i++)
//		ft_putstr_fd("\n", 1);
}

int		main(void)
{
	// substr();
	// strjoin();
	// strtim();
	split();
	return (0);
}
