/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:11:30 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/15 17:02:16 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

/*
int	main(void)
{
	char	c = 127;
	char	c_maj = 65;
	char	c_other = 1;

	printf("%c\n", toupper(c));
	printf("%c\n", toupper(c_maj));
	printf("%c\n\n", toupper(c_other));

	printf("%c\n", ft_toupper(c));
	printf("%c\n", ft_toupper(c_maj));
	printf("%c\n", ft_toupper(c_other));

	return (0);
}
*/
