/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:08:42 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/15 17:02:07 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/*
int	main(void)
{
	char	c = 65;
	char	c_min = 97;
	char	c_other = 127;

	printf("%c\n", tolower(c));
	printf("%c\n", tolower(c_min));
	printf("%c\n\n", tolower(c_other));

	printf("%c\n", ft_tolower(c));
	printf("%c\n", ft_tolower(c_min));
	printf("%c\n", ft_tolower(c_other));

	return (0);
}
*/
